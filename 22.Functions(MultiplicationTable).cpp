#include<iostream>
using namespace std;	
int table(int n);
int main ()
{
int n1,product;
cout <<"Enter the number whose table has to be printed: ";
cin >> n1;
product=table(n1);
return 0;
}
int table(int n)
{
int i=0,product=1;
for(i=1;i<=10;i++)
{
product=n*i;
cout<<n<<"*"<<i<<" = "<<product<<endl;
}
return(product);
}
