#include <iostream>
using namespace std;
int main()
{
	int n, position, value, choice,del, found = 0;
	cout<<"How many elements do you want to enter in this list? "<<endl;
	cin>>n;
	cout<<"\nEnter the elements: "<<endl;
	int list[n];
	for (int i = 0; i< n; i++){
		cin>>list[i];
	}
	
	cout<< "\nWhat do you want to do? Enter 1 to insert an element and Enter 2 to del an element: "<<endl;
	cin>>choice;
	
	if (choice == 1)
	{
		cout<<"\nEnter the location where you wish to insert an element: "<<endl;
		cin>>position;
		cout<<"\nEnter the value to insert: "<<endl;
		cin>>value;
		for (int i = n - 1; i >= position - 1; i--)
		{
		list[i+1] = list[i];
		}
		list[position-1] = value;
		cout<<"\nResultant array is: "<<endl;
		for (int i = 0; i <= n; i++)
		{
		cout<<list[i]<<" "; 
		}
	}
	else if (choice == 2){
		 cout<<"\nEnter Element to Delete: ";
	    cin>>del;
	    for(int i=0; i<n; i++)
	    {
	        if(list[i]==del)
	        {
	            for(int j = i; j<(n-1); j++)
	                list[j] = list[j+1];
	            found=1;
	            i--;
	            n--;
	        }
	    }
	    if(found==0)
	        cout<<"\nElement doesn't found in the Array!";
	    else
	    {
	        cout<<"\nElement Deleted Successfully!";
	        cout<<"\n\nThe New Array is:\n";
	        for(int i=0; i<n; i++)
	            cout<<list[i]<<"  ";
	    }
	}
	
	else{
		cout<<"\nInvalid Input!";
	}
	return 0;
}
