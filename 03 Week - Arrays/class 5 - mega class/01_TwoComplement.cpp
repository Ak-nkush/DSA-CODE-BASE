#include<iostream>
#include<vector>
using namespace std ; 

//todo - Approach 
// 2s = 1s + 1  
// first we will be taking the complement of all the digits in the array , as the operation starts from the last bit the loop goes from n-1 to zero 
// to find 1s - just make zero to one and one to zero 
// how we will get the 2s - take the carry = 1 and add on the last bit, as we have to add 1 in 1s to find the 2s , now modulo it by 2 and store that bit there 
//! - note that bit should be inserted according , keep the sum untouch because there is the carry operation in the last 
// next , how the carry will be determine for the next bit - for that divide the sum by 2 ; 
// like this we perform the operation till the first bit but what if there remains a extra carry , it can't be done inplace soo for that we have to take another array/vector whose all the element are initialized it by zero soo that the whole number 1s complement get stored 
// vector is dynamic soo there is no need to specify the size 

int main(){
    vector<int> binaryArray = { 0,0,0,0 } ; 
    int n = binaryArray.size() ; 
    // take the extra vector of size one greater than a binary array 
    vector<int> twoComplement(n + 1  , 0 ) ; 

    // traversal and one complement 
    for(int i = 0 ; i<n ; i++){
        if(binaryArray[i] == 0){
            binaryArray[i] = 1 ;
        }
        else{
            binaryArray[i] = 0 ; 
        }
    }

    // now two complement 
    int carry = 1 ; // take a carry as a one 

    for(int i = n - 1 ; i>=0 ; i--){
        int sum = binaryArray[i] + carry ; 
        //! - making the separate varible for the bit 
        int bit = sum % 2 ; // it will get the bit 
        twoComplement[i+1] = bit ; 
        carry = sum / 2 ; 
    }
    if(carry == 1 ){
        twoComplement[0] = 1 ; 
    }

    for(int i = 0 ; i<twoComplement.size() ; i++){
        cout << twoComplement[i] << " " ; 
    }
        
    // 
}