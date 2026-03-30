#include<iostream>
#include<cmath>
using namespace std;
int fact(int n)
{
  if(n<=1)
  return 1;
  return n *fact(n-1);
}
int main()
{
 int x , y;
 cin>>x>>y;
 cout<<fact(x)/fact(x-y);
}