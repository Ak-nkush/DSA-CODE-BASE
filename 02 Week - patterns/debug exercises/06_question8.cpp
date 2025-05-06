// Debug the code. Find the second largest in the code.

#include<iostream>
using namespace std;
#include <climits>

// the correction , but remembering this logic is important
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = INT_MIN;
    for(int i=0;i<n;i++){
	    if(max<arr[i]){
	      max=arr[i];
      }
     }
     cout << max << endl ; 
     int second = INT_MIN;
     for(int i=0;i<n;i++){
	     if(max>arr[i] && arr[i]>second){
	       second = arr[i];
           cout << second << " " ; 
       }
     }
     cout<<endl<<second;
		 return 0;
}