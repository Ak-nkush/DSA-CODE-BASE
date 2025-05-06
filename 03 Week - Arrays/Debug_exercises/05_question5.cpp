// Debug the code. List all pairs in array that sums to X.

#include<iostream>
using namespace std ; 

void pairSumToX(int input[], int size, int x){
	int pairs = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if(input[i] + input[j] == x) cout << input[i] << ","<< input[j] << " ";
		}
	}
	
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

    pairSumToX(input , n , target) ; 
}