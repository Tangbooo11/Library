#ifndef LIBRARY_H
#define LIBRARY_H
#include "Book.h"

//图书馆类 Library，【组合关系】Library包含多个Book对象
class Library
{
private:
    Book* bookList[100]; //存放图书指针数组，最多100本书
    int count;           //当前已有图书数量
public:
    //构造函数：初始化图书数量为0
    Library();

    //添加图书到图书馆
    void addBook(Book* b);
    //根据条码查找图书，返回图书指针
    Book* findBook(string code);
    //展示所有图书
    void showAll();
    //借书操作
    bool borrowBook(string code);
    //还书操作
    bool returnBook(string code);
};

#endif
