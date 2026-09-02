#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() 
{
    vector<int> arr ={2, 7, 11, 15};
    unordered_set<int>seen;
    int target=9;
    for(int i =0;i<arr.size();i++)
    {
        if(seen.count(9-arr[i]))
        {
            cout<<"found";
            cout<<arr[i]<<"+"<<9-arr[i];
            return 0;
        }
        seen.insert(arr[i]);
    }
    
    
    
    return 0;
}