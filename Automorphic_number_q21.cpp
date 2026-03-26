#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int s = n*n;
  int temp = n;
  int c = 0;
  while(temp !=0)
  {
    temp /= 10;
    c++;
  }
  int k = s % (int)pow(10,c);
  if(k == n)
  {
    cout<<"its a Automorphic number";
  }else{
    cout<<"its not a Automorphic number";
  }
}