#include<iostream> 
using namespace std; 
int main()
{
	int i;
	char word[100];
	cout<<"Enter a string: ";
	gets(word);
	for (i = 0; word[i]; i++);
	cout << "The length of the string is: "<< i << endl;
	return 0;
}
