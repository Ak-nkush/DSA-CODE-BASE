#include<iostream>
#include<vector>
using namespace std ; 

int main(){
    // intially we assign the size of the vector 
//     vector<int> miles(10); 
   // here we can assign the value in the once in the vector 
//     vector<int> distance(15,0) ; 

  vector<int> marks ; 
  marks.push_back(10) ; 
  marks.push_back(20) ; 
  marks.push_back(30) ; 
  cout << *(marks.begin()) << endl ;
  cout << "Size : " << marks.size() << endl ;  
  cout << marks.front() << endl ;   
  cout << marks.back() << endl ;

  if(marks.empty() == true){
    cout << " Vector is empty " ; 
  }
  else {
    cout << " Vector is not empty " ; 
  }

  cout << "Value of the 1st element " << marks[0] << endl ; 
  marks[0] = 100 ; 
  cout << "Value of the 1st element " << marks[0] << endl ; 
  cout << "Capacity : " << marks.capacity() << endl ; ; 
 marks.push_back(40) ; 
 marks.push_back(50) ;  
  cout << "Capacity : " << marks.capacity() << endl  ; 

 }

