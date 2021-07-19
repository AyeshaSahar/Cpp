#include<iostream>
using namespace std;

int main()
{
	char city[20][25];
	int n, i;
	cout<<"How many names do you wish to input? "<<endl;
	cin>>n;
	for(i=0; i<n; i++){
		cout<<"\nCity "<<i+1<<": ";
		gets(city[i]);
	}
	cout<<"\nDisplaying the names of cities: ";
	for(i=0; i<n; i++){
		cout<<"\n"<<city[i];
	}
	return 0;	
}
