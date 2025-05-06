// sort zeros and ones 

#include<iostream>
using namespace std ; 

void sort0sand1s(int input[], int size){
	int nextZero = 0;
	for(int i=0; i<size; i++){
		if(input[i] == 0){
			int temp = input[nextZero];
			input[nextZero] = input[i];
			input[i] = temp;
            // correction = only have t0 increment nextZero or swapping it from right to left 
            nextZero++ ; 
		}
	}
}
void print(int arr[] , int size ){
    for(int i = 0 ; i<size ; i++){
        cout << arr[i] << " " ; 
    }cout << endl ; 
}

int main(){
    int n ;
    cout << "Enter the size of the array : " ; 
    cin >> n ; 
    
    int input[n];
    cout << "Enter the values in the array  : " << endl ; 
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    print(input,n) ; 
    sort0sand1s(input , n ) ; 
    print(input,n) ; 
}