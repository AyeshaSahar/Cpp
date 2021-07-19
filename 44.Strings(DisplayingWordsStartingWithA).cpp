#include<iostream>
using namespace std;

int main()
{
	char word[20][25];
	int n;
	cout<<"No of words you wish to input? "<<endl;
	cin>>n;
	cout<<"\nEnter the words: "<<endl;
	for(int i=0; i < n; i++){
		cout<<"\n"<<i+1<<": ";
		cin>>word[i];
	}
	for(int i=0; i<n; i++){
		if(word[i][0]=='A'){
			cout<<"\nDisplaying words starting with A: ";
			cout<<"\n"<<word[i];}
		else{
			cout<<"";	}
	}
	return 0; 	
}
