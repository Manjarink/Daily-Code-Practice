#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    while(b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;

    if(a == 0 || b == 0)
    {
        cout << "LCM = 0";
        return 0;
    }

    int lcm = (a * b) / gcd(a, b);

    cout << "LCM = " << lcm;
}