#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int x,y;
  cin>>x>>y;
  int temp=x;
  int c=0;
  if(y < 0 || y > 9)
    {
        cout << "Invalid digit";
        return 0;
    }
    if(x == 0 && y == 0)
        count = 1;
 while(temp!=0)
 {
   int k = temp%10;
   temp/=10;
   if(k==y) 
      c++;
 }
 cout<<y<<" occurs "<<c<<" times";
}