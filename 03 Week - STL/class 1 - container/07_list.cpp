#include<iostream>
#include<list>
using namespace std ; 

int main(){
    list<int> mylist ; 
    
    // insertion of the element in the list 
    mylist.push_back(10) ; 
    mylist.push_back(20) ; 
    mylist.push_back(30) ; 
    mylist.push_back(40) ; 
    mylist.push_front(0) ;

    // removal of the element 
    mylist.pop_back() ; 
    mylist.pop_front() ; 

    cout << mylist.size() << endl ;
    mylist.clear() ; 
    if(mylist.empty()== true) 
    cout<<"List is empty " ; 
    else
    cout << "List is not empty " << endl ; 
}