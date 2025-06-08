#include <iostream>
#include <vector>
using namespace std;

// In this question we are going to find  the target 

bool findingTarget(vector<int> &v,int target)
{
    int n = v.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2 ; 
     

    while (s <= e){
        if(v[mid]==target){
            return true ; 
        }
        if(v[mid]<target){
            s = mid + 1 ; 
        }
        if(v[mid]>target){
            e = mid - 1 ; 
        }
        mid = s + (e-s)/2 ; 

    }
    return false  ; 
}

int main()
{
    vector<int> v = {22,45,67,88,91};
    int target = 99 ; 
    bool ans = findingTarget(v,target);
    cout << bool(ans) ;
    return 0;
}