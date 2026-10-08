#include "Library.h"

//【依赖关系】main函数依赖Library、Book类，调用其方法完成交互菜单
int main()
{
    Library lib;
    //创建两本图书对象
    Book b1("B001", "9787111128069", "C++程序设计", "张三", "机械工业出版社");
    Book b2("B002", "9787115546081", "数据结构", "李四", "人民邮电出版社");

    //将图书加入图书馆
    lib.addBook(&b1);
    lib.addBook(&b2);

    int choice;
    string code;
    while (true)
    {
        cout << "\n====阶段2 组合依赖 图书管理====\n";
        cout << "1.查看全部图书\n";
        cout << "2.借书\n";
        cout << "3.还书\n";
        cout << "0.退出\n";
        cout << "请输入选择：";
        cin >> choice;

        if (choice == 0)
        {
            cout << "退出系统\n";
            break;
        }
        else if (choice == 1)
        {
            lib.showAll();
        }
        else if (choice == 2)
        {
            cout << "输入图书条码：";
            cin >> code;
            if (lib.borrowBook(code))
                cout << "借书成功\n";
            else
                cout << "借书失败，不存在或已借出\n";
        }
        else if (choice == 3)
        {
            cout << "输入图书条码：";
            cin >> code;
            if (lib.returnBook(code))
                cout << "还书成功\n";
            else
                cout << "还书失败\n";
        }
        else
        {
            cout << "输入错误！\n";
        }
    }
    return 0;
}
