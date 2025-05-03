#include<iostream>
#include <iomanip>  // for setprecision and fixed
using namespace std ; 

int main(){
    int s1 , s2 , s3 ; 
    cout << "Enter the marks for subject 1 : " ; 
    cin >> s1 ; 
    cout << "Enter the marks for subject 2 : " ; 
    cin >> s2 ; 
    cout << "Enter the marks for subject 3 : " ; 
    cin >> s3 ; 

    float percent = (float(s1+s2+s3)/300) * 100 ; 
    cout <<"Percentage is " << fixed << setprecision(2) << percent << endl;

}