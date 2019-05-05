#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "houduan.h"
int curPos=0;
char curCh=' ';
std::string str="";
std::string curSta="";
std::string startSta="";
std::string curFile="";
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Init();
    // std::cerr<<"HELLO!"<<std::endl;
    // connect(ui->BTN_LoadString, SIGNAL(clicked()), this, SLOT(on_LoadStringButton_clicked()));
    // connect(ui->BTN_NextStep, SIGNAL(clicked()), this, SLOT(on_BTN_NextStep_clicked()));
    // connect(ui->BTN_RESET, SIGNAL(clicked()), this, SLOT(on_BTN_RESET_clicked()));
    // connect(ui->BTN_LoadFile, SIGNAL(clicked()), this, SLOT(on_BTN_LoadFile_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Init(){ // 预先读取文件
    DIR    *dir;
    struct dirent *ptr;
    dir = opendir("."); //  open the dir
    while((ptr = readdir(dir)) != NULL) //  read the list of this dir
    {
        std::string tmp = ptr->d_name;
        int len = tmp.size();
        if(len>=3 && tmp[len-4]=='.' && tmp[len-3]=='t' && tmp[len-2]=='x'&&tmp[len-1]=='t'){
            ui->CB_selectTM->addItem(ptr->d_name);
        }
        // printf("d_type:%d d_name: %s\n", ptr->d_type,ptr->d_name);
    }
    closedir(dir);
}

// 可视化打印字符串
void MainWindow::PrintString(){
    std::cerr<<"string: "<<str<<std::endl;
    std::cerr<<"pos: "<<curPos<<std::endl;
    std::cerr<<"sta: "<<curSta<<std::endl;
    //    QCoreApplication::sendEvent();
    update();
}


void MainWindow::on_BTN_NextStep_clicked()
{
    // std::cerr<<"NEXT STEP"<<std::endl;
    bool success;
    outputNode ans = SearchDB(inputNode(str[curPos],curSta),success);
    if(success){
        std::cerr<<"NEXT STEP is right"<<std::endl;
        str[curPos] = ans.newCh;
        curSta = ans.newStatus;
        curPos += ans.movDre;
        if(curPos<0){
            curPos++;
            str = 'B'+str;
        }else if (curPos >= (int)str.size()) {
            str = str +'B';
        }
        PrintString();
    }else { // 检测到非法的移动,如果是终止状态,则宣布字符串合法,如果不是,则宣布字符串不合法
        std::cerr<<"NEXT STEP is wrong"<<std::endl;
        PrintString();
        if(SearchFSS(curSta)){
            QMessageBox::information(NULL, "判断完毕", "该字符串合法!", QMessageBox::Yes);
            on_BTN_RESET_clicked();
        }else {
            QMessageBox::information(NULL, "判断完毕", "该字符串非法!", QMessageBox::Yes);
            on_BTN_RESET_clicked();
        }
    }
}

void MainWindow::on_BTN_RESET_clicked()
{
        str="";
        curPos=0;
        curCh=' ';
        ui->LE_inputString->setText("");
        PrintString();
}

void MainWindow::on_BTN_LoadFile_clicked()
{
    //    DIR    *dir;
    //    struct    dirent    *ptr;
    //    dir = opendir("."); // open the dir

    std::ifstream OpenFile(curFile);
    if(OpenFile.fail()){
        std::cerr<<"文件打开失败"<<std::endl;
        exit(0);
    }
    std::vector<std::string>vec= readFile(OpenFile,startSta);
    curSta = startSta;
    ui->LE_startStatus->setText(QString::fromStdString(curSta));
    int len=vec.size();
    std::string outputTmp="";
    for(int i=0;i<len;++i){
        outputTmp +=vec[i]+" ";
    }
    ui->LE_finalStatus->setText(QString::fromStdString(outputTmp));
    OpenFile.close();
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QFont font;
    font.setFamily("consolas");
    font.setPixelSize(70); //设置字体像素大小
    QString text=QString::fromStdString(str); //设置显示的文本
    QFontMetrics metrics(font);
    int w=metrics.width(text); //获取显示文本的宽度
    int h=metrics.height(); //获取显示文本的高度
    painter.setFont(font);
    painter.setPen(Qt::blue);
    painter.drawText(QRect(width()/2-w/2,height()/5*4-h,w,h),text);
    int perW ;
    if(str.size()){
        painter.setPen(Qt::red);
        perW =  w/str.size();
      //  painter.drawRect(QRect(width()/2-w/2+perW*curPos,height()/5*4-h,perW,h));
        QFont font1("consolas",15,QFont::Bold,true);
        QFontMetrics newMetrics(font1);
        int newW = newMetrics.width(QString::fromStdString(curSta));
        int newH  = newMetrics.height();
        painter.setFont(font1);
        painter.drawText(QRect(width()/2-w/2+perW*curPos+10,height()/5*4-h-25,perW,h),QString::fromStdString("↧"));
        painter.drawText(QRect(width()/2-w/2+perW*curPos,height()/5*4-h-50,newW,newH),QString::fromStdString(curSta));
    }

    //
    //  qDebug()<<"w:"<<w; //一个字符大小为12*24,所以宽度为12*7
    // qDebug()<<"h:"<<h; //高度为24
}

void MainWindow::on_BTN_LoadString_clicked()
{
    QString mInputString = ui->LE_inputString->text();
    str = mInputString.toStdString();
    curPos=0;
    curCh=str[curPos];
    curSta = startSta;
    PrintString();
}

void MainWindow::on_CB_selectTM_currentIndexChanged(const QString &arg1)
{
    curFile = arg1.toStdString();
}
