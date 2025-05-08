#include<iostream> // this is the header file 
using namespace std; 
//!  using namespace std; is a namespace directive, not part of the STL itself.
//! It provides direct access to names (functions, classes, objects) in the std namespace, which includes the STL (e.g., vector, sort) and other parts of the C++ Standard Library (e.g., cout, string).
//! Without it, you’d need to explicitly write std:: before each name (e.g., std::cout, std::vector).

int main(){
    // declaration
    // int age;
    // cout<<age<<endl;
    // definition
    int age=25;
    age=101;
    cout<<age<<endl;

    // int
    int count=5;
    //float
    float share=3.45674;
    //char
    char alphabet='a'; 
    //double
    double weight=55.69889;
    //boolean
    bool isMale= false;
    bool isChild=1;
    bool isFemale= true;
    bool isAdult=0;
    cout<<count<<endl;
    cout<<share<<endl;
    cout<<alphabet<<endl;
    cout<<weight<<endl;
    cout<<isMale<<endl;
    int marks=12;
    cout<< sizeof(marks)<<endl;
    return 0;
}