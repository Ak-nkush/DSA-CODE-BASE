#include<iostream>
#include<list>
using namespace std ; 

int main(){
    list<int> mylist ; 
    
    mylist.push_back(10) ; 
    mylist.push_back(20) ; 
    mylist.push_back(30) ; 
    mylist.push_back(40) ; 
    mylist.push_back(10) ; 
    

    list<int>::iterator it = mylist.begin() ; 
    
    cout <<"Before removal " << endl ; 
    while(it!=mylist.end()){
        cout << *it << " " ; 
        it++ ; 
    } cout << endl ; 

    mylist.remove(10) ; 
    cout << "After removal" << endl ; 
      list<int>::iterator it1 = mylist.begin() ; 
        while(it1!=mylist.end()){
        cout << *it1 << " " ; 
        it1++ ; 
    } cout << endl ; 

}