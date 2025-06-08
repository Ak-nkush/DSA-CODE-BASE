#include <iostream>
#include <vector>
using namespace std;

// In this question we are going to find  the maximum element using binary search
// Has binary search had applied the elements are going to be in a monotonic function

int findingMax(vector<int> &v)
{
    int n = v.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2 ; 
    int ans = -1 ; 

    while (s <= e){
        if(s==e){
            return mid ; 
        }
        if(v[mid]<v[mid+1]){
            s = mid + 1 ; 
        }
        if(v[mid]<v[mid-1]){
            e = mid - 1 ; 
        }
         mid = s + (e-s)/2 ; 

    }
    return ans ; 
}

int main()
{
    vector<int> v = {};
    int ans = findingMax(v);
    cout << v[ans];
    return 0;
}