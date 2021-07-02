#include <iostream>
using namespace std;
int main() {
    int n, reversedno = 0, remainder;
    cout << "Enter any number: ";
    cin >> n;
    while(n != 0) {
        remainder = n%10;
        reversedno = reversedno*10 + remainder;
        n /= 10;
    }
    cout << "The reversed number is = " << reversedno;
    return 0;
}
