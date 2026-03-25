#include<iostream>
#include<cmath>
using namespace std;
bool armstrong(int n)
{
  int temp = n;
  int c=0;
  if (n < 0) {
        return false;
    }
  while(temp!=0)
  {
    temp /= 10;
    c++;
  }
  if (n == 0) c = 1;
  temp=n;
  int a=0;
  while(temp!=0)
  {
    int k = temp%10;
    a=a+(int)pow(k,c);
    temp /=10;
  }
  if(a==n){
    return true;
  }else{
    return false;
  }
}
int main()
{
  int n , m;
  cin>>n>>m;
  for(int i=n;i<m ;i++)
  {
    if(armstrong(i))
    {
      cout<<i<<" ";
    }
  }
  
  
}