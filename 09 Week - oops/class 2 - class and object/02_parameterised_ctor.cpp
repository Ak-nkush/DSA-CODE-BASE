#include<iostream>
#include<string>
using namespace std ;
// program for creation of parameterised constructor   

class Student {
    public : 
      // declaring the attributes of the class students 
      int id ; 
      int age ; 
      string name ; 
      int nos ; // number of subject of the student 

    // creating the parameterised constructor
    // in the parameterised constructor we are declaring the paramater that will points to the attributts of the class  
    Student(int id , string name , int age , int nos ){
      cout << " Called parameterised constructor " << endl ; 
      this->id = id ; 
      this->name = name ; 
      this->age = age ; 
      this-> nos = nos ; 
    }

    // declaring the behaviour 
    void study(){
        cout << this->name << " studying " << endl ; 
        // the arrow operator is only used to points the attributes and behaviour within the class 
    }

    void sleep(){
        cout << this->name << " sleeping " << endl ; 
    }

    void bunk(){
        cout << this->name << " bunking " << endl ; 
    }

    // lastly the destructor 
    ~Student(){
        cout << " Calling the default dtor " << endl ; 
    }
};

int main(){
    // now creating the objects 
    // the creation of the object will call the constructor 
    Student A(1,"fafu",23,4) ;
    cout << A.age << " " << A.id << endl ;   
   
    return 0 ;  

}