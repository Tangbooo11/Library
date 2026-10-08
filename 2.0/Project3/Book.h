#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;

//图书类 Book
class Book
{
private:
    string barCode;     //图书条码号
    string isbn;        //ISBN编号
    string name;        //书名
    string author;      //作者
    string publisher;   //出版社
    bool canBorrow;     //是否可借 true可借 false已借出
public:
    //构造函数：初始化图书信息
    Book(string b, string i, string n, string a, string p);

    //设置借阅状态
    void setBorrow(bool flag);
    //获取借阅状态
    bool getBorrowStatus();
    //获取图书条码
    string getBarCode();
    //打印图书全部信息
    void showInfo();
};

#endif
