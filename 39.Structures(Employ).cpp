#include <iostream>
using namespace std;

struct Employ
{
    char name[60];
    char designation[60];
    int age;
    float salary;
};

int main()
{
	
    Employ e1;
    
    cout << "Enter Full Name: ";
    cin.getline(e1.name,60);
    cout << "Enter Designation: ";
    cin.getline(e1.designation,60);
    cout << "Enter Age: ";
    cin>>e1.age;
    cout << "Enter Salary(in Rs): ";
    cin>>e1.salary;

    cout << "\nDisplaying Information..............." << endl;
    
    cout << "\nName: " << e1.name << endl;
    cout << "Designation: " << e1.designation << endl;
    cout <<"Age: " << e1.age << endl;
    cout <<"Salary(in Rs): " << e1.salary << endl;
    return 0;
}
