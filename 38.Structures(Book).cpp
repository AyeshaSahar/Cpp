#include <iostream>
using namespace std;

struct Book
{
    char title[50];
    char author[60];
    char publisher[80];
    char genres[100];
};

int main()
{
    Book b1;
    
    cout << "Enter Title of the book: ";
    cin.getline(b1.title, 50);
    cout << "Enter Author name: ";
    cin.getline(b1.author,60);
    cout << "Enter Publisher name: ";
    cin.getline(b1.publisher,80);
    cout << "Enter Genres: ";
    cin.getline(b1.genres,100);
    

    cout << "\nDisplaying Information..............." << endl;
    
    cout << "\nTtile: " << b1.title << endl;
    cout << "Author: " << b1.author << endl;
    cout <<"Publisher: " << b1.publisher << endl;
    cout <<"Genres: " << b1.genres << endl;
    return 0;
}
