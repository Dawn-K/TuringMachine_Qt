#include"houduan.h"

std::map<inputNode,outputNode> DB; // data base 不能用unorder_map(不可哈希性)
std::set<std::string> FinalStaSet; // 终止状态集合

outputNode SearchDB(const inputNode input,bool &success){
    auto iter = DB.find(input);
    if(iter == DB.end()){ // 查询失败
        success = 0;
        return outputNode(' '," ",0);
    }else { // 查询成功
        success=1;
        return (*iter).second;
    }
}


bool SearchFSS(const std::string mySta){
    auto iter = FinalStaSet.find(mySta);
    return iter!=FinalStaSet.end();
}

std::vector<std::string> readFile(std::ifstream &in,std::string &curSta){
    std::string tmp;
    std::vector<std::string> vec;
    in>>tmp; // s:
    in>>tmp; // 初始状态
    curSta = tmp;
    in>>tmp; // f:
    while (in>>tmp&&tmp!="6:") {
        std::cerr<<"FSS: "<<tmp<<std::endl;
        FinalStaSet.insert(tmp);
        vec.push_back(tmp);
    }
    char ch1,ch2; // 旧字符,新字符
    std::string oldSta,newSta,Dre; // 旧状态,新状态,移动方向
    int cnt=0;
    while(in>>ch1>>oldSta>>ch2>>newSta>>Dre){
        std::cerr<<++cnt<<" : "<<ch1<<" "<<oldSta <<" "<<ch2<<" "<<oldSta<<" "<<Dre<<std::endl;
        int intDre;
        if(Dre=="R"){
            intDre=1;
        }else if (Dre=="L") {
            intDre=-1;
        }else {
            intDre=0;
        }
        DB.insert(std::make_pair(inputNode(ch1,oldSta),outputNode(ch2,newSta,intDre)));
    }
    return vec;
}

