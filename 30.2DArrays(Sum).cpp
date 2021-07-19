#include <iostream>
using namespace std;

int main()
{
    int row, col, x[100][100], y[100][100], sum[100][100], i, j;

    cout << "Enter the number of rows of matrix: ";
    cin >> row;

    cout << "Enter the number of columns of matrix: ";
    cin >> col;

    // To store elements of 1st matrix entered by user
    cout << endl << "Enter the elements of 1st matrix: " << endl;
    for(i = 0; i < row; ++i)
       for(j = 0; j < col; ++j)
       {
           cout << "Enter element x" << i + 1 << j + 1 << " : ";
           cin >> x[i][j];
       }

    // To store elements of 2nd matrix entered by user
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < row; ++i)
       for(j = 0; j < col; ++j)
       {
           cout << "Enter element y" << i + 1 << j + 1 << " : ";
           cin >> y[i][j];
       }

    // Addition
    for(i = 0; i < row; ++i)
        for(j = 0; j < col; ++j)
            sum[i][j] = x[i][j] + y[i][j];

    // To display the resultant sum matrix
    cout << endl << "Sum of two matrices is: " << endl;
    for(i = 0; i < row; ++i)
        for(j = 0; j < col; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == col - 1)
                cout << endl;
        }
    
    // To display the resultant sub matrix
    cout << endl << "After subtraction of two matrices, ans is: " << endl;
    for(i = 0; i < row; ++i)
        for(j = 0; j < col; ++j)
        {
        	cout << sub[i][j] << " "; 
        	if(j == col - 1)
                cout << endl;
        }
    return 0;
}
