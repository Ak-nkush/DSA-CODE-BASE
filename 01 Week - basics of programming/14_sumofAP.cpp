#include<iostream>
using namespace std;
//sum of arthemtic progression 
// where a = first no. , l = last no. , n = number of element in a series 
int calculateSumOfAp(int a, int l, int n){
    int ans=((n)*(a+l))/2;
    return ans;
}
int main(){
    int ans= calculateSumOfAp(2,10,5);
    cout<<ans<<endl;
    return 0;
}