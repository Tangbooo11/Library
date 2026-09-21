#include "Book.h"

Book::Book(int id_, string name_, string author_)
{
    id = id_;
    name = name_;
    author = author_;
    status = 0;
}

void Book::setBorrowStatus(int s)
{
    if (s == 0 || s == 1)
        status = s;
}

int Book::getBorrowStatus()
{
    return status;
}

int Book::getId()
{
    return id;
}

void Book::show()
{
    cout << "编号：" << id
        << " 书名：" << name
        << " 作者：" << author
        << " 状态：" << (status == 0 ? "在馆" : "已借出") << endl;
}
