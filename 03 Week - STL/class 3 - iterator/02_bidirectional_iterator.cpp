#include<iostream>
#include<vector>
#include<list>

using namespace std ; 
int main(){

    list<int> mylist ; 
    mylist.push_front(10) ;
    mylist.push_front(20) ;
    mylist.push_front(30) ;

    list<int>::iterator it = mylist.begin() ; 

    while(it!=mylist.end()){
        (*it) = (*it) + 2 ; 
        cout << (*it) << " " ; 
        it++ ; 
    } cout << endl ; 

    list<int>::iterator it1 = mylist.end() ; 

    while(it1!=mylist.begin()){
        
        it1-- ; 
        // placing this first is important if not it will point next box in the list   
        cout << (*it1) << " " ; 
    } 

} 