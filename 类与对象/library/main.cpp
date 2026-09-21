#include <iostream>
#include "Book.h"
#include "Library.h"
using namespace std;

int main()
{
    Library lib;
    Book b1(1001, "C++面向对象程序设计", "张三");
    Book b2(1002, "数据结构", "李四");
    lib.addBook(&b1);
    lib.addBook(&b2);

    int choice;
    while (true)
    {
        cout << "\n========图书管理系统========\n";
        cout << "1.查看全部图书\n";
        cout << "2.借书（输入图书编号）\n";
        cout << "3.还书（输入图书编号）\n";
        cout << "0.退出系统\n";
        cout << "===========================\n";
        cout << "请输入你的选择：";
        cin >> choice;

        if (choice == 0)
        {
            cout << "系统退出！" << endl;
            break;
        }
        else if (choice == 1)
        {
            lib.showAllBook();
        }
        else if (choice == 2)
        {
            int bid;
            cout << "请输入要借阅的图书编号：";
            cin >> bid;
            lib.borrowBook(bid);
        }
        else if (choice == 3)
        {
            int bid;
            cout << "请输入要归还的图书编号：";
            cin >> bid;
            lib.returnBook(bid);
        }
        else
        {
            cout << "输入错误，请重新选择！" << endl;
        }
    }
    return 0;
}
