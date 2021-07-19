#include <iostream>
using namespace std;

struct Person
{
    char name[90];
    char gender[20];
    int age;
    int height;
};

int main()
{
    Person p1;
    cout << "Enter Full Name: ";
    cin.getline(p1.name, 90);
    cout << "Enter Gender: ";
    cin.getline(p1.gender, 20);
    cout << "Enter Age: ";
    cin>>p1.age;
    cout << "Enter Height(in cm): ";
    cin>>p1.height;
    
    cout << "\nDisplaying Information..............." << endl;
    cout << "\nFull Name: " << p1.name << endl;
    cout << "Gender: " << p1.gender << endl;
    cout << "Age: " << p1.age << endl;
    cout <<"Height(in cm): " << p1.height << endl;
    
    return 0;
}
