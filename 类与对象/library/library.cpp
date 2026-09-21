#include "Library.h"

Library::Library()
{
    bookCount = 0;
}

void Library::addBook(Book* b)
{
    if (bookCount < 100)
    {
        bookList[bookCount++] = b;
    }
    else
    {
        cout << "图书馆已满，无法添加！" << endl;
    }
}

void Library::showAllBook()
{
    cout << "\n=====图书馆图书列表=====\n";
    if (bookCount == 0)
    {
        cout << "暂无图书！" << endl;
        return;
    }
    for (int i = 0; i < bookCount; i++)
    {
        bookList[i]->show();
    }
}

int Library::findBookById(int id)
{
    for (int i = 0; i < bookCount; i++)
    {
        if (bookList[i]->getId() == id)
        {
            return i;
        }
    }
    return -1;
}

void Library::borrowBook(int id)
{
    int idx = findBookById(id);
    if (idx == -1)
    {
        cout << "未找到该图书！" << endl;
        return;
    }
    if (bookList[idx]->getBorrowStatus() == 0)
    {
        bookList[idx]->setBorrowStatus(1);
        cout << "借书成功！" << endl;
    }
    else
    {
        cout << "这本书已经被借走！" << endl;
    }
}

void Library::returnBook(int id)
{
    int idx = findBookById(id);
    if (idx == -1)
    {
        cout << "未找到该图书！" << endl;
        return;
    }
    if (bookList[idx]->getBorrowStatus() == 1)
    {
        bookList[idx]->setBorrowStatus(0);
        cout << "还书成功！" << endl;
    }
    else
    {
        cout << "本书本来就在馆！" << endl;
    }
}
