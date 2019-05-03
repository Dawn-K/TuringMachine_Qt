#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QTableWidget>
#include <QPainter>
#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <cmath>
#include <queue>
#include <map>
#include <set>
#include <sys/types.h>

#ifdef _WIN32
 #include "myDirent.h"
#endif

#ifdef linux
#include <dirent.h>
// #include <unistd.h>
#endif
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void Init();

    void on_BTN_NextStep_clicked();

    void on_BTN_RESET_clicked();

    void PrintString();

    void on_BTN_LoadFile_clicked();

    void on_BTN_LoadString_clicked();

    void on_CB_selectTM_currentIndexChanged(const QString &arg1);

    void paintEvent(QPaintEvent *event);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
