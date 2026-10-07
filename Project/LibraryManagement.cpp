#include <iostream>
using namespace std;

class User;
class Book
{
    int bookId;
    string bookName;
    int pages, available, issued;

public:
    Book() {}
    Book(int id, string name, int pgs, int avl, int iss)
    {
        bookId = id;
        bookName = name;
        pages = pgs;
        available = avl;
        issued = iss;
    }
    int getId()
    {
        return bookId;
    }
    string getName()
    {
        return bookName;
    }
    int getPages()
    {
        return pages;
    }
    int getAvailable()
    {
        return available;
    }
    int getIssued()
    {
        return issued;
    }
    void update(string name, int pgs, int av, int iss)
    {
        bookName = name;
        pages = pgs;
        available = av;
        issued = iss;
    }
    void display()
    {
        cout << "Book Details:" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "Id: " << bookId << endl;
        cout << "Name: " << bookName << endl;
        cout << "Number of Pages: " << pages << endl;
        cout << "Available Copies: " << available << endl;
        cout << "Issued Copies: " << issued << endl;
        cout << "-----------------------------------------" << endl;
    }
    friend void issueBook(User u, Book b);
    friend void returnBook(User u, Book b);
};

int main()
{

    return 0;
}