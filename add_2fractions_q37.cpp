#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a , int b)
{
  if(b==0)
  return a;
  return gcd(b , a%b);
}
int main()
{
 int a , b, c, d;
 cin>>a>>b>>c>>d;
 int lcm = b*d/gcd(b,d);
 int x ;
   x = a*(lcm/b) + c*(lcm/d);
   int g =gcd(x , lcm);
  x=x/g;
  lcm=lcm/g;
 cout<<x<<"/"<<lcm;
}