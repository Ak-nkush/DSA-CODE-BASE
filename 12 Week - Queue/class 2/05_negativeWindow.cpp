#include<iostream>
#include<queue>
#include<vector> 
using namespace std ;
// sliding window , the creation of the windlow ia based on the concept of the queue , we add from the right and remove from the left thats the way we create the window , now in the window we have to determine the first negative number from left in that particular window 
// todo - 1st : create the 1st window traverse through every element uptill k and store all negative and store the answer for the 1st window that will be the front of the queue
// todo : 2nd - Now creating the 2nd window , here we have to decide whether the indices we stored into queue belongs to that 2nd window for that , we will use the simply formula , i - q.front() this will determine the range and accordingly we can remove the front of the queue if it doesn't belong to that window 
// todo 3rd - addition from the right , we have to store the index of the negative element of that window coming from the right 
// todo 4th - stores the answer for that window referring to front index stored in the queue 

// ex [12, -1, -7, 8, -15, 30, 16, 28] 
 // Output: [-1, -1, -7, -15, -15, 0] 

//  Input: arr[] = [-8, 2, 3, -6, 10] , k = 2
// Output: [-8, 0, -6, -6]



void firstNegativeWindow(vector<int> & arr , int &k , vector<int> & ans ){
    queue<int> q ; 
    // step 1 : 
    for(int i = 0 ; i<k ; i++){
        if(arr[i] < 0) q.push(i) ; 
    }

    if(q.empty()) ans.push_back(0) ; // when no -ve is found 
    else ans.push_back(arr[q.front()]) ; 

    // step 2 : 
    for(int i = k ; i<arr.size() ; i++){
        
        if(!q.empty() && (q.front() < i - k + 1 ) ){
            q.pop() ; 
        }
        if(arr[i] < 0){
            q.push(i) ; 
        }
        
        
    
    }


}
int main(){
    vector<int> arr = {-8, 2, 3, -6, 10} ; 
    int k = 2 ; 
     vector<int> ans ; 
    firstNegativeWindow(arr,k,ans) ; 

    for(auto i : ans){
        cout << i << " " ; 
    }
}