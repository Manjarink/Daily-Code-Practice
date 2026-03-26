#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int r = sqrt(n) ;
  if(r * r ==n )
  {
    cout<<"its a perfect square";
  }else{
    cout<<"its not a perfect square";
  }
}