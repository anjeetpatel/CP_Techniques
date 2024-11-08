//you have a binary string S of length N. In one operation uou can select any substring of S and reverse it. You have to find the minimum number of operations required to make the string S sorted. 
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int minOperationsToSort(string S)
{
    int N = S.length();
    vector<int> sorted(N);
    for (int i = 0; i < N; i++)
    {
        sorted[i] = i;
    }
    int operations = 0;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == '0')
        {
            int j = i;
            while (j < N && S[j] == '0')
            {
                j++;
            }
            reverse(sorted.begin() + i, sorted.begin() + j);
            operations++;
            i = j - 1;
        }
    }
    return operations;
}
int main()
{
    string S;
    cout << "Enter a binary string: ";
    cin >> S;

    int operations = minOperationsToSort(S);
    cout << "Minimum operations required: " << operations << endl;

    return 0;
}