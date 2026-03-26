#include<iostream>
using namespace std;
int fact(int k)
{
  if(k<=1)
  return 1;
  return k * fact(k-1);
}
int main()
{
  int n;
  cin>>n;
  int temp = n;
  int sum=0;
  while(temp != 0)
  {
    int k = temp%10;
    sum +=fact(k);
    temp /=10;
  }
  if(sum==n)
  {
    cout<<"Its a strong number";
  }else{
    cout<<"Its not a strong number";
  }
}