#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int temp = n;
  int sum =0;
  int c=0;
  while(temp !=0)
  {
    sum += (temp%10) * pow(2,c++);
    temp /=10;
  }
  cout<<sum;
}