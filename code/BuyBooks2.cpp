#include<iostream>
#include<string>
using namespace std;

class Book{
    float price_;
    int stock_;
    string publisher_;
    string author_;
    string title_;
    public:
    Book();
    Book(string title, string author, string publisher, float price, int stock);
    void display();
    float price();
    int stock();
    string publisher();
    string author();
    string title();
};

Book::Book()
{
    price_ = 0.0;
    stock_  = 0;
    author_ = "";
    title_ = "";
    publisher_ = "";
}

Book::Book(string title, string author, string publisher, float price, int stock){
    price_ = price;
    stock_ = stock;
    author_ = author;
    title_ = title;
    publisher_ = publisher;
}

float Book::price(){
    return price_;
}

int Book::stock(){
    return stock_;
}

string Book::author(){
    return author_;
}

string Book::title(){
    return title_;
}

string Book::publisher(){
    return publisher_;
}

void Book::display(){
    cout<<"Title : "<< title_ << endl
        <<"Author : "<< author_ << endl
        <<"Price : "<< price_ << endl
        <<"Publisher : "<< publisher_ << endl
        <<"Stock : "<< stock_ << endl;
}

class Inventory{
    Book *books;
    int numBooks;
    int currBooks;
    public:
    Inventory();
    Inventory(int n);
    void addBook(string title, string author, string publisher, float price, int stock);
    void displayBooks();
};

Inventory::Inventory(){
    currBooks = 0;
    numBooks = 100;
    Book tmp[numBooks];
    books = tmp;
}

Inventory::Inventory(int n){
    currBooks = 0;
    numBooks = n;
    Book tmp[numBooks];
    books = tmp;
}

void Inventory::addBook(string title, string author, string publisher, float price, int stock){
    Book b(title, author, publisher, price, stock);
    books[currBooks] = b;
    ++currBooks;
}

void Inventory::displayBooks(){
    for(int i=0; i<currBooks; ++i)
    {
        books[i].display();
    }
}

int main()
{
    Inventory inv;
    inv.addBook("abc", "def", "ghi", 30.5, 10);
    inv.addBook("jkbjweh", "ewfewf", "efewf", 100.5, 15);
    inv.displayBooks();

}