#include "Library.h"

//图书馆构造函数
Library::Library()
{
    count = 0;
}

//添加图书
void Library::addBook(Book* b)
{
    if (count < 100)
    {
        bookList[count++] = b;
    }
}

//查找图书：输入条码，找到返回Book指针，找不到返回nullptr
Book* Library::findBook(string code)
{
    for (int i = 0; i < count; i++)
    {
        if (bookList[i]->getBarCode() == code)
        {
            return bookList[i];
        }
    }
    return nullptr;
}

//展示全部图书
void Library::showAll()
{
    cout << "\n====图书列表====" << endl;
    for (int i = 0; i < count; i++)
    {
        bookList[i]->showInfo();
    }
}

//借书函数
bool Library::borrowBook(string code)
{
    Book* p = findBook(code);
    if (p == nullptr)
        return false; //图书不存在
    if (p->getBorrowStatus())
    {
        p->setBorrow(false); //标记为已借出
        return true;
    }
    return false; //图书已经被借走
}

//还书函数
bool Library::returnBook(string code)
{
    Book* p = findBook(code);
    if (p == nullptr)
        return false;
    if (!p->getBorrowStatus())
    {
        p->setBorrow(true); //标记为可借阅
        return true;
    }
    return false; //图书本来就在馆，无需归还
}
