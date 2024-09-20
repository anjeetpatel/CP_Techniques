// given an array print all the sum of the subset generated from it, in the increasing order.
// input N=3, arr[] = {3,1,2}
//output: 0 1 2 3 3 4 5 6

#include <bits/stdc++.h>
using namespace std;

void subsetSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += arr[j];
            }
        }
        cout << sum << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    subsetSum(arr, n);
    return 0;
} 