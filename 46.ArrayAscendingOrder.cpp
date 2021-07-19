#include <iostream>
using namespace std;
 
int main()
{
    int c[10];
    int z, i, j, temp;
	z= 10;
 
    //Input array elements
    cout<<"Enter elements in array: "<<endl;
    for(i=0; i< z; i++){
        cin>>c[i];}
        
    //For sorting the array in ascending order
    for(i=0; i<z; i++){
        for(j=i+1; j<z; j++){
            //To swap any smaller element, we use a temp variable.
            if(c[j] < c[i]){
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;}
        }
    }
    
    //For printing the final output
    cout<<"\nElements of array in sorted ascending order:"<<endl;
    for(i=0; i<z; i++){
        cout<<c[i]<<endl;}
 
    return 0;
}
