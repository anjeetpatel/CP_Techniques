// you are given number n,print all possible numebrs from 1 to n in lexographical order
// eg: n=13
// output: 1 10 11 12 13 2 3 4 5 6 7 8 9
// eg: n=20
// output: 1 10 11 12 13 14 15 16 17 18 19 2 20 3 4 5 6 7 8 9

#include <iostream>
using namespace std;

void print(int n, int i)
{
    if (i > n)
        return;
    cout << i << " ";
    for (int j = 0; j <= 9; j++)
    {
        print(n, i * 10 + j);
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 9; i++)
    {
        print(n, i);
    }
    return 0;
}
