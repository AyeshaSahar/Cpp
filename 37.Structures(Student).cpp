#include <iostream>
using namespace std;

struct Student
{
    char name[50];
    char university[60];
    int semester;
};

int main()
{
    Student s1;
    
    cout << "Enter Full Name: ";
    cin.getline(s1.name, 50);
    cout << "Enter University name: ";
    cin.getline(s1.university,60);
    cout << "Enter semester #: ";
    cin>>s1.semester;

    cout << "\nDisplaying Information..............." << endl;
    cout << "\nName: " << s1.name << endl;
    cout << "University: " << s1.university << endl;
    cout <<"Semester #: " << s1.semester << endl;
    return 0;
}
