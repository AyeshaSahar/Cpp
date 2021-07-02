#include <iostream>
using namespace std;

int fibonacci(int a)
{
    if((a==1)||(a==0))
    {
        return(a);
    }
    else
    {
        return(fibonacci(a-1)+fibonacci(a-2));
    }
}

int main()
{
    int a,i=0;
    cout << "\nEnter the number of terms of the series: ";
    cin >> a;
    cout << "\nFibonacci Series for [ "<<a<<" ] is: \n";

    while(i < a)
    {
        cout << "  " << fibonacci(i);
        i++;
    }
    cout << "\n";
    return 0;
}

