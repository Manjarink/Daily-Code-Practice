#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int temp =n;
 string bi="";
 while(temp!=0)
 {
   int k = (temp%16);
   if(k>=10)
   {
     bi= (char)(k+55)+bi;
   }else{
   bi=char(k +'0')+bi;
   }
   temp/=16;
 }
 cout<<bi;
}