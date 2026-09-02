#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int> arr = {5, 2, 8, 2, 9, 5, 2};
    int count=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==2)
        {
            count++;
        }
    }
    cout<<count;
    
    return 0;
}