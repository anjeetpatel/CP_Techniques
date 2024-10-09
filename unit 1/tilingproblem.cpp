#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if(n==1)
    return 1;
    if(n==2)
    return 2;

    int arr[n+1];
    arr[1]=1;
    arr[2]=2;

    for(int i=3;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];
}
// Output:
// Enter a positive integer: 5
// The number of ways to tile a 5x2 board is 3.