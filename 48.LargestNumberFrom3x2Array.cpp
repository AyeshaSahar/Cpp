#include<iostream>
using namespace std;
 
int main()
{
    int a[3][2],l_num=1,big2=0,row,col,i,j;
	row = 3;
	col = 2;
	
	//Taking input from user
    cout<<"Enter the array:\n";
    for(i=0;i<row;i++){
    	for(j=0;j<col;++j){
    		cin>>a[i][j];}	
    }
        
	//To identify the largest number
    for(i=0;i<row;++i){
    	for(j=0;j<col;++j) {
            if(a[i][j]>l_num)
                l_num=a[i][j];}
    }

	//Printing the result
    cout<<"\nLargest number is:"<<l_num;
    return 0;
}
















/*#include<iostream>
 
using namespace std;
 
int main()
{
    int a[3][2],big1=1,n,m,i,j;
    cout<<"Enter the array:\n";
    cin>>a[3][2];
 
    for(i=0;i<m;i++)
        for(j=0;j<n;++j)
            cin>>a[i][j];
 
    for(i=0;i<m;++i)
        for(j=0;j<n;++j)
        {
            if(a[i][j]>big1)
                big1=a[i][j];
        }
 
    cout<<"\nLargest number:"<<big1;
 
    return 0;
} */

