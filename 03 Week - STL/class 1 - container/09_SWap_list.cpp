#include<iostream>
#include<list>
using namespace std ; 

int main(){
    list<int> mylist ; 
    
    mylist.push_back(10) ; 
    mylist.push_back(20) ; 
    mylist.push_back(30) ; 
    mylist.push_back(40) ; 
    

    list<int> mylist2 ; 
    mylist2.push_back(100) ; 
    mylist2.push_back(200) ; 
    mylist2.push_back(300) ; 
    mylist2.push_back(400) ; 

     list<int>::iterator it = mylist.begin() ; 
    
    cout <<"Before tranverse list one :  " << endl ; 
    while(it!=mylist.end()){
        cout << *it << " " ; 
        it++ ; 
    } cout << endl ; 

    mylist.swap(mylist2) ; 
      cout <<"after tranverse list one :  " << endl ;
    list<int>::iterator it1 = mylist.begin() ; 
     
    while(it1!=mylist.end()){
        cout << *it1 << " " ; 
        it1++ ; 
    } cout << endl ; 

    mylist.insert(mylist.begin(),100) ; 
    mylist.erase(mylist.begin(),mylist.end()) ; 
     cout <<  mylist.size() ; 

}