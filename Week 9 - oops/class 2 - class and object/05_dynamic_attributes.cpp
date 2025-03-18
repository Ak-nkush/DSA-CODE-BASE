#include<iostream>
#include<string>
using namespace std ;
// dyanamic allocation of attributes of the class 
// it doesn't get the delete automatically we have to it using delete keyword in the destructor 

class Student {
    public : 
  
      int id ; 
      int age ; 
      string name ; 
      int nos ; 
      float * gpa ;  // in the attributes we have to declare the pointer 

   
    Student(int id , string name , int age , int nos , float gpa){
      cout << " Called parameterised constructor " << endl ; 
      this->id = id ; 
      this->name = name ; 
      this->age = age ; 
      this-> nos = nos ; 
      this -> gpa = new float(gpa) ;
      // and in constructor we have to allocate it into the heap  
    }

   
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
        delete gpa ; 
    }
};

int main(){

    Student*A = new Student(1,"fafu",23,4,9.8) ;
    cout << A->age << " " << A->id << endl ;   
    delete A  ; 
    return 0 ;  

}
