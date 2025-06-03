// QUESTION 01 - find the pair that is equal to the given target 
// approach 1 - taking out the pairs and then comparing with a target 
// approach 2 - first sort the array and then apply two pointer appraoch where l - 0 and h = n-1 

//approach 2 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;

int main(){
    vector<int> arr = {1,4,45,6,10,8} ; 
    int n = arr.size() ; 
    int target1 = 16 ; 
    int target2 = 99 ; 

    // step 1 - sort the array 
    sort(arr.begin() , arr.end()) ; 

    //step 2 - apply two pointer approach 
    // how ? - take l = 0 and h = n-1 
    // if l+h >target then h-- ;
    // and if l+h<target then l++ ; 

    int l = 0 , h = n-1 ; 
    bool ans = false ; 
    while(l<=h){
        if(arr[l]+arr[h] == target1){
            ans = true ; 
            break ;  
        }
        else if((arr[l]+ arr[h])> target1){
            h-- ; 
        }
        else if((arr[l]+ arr[h]) < target1){
            l++ ; 
        }
    }

    if(ans == true){
        cout << "Target found " << endl ; 
    }
    else{
        cout <<"Target Not found " << endl ; 
    }
}