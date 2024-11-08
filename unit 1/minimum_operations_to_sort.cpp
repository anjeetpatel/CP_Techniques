// you have a binary string S of length N. In one operation uou can select any substring of S and reverse it. You have to find the minimum number of operations required to make the string S sorted.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int minOperationsToSortBinaryString(const string &S)
{
    int count0Groups = 0;
    int count1Groups = 0;
    int N = S.size();
    for (int i = 0; i < N; i++)
    {
        if (S[i] == '0' && (i == 0 || S[i - 1] == '1'))
        {
            count0Groups++;
        }
        if (S[i] == '1' && (i == 0 || S[i - 1] == '0'))
        {
            count1Groups++;
        }
    }
    return min(count0Groups, count1Groups);
}
int main()
{
    string S;
    cout << "Enter the binary string: ";
    cin >> S;
    int result = minOperationsToSortBinaryString(S);
    cout << "Minimum number of operations required to sort the binary string: " << result << endl;
    return 0;
}