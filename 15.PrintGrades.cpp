#include<iostream>
using namespace std;

int main()
{
	int M;
	cout<<"Enter student's marks: ";
    cin>>M;
	if (M < 40){
		cout<<"Student grade = F";
	}
	else if (M < 50){
		cout<<"Student grade = E";
	}
	else if (M < 60){
		cout<<"Student grade = D";
	}
	else if (M < 70){
		cout<<"Student grade = C";
	}
	else if (M < 80){
		cout<<"Student grade = B";
	}
	else{
		cout<<"Student grade = A";
	}
return 0;
}


