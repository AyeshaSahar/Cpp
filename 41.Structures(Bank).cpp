#include <iostream>
using namespace std;

struct Bank
{
    char name[80];
    char address[200];
    int code;
};

int main()
{
    Bank b2;
    cout << "Enter Bank Name: ";
    cin.getline(b2.name,80);
    cout << "Enter Address: ";
    cin.getline(b2.address,200);
    cout << "Enter Bank Code: ";
    cin>>b2.code;
 
    cout << "\nDisplaying Information..............." << endl;
    cout << "\nBank Name: " << b2.name << endl;
    cout <<"Adress: " << b2.address << endl;
    cout << "Bank Code: " << b2.code << endl;

    return 0;
}
