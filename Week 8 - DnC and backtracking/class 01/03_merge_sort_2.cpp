#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
// program of the merge sort without creation the new array
// time complexity - o(nlogn)

void merge(int arr[] , int s , int e , int mid ){
  
    // now merging the sorted array 
    int i = mid ; 
    int j = mid + 1 ; 
    
    while(i>=s && j<e){
        
        if(arr[i]<arr[j]){
             return ;  
        }
             
        else (arr[i] > arr[j]){
            int temp = arr[j] ; 
            arr[i] = arr[j] ; 
            arr[j] = temp ;
            i-- ; 
            j++ ;  
            
          
        }
        
    }
    
    
}
void  mergesort(int arr[],int s, int e){
    int mid = (s+e)/2 ; 
    // base condition 
    if(s>=e){
        return ; 
    }
    mergesort(arr,s,mid) ; 
    mergesort(arr,mid+1,e) ; 

    merge(arr,s,e,mid) ;
    
    
}
int main(){
    int arr[] = {10,40,30,20,60,50} ; 
    int n = sizeof(arr)/sizeof(int) ;
    int s = 0 ; 
    int e = n - 1 ;  
    
    cout << "before recursion : " << endl ; 
    for(int i = 0 ; i <n ; i++){
        cout << arr[i] << " " ; 
    }
    mergesort(arr,s,e) ; 

      cout <<endl << "after recursion : " << endl ; 
    for(int i = 0 ; i <n ; i++){
        cout << arr[i] << " " ; 
    }
    return 0 ;  

}
vector<vector<int>> &mat,vector<vector<boolean>>&visited,