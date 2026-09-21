#ifndef LIBRARY_H
#define LIBRARY_H
#include "Book.h"

class Library
{
private:
    Book* bookList[100];
    int bookCount;
public:
    Library();
    void addBook(Book* b);
    void showAllBook();
    int findBookById(int id);
    void borrowBook(int id);
    void returnBook(int id);
};

#endif
