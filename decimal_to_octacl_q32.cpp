#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int temp =n;
 int bi =0;
 int c=0;
 while(temp!=0)
 {
   bi=bi+(temp%8)*pow(10,c++);
   temp/=8;
 }
 cout<<bi;
}