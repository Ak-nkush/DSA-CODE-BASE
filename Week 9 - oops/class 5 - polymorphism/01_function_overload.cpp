#include<iostream>
#include<string>
using namespace std ; 
// creating the function overloader 
// a function overloading is the method to create the function with the same name but with different no. of arguments and arguments types 

class Add{
    public : 
    int sum(int x , int y ){
        cout << "sum of 2 integers " ; 
        return x + y ; 
    }
    int sum(int x , int y ,int z ){
        cout << "sum of 3 integers " ; 
        return x + y + z  ; 
    }
    double sum(double x , double y ){
        cout << "sum of 2 double " ; 
        return x + y ; 
    }
};

int main(){
    int x = 9 , y = 7 , z = 4  ; 
    Add add ; 
    cout << add.sum(x,y) << endl ; 
    cout << add.sum(x,y,z) << endl ; 
    cout << add.sum(5.6 ,7.8) << endl ; 
    return 0 ; 

}