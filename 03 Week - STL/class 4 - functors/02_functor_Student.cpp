#include<iostream>
using namespace std ; 

// this is the class of the student 
class Student{
     public : 
       int marks ; 
       string name ; 

       Student(int m , string n){
          this->marks = m ; 
          this->name = n ; 
        }
}; 

//! functors of compare the student that are the objects of the class student

class StudentComparator{
      public : 
      //! here we are overloading the rounded brackets 
      bool operator()(Student a , Student b ) {
        // comparing on bases of marks 

        return a.marks < b.marks ; 
        // return true if student a has less marks than student b 
        // it will get sorted in a asecending order  
      }

};

int main(){
    Student s1 (45 , "Lakshay") ; 
    Student s2 (99 , "Babbar") ; 

    //! soo created the functor , we have to create the object of the functor class 

    StudentComparator cmt ; 
    
    //! now after creating the functor object pass the value to it accordingly 
    if(cmt(s1 , s2)){
        cout << s1.name << " has less marks than " << s2.name << endl ; 
    }
    else{
        cout << s1.name << " has greater marks than " << s2.name << endl ; 
    }
}



      






         