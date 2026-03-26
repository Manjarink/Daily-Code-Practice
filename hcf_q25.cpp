#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int hcf = 1;
  for(int i = 1; i <= n || i <= m; i++)
    {
        if(n % i == 0 && m % i == 0)
            hcf = i;
    }

    cout<<"HCF of "<<n<<" and "<<m<<" is "<<hcf;

    return 0;
}