#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

//! NOTES : 
// ✅ You can push temporary (unnamed) objects into a vector
// Example:
// arr.push_back(Student(34, "Lakshay"));

// This creates a temporary Student object and stores a copy/move into the vector.
// You do NOT need to assign it to a variable like 'Student s1' before pushing
// unless you want to reuse or inspect the object.

// ❌ Invalid Syntax:
// arr.push_back(Student s1(34, "Lakshay")); // Not allowed - can't declare a named object inside a function call

// ✅ If you want to name the object:
// Student s1(34, "Lakshay");
// arr.push_back(s1);         // Copy
// arr.push_back(std::move(s1)); // Move, if applicable

// ✅ Accessing unnamed (temporary) objects later:
// Even if you pushed without a name, the object is stored in the vector.
// You can access it using index:
// arr[0].display();  // Accesses the first Student object

// You can also use a reference for cleaner access:
// Student& ref = arr[0];
// ref.display();

// ✅ Tip: Use emplace_back() for direct in-place construction (more efficient):
// arr.emplace_back(34, "Lakshay");
// ✅ You can push temporary (unnamed) objects into a vector
// Example:
// arr.push_back(Student(34, "Lakshay"));

// This creates a temporary Student object and stores a copy/move into the vector.
// You do NOT need to assign it to a variable like 'Student s1' before pushing
// unless you want to reuse or inspect the object.

// ❌ Invalid Syntax:
// arr.push_back(Student s1(34, "Lakshay")); // Not allowed - can't declare a named object inside a function call

// ✅ If you want to name the object:
// Student s1(34, "Lakshay");
// arr.push_back(s1);         // Copy
// arr.push_back(std::move(s1)); // Move, if applicable

// ✅ Accessing unnamed (temporary) objects later:
// Even if you pushed without a name, the object is stored in the vector.
// You can access it using index:
// arr[0].display();  // Accesses the first Student object

// You can also use a reference for cleaner access:
// Student& ref = arr[0];
// ref.display();

// ✅ Tip: Use emplace_back() for direct in-place construction (more efficient):
// arr.emplace_back(34, "Lakshay");
//? *********************************************************************

class Student{
     public : 
       int marks ; 
       string name ; 

       Student(int m , string n){
          this->marks = m ; 
          this->name = n ; 
        }
};

// creating functor 
class comparator{
   public : 
    bool operator()(Student a , Student b){
      //! if the marks of the students get equal then sort in according to lexographical order 
      if(a.marks == b.marks){
        return a.name < b.name ; 
      }
      return a.marks < b.marks ; 
      
    }
};

int main(){
    vector<Student> arr ; 
    arr.push_back(Student(34 ,"lakshay")) ; 
    arr.push_back(Student(4 ,"rohit")) ; 
    arr.push_back(Student(77 ,"babbar")) ; 

    // sort(arr.begin() , arr.end()) ; 
    //! this give the error since sort is not made to sort the student object 
   
    
    sort(arr.begin() , arr.end() , comparator()) ;
    cout<< "Sorting the student using sort() + custom compatator " << endl ; 
    for(auto i : arr){
      cout << i.marks << i.name << endl ; 
    }
    
  


    return 0 ; 
}