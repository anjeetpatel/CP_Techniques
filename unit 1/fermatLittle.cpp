#include <iostream>
#include <cmath>
using namespace std;
bool isFermatLittle(int n, int a)
{
    if ((int)pow(a, n - 1) % n == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    int a;
    cin >> n >> a;
    if (isFermatLittle(a, n))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}