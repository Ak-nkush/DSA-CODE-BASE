// Debug the code. Print all the prime numbers that lie in the range 2 to N (both inclusive)

#include<iostream>
using namespace std;
//todo - approach - to find the  prime we have to check each number whether it is divisible by any number between 2 to n if it is divisible then the number is not prime if it's not then the number is prime 
// correction - we find add break after finding that the number is divisible in the range reducing the complexity by just o(n2)
int main(){
    int n, flag=1;
    cin>>n;
    for(int i=2;i<=n;i++){
        flag = 1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag = 0;
                break ; 
            }
        }
        if(flag==1){
            cout<<i<<endl;
        }
    }
    return 0;
}