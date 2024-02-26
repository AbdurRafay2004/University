/*
    Problem: Library management system
*/
#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title, author;
    string ISBN;

public:
    Book(const string &title, const string &author, const string &ISBN) : title(title), author(author), ISBN(ISBN)
    {
        cout << "Book \"" << title << "\" created." << endl;
    }
    ~Book()
    {
        cout << "The Book \"" << title << "\"destroyed.\n";
    }
};

int main()
{

    Book b1("Introduction to OOP", "John Doe", "123456789");
    Book b2("Data Structure and Algorithms", "James Smith", "987654321");

    return 0;
}