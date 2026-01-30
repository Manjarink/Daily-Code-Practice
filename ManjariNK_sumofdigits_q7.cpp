#include <iostream>
using namespace std;

int main() 
{
    int num;
    cin>>num;
   int temp=num,sum=0;
   while(temp!=0)
   {
     sum+=temp%10;
     temp/=10;
   }
   cout<<sum;
return 0;
}
