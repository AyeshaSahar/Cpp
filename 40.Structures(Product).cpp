#include <iostream>
using namespace std;

struct Product
{
    char product[50];
    char type[60];
    int price;
};

int main()
{
    Product p1;
    cout << "Enter Product Name: ";
    cin.getline(p1.product, 50);
    cout << "Enter Product type: ";
    cin.getline(p1.type,60);
    cout << "Enter Price(in Rs): ";
    cin>>p1.price;
    
    cout << "\nDisplaying Information..............." << endl;
    cout << "\nProduct Name: " << p1.product << endl;
    cout << "Product type: " << p1.type << endl;
    cout <<"Price: " << p1.price << endl;

    return 0;
}
