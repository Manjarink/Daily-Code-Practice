#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int temp = n;
  int c = 0;
  while(temp !=0)
  {
    c +=temp%10;
    temp /= 10;
  }
  if(n%c ==0)
  {
    cout<<"its a Harshad number";
  }else{
    cout<<"its not a Harshad number";
  }
}