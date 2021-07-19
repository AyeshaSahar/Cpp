#include<iostream>
 
using namespace std;
 
int main()
{
	int a[2][2],d1sum=0,d2sum=0,dsum=0,i,j;
    cout<<"Enter matrix:";
    for ( i = 0; i < 2; i++)
	{
		for ( j = 0; j < 2; j++)
		{
        cin>>a[i][j];
        }
    }		
	cout<<"The matrix entered by user is";
	for ( i = 0; i < 2; i++)
	{
		cout<<endl;
		for ( j = 0; j < 2; j++)
		{
			cout<<a[i][j]<<' ';
        }
	}
	cout<<endl;
			
	for(i=0;i<2;++i)
		for(j=0;j<2;++j)
		{
			if(i==j)
				d1sum+=a[i][j];
			if(i+j==(2-1))
				d2sum+=a[i][j];
		}
	dsum= d1sum+d2sum;
	
	cout<<"\nSum of 1st diagonal is "<<d1sum;
	cout<<"\nSum of 2nd diagonal is "<<d2sum;
	cout<<"\nSum of both diagonals is "<<dsum;
	
 
	return 0;
}
