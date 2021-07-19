#include<iostream>
using namespace std; 
int main() 
{
	int row,column;
	cout<<"Enter number of rows: ";
	cin>>row;
	cout<<"\nEnter number of columns: ";
	cin>>column;
	int matrix[row][column];
	cout<<"\nEnter matrix elements:\n";
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			cin>>matrix[i][j];}
		}
	cout<<"\n";
	
	//Lower Triangular matrix
	cout << "Lower triangular matrix is: \n"; 
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++){
			if (i < j){
				cout << "0" << " ";	}
			else{
				cout << matrix[i][j] << " ";}		
		}
	cout << endl; 	
	}
	
	// Upper Triangular matrix
	cout << "\nUpper triangular matrix is: \n";
	for (int i = 0; i < row; i++){
		for (int j = 0; j < column; j++){
			if (i > j){
				cout << "0" << " "; }
			else{
				cout << matrix[i][j] << " "; }
		}
	cout << endl;
	}
	return 0;
}
	
  
		
	  	
	  
  
