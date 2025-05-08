#include<iostream>
#include<vector>
#include<forward_list>
using namespace std ; 
int main(){

    forward_list<int> list ; 
    list.push_front(10) ;
    list.push_front(20) ;
    list.push_front(30) ;

    // traversing using iterator 

    forward_list<int>::iterator it = list.begin() ; 
    while(it!= list.end()){
        cout << *it << " " ; 
        it++ ; 
    } 

    forward_list<int>::iterator it1 = list.end() ; 
    while(it1!= list.begin()){
        cout << *it1 << " " ; 
        it1-- ; 
    }    
    
}