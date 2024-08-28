//fermat factoring method
#include <iostream>
#include <cmath>
using namespace std;
int fermatFactoringMethod(int n)
{
    int a = ceil(sqrt(n));
    int b2 = a * a - n;
    while (sqrt(b2) != (int)sqrt(b2))
    {
        a++;
        b2 = a * a - n;
    }
    return a - sqrt(b2);
}
int main()
{
    int n;
    cin >> n;
    cout << fermatFactoringMethod(n);
    return 0;
}