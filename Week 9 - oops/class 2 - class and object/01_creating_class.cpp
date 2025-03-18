#include<iostream>
#include<string>
using namespace std ;
// program to  create the class and its objects , getting the knowledge about the constructor and destructor  

class Student {
    public : 
      // declaring the attributes of the class students 
      int id ; 
      int age ; 
      string name ; 
      int nos ; // number of subject of the student 

    // creating default constructor
    // this is the normal constructor  
    // even if we didn't declare the constructor complier does on its own 
    Student(){
        cout << "Calling student default constructor " << endl ; 
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
    Student A ; 
    A.id = 1 ; 
    A.name = "rahul " ; 
    A.age = 12  ; 
    A.nos = 4 ; 
     
    cout << A.id << endl ; 
    cout << A. name << endl ; 
    cout << A.age << endl ; 
    cout << A.nos << endl ; 


    Student B ; 
    B.id = 2 ; 
    B.name = "rahoo " ; 
    B.age = 14  ; 
    B.nos = 2 ; 
     
    cout << B.id << endl ; 
    cout << B. name << endl ; 
    cout << B.age << endl ; 
    cout << B.nos << endl ; 

    return 0 ;  
    // return 0 will destroy the class 

}

