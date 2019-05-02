#ifndef HOUDUAN_H
#define HOUDUAN_H

#include"mainwindow.h"

struct inputNode{
    char ch;
    std::string status;
    inputNode(char myCh,std::string myStatus){
        ch = myCh;
        status = myStatus;
    }
    bool operator<(const inputNode &oth)const{
        if(ch!=oth.ch){
            return ch<oth.ch;
        }
        return status<oth.status;
    }
};

struct outputNode{
    char newCh;
    std::string newStatus;
    int movDre; // 移动方向,1为右移,-1为左移,0为不动;
    outputNode(char myCh,std::string myStatus,int myMovDre){
        newCh =myCh;
        newStatus = myStatus;
        movDre = myMovDre;
    }
    bool operator<(const outputNode &oth)const{
        if(newCh!=oth.newCh){
            return newCh<oth.newCh;
        }
        return newStatus<oth.newStatus;
    }
};

outputNode SearchDB(const inputNode input,bool &flag);

bool SearchFSS(const std::string mySta);

std::vector<std::string> readFile(std::ifstream &in,std::string &curSta);

#endif // HOUDUAN_H
