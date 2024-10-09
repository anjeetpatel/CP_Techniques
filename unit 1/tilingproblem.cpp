#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "The number of ways to tile a " << n << "x2 board is " << n / 2 + 1 << "." << endl;
    }
    else
    {
        cout << "The number of ways to tile a " << n << "x2 board is " << (n + 1) / 2 << "." << endl;
    }

    return 0;
}
// Output:
// Enter a positive integer: 5
// The number of ways to tile a 5x2 board is 3.
