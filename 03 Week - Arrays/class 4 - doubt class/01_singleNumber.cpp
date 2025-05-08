#include<iostream>
#include<algorithm> 
using namespace std ; 

// appraoches we use uptil now - xoring , sort and count with the use of unordered map ,
// xoring in the optimized method here  
// another appraoch - sort using sort method then use two pointer to find that whether i and i + 1 elements are same or not , if they are same then continue the loop if not then we found the unique element soo break from the loop 
 

int main(){
    int n ;
    cout << "Enter the size of the array : " ; 
    cin >> n ; 
    int input[n];
    cout << "Enter the values in the array  : " << endl ; 
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    
    sort(input , input+n) ; 
    
    for(int i = 0 ; i<n ; i++){
        if(i+1<n && input[i] == input[i+1]){
            i++ ; 
        }
        else{
            cout <<"Single element in the array is : " << input[i] << endl ;  
        }
    }
    


}



