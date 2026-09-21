#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    int id;
    string name;
    string author;
    int status; //0ÔÚ¹Ý£¬1ÒÑ½è³ö
public:
    Book(int id_, string name_, string author_);
    void setBorrowStatus(int s);
    int getBorrowStatus();
    int getId();
    void show();
};

#endif
