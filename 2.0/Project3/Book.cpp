#include "Book.h"

//Book类构造函数实现
Book::Book(string b, string i, string n, string a, string p)
{
    barCode = b;
    isbn = i;
    name = n;
    author = a;
    publisher = p;
    canBorrow = true; //新书默认可借阅
}

//设置图书借阅状态
void Book::setBorrow(bool flag)
{
    canBorrow = flag;
}

//获取借阅状态
bool Book::getBorrowStatus()
{
    return canBorrow;
}

//获取图书条码
string Book::getBarCode()
{
    return barCode;
}

//输出图书信息
void Book::showInfo()
{
    cout << "条码：" << barCode
        << " ISBN：" << isbn
        << " 书名：" << name
        << " 作者：" << author
        << " 出版社：" << publisher
        << " 状态：" << (canBorrow ? "可借阅" : "已借出") << endl;
}
