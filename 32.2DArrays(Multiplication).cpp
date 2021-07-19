#include <iostream>
using namespace std;
int main()
{
    
    int row1, col1, row2, col2, i, j, k;
    int mat1[10][10], mat2[10][10], multi[10][10];
    cout << "Enter the number of Rows and Columns of first matrix : ";
    cin >> row1>>col1;
    cout << "Enter the number of Rows and Columns of second matrix : ";
    cin >> row2>>col2;

    if (col1 == row2) 
	{
        cout << "\nEnter the first matrix : \n";
        for (i = 0; i < row1; i++) {
            for (j = 0; j < col1; j++) {
                cin >> mat1[i][j];}
        }

        cout << "\nEnter the second matrix : \n";

        for (i = 0; i < row2; i++) {
            for (j = 0; j < col2; j++) {
                cin >> mat2[i][j];}
        }
        
        //calculating the Product matrix - containing #rows and #columns of the 1st and the 2nd matrix respectively.
        for (i = 0; i < row1; i++) {
            for (j = 0; j < col2; j++) {
                multi[i][j] = 0;
                for (k = 0; k < col1; k++)
                    multi[i][j] = multi[i][j] + (mat1[i][k] * mat2[k][j]);}
        }

        cout << "\nThe Product matrix is : \n";
        for (i = 0; i < row1; i++){
            for (j = 0; j < col2; j++){
                cout << multi[i][j] << "  ";}
            cout << endl;}
    } 
	else {
        cout << "\n\nERROR! Matrix multiplication can't be done as the indices do not match!";}
    cout << "\n\n";
    return 0;
}
