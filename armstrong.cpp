#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int temp = n;
  int c =0;
  if (n < 0) {
        cout << "Its not an armstrong number";
        return 0;
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
    a=a+pow(k,c);
    temp /=10;
  }
  if(a==n){
    cout<<"Its a armstrong number";
  }else{
    cout<<"its not an armstrong number";
  }
}