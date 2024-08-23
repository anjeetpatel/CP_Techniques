//Prove that fermat little theorem does not hold for p = 6 and a = 2 ?
#include <iostream>
using namespace std;

int powerMod(int a, int n, int p)
{
    int res = 1;
    for (int i = 0; i < n; i++)
        res = (res * a) % p;
    return res;
}

int main()
{
    int a = 2;
    int p = 6;
    int result = powerMod(a, p - 1, p);
    cout << "2^(" << p - 1 << ") mod " << p << " = " << result << endl;
    if (result == 1)
        cout << "Fermat's Little Theorem holds for p = " << p << " and a = " << a << endl;
    else
        cout << "Fermat's Little Theorem does not hold for p = " << p << " and a = " << a << endl;
    return 0;
}