// Debug the code. List all triplets in array that sums to X.

#include<iostream>
using namespace std ; 

int tripletSumToX(int input[], int size, int x){
	int triplets = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			for(int k=j+1; k<size; k++){
				if(input[i] + input[j] + input[k] == x) cout<<"["<<input[i]<< ","<<input[j] <<","<<input[k]<<"]" <<" ";
			}
		}
	}
	return triplets;
}

int main(){
    int n ;
    cout << "Enter the size of the array : " ; 
    cin >> n ; 
    int target ; 
    cout <<"Enter the target : " ; 
    cin >> target ; 
    int input[n];
    cout << "Enter the values in the array  : " << endl ; 
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    tripletSumToX(input , n , target) ; 
}