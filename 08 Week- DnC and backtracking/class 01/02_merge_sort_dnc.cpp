#include<iostream>
#include<vector>
using namespace std ;
// program of the merge sort with copying and creating the new subarray 
// time complexity - o(nlogn)

void merge(int arr[] , int s , int e , int mid ){
    int leftlength = mid - s + 1 ; 
    int rightlength = e - mid ; 

    // creating the subarray 
     int * leftarray = new int [leftlength] ; 
     int * rightarray = new int [rightlength] ; 
    
    int index = s ; 
    // copying the values in the subarrays 
    for(int i = 0 ; i<leftlength ; i++){
      leftarray[i] = arr[index] ; 
      index++ ; 
     }
     index = mid + 1 ; 
     for(int i = 0 ; i <rightlength ; i++){
        rightarray[i] = arr[index] ; 
        index++ ; 
    }

    // now merging the sorted array 
    int i = 0 ; 
    int j = 0 ; 
    int mainArrayIndex = s ; 
    while(i<leftlength && j<rightlength){
        if(leftarray[i]<rightarray[j]){
            arr[mainArrayIndex] = leftarray[i] ; 
            i++ ; 
            mainArrayIndex++ ; 
        }
        else{
             arr[mainArrayIndex] = rightarray[j] ; 
            j++ ; 
            mainArrayIndex++ ; 
        }
    }
    // those classic 2 remaining cases remains 
    while(i<leftlength){
        arr[mainArrayIndex] = leftarray[i] ; 
            i++ ; 
            mainArrayIndex++ ; 
    }
    while(j<rightlength){
        arr[mainArrayIndex] = rightarray[j] ; 
            j++ ; 
            mainArrayIndex++ ; 
    }

}
void  mergesort(int arr[],int s, int e){
    int mid = (s+e)/2 ; 
    // base condition 
    if(s==e){
        return ; 
    }
    mergesort(arr,s,mid) ; 
    mergesort(arr,mid+1,e) ; 

    merge(arr,s,e,mid) ;
}
int main(){
    int arr[] = {23,45,66,1,2,4,6,7,90,112} ; 
    int n = sizeof(arr)/sizeof(int) ;
    int s = 0 ; 
    int e = n - 1 ;  
    
    cout << "before recursion : " << endl ; 
    for(int i = 0 ; i <n ; i++){
        cout << arr[i] << " " ; 
    }
    mergesort(arr,s,e) ; 

      cout<< endl  << "after recursion : " << endl ; 
    for(int i = 0 ; i <n ; i++){
        cout << arr[i] << " " ; 
    }
    return 0 ;  

}