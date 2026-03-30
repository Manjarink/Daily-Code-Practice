#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int x;
  cin>>x;
  int temp=x;
  int c=0;
  while(temp!=0)
  {
    temp/=10;
    c++;
  }
  if(x==0)
  cout<<"number of digits = "<<1;
  else
  cout<<"number of digits = "<<c;
}