#include<iostream>
using namespace std ; 

class functorOne{
  public : 
   bool operator()(int a , int b){
          // descending order me compare kartra he 
          // if a>b it  return true otherwise it return false 
          return a>b ; 
   }
};

int main(){
    functorOne cmt ; 

    if(cmt(10,3) == true ){
        cout << "10 is greater than 3 " << endl; 
    }
    else{
        cout << "10 is not greater than 3 " << endl; 
    }

}