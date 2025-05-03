#include<iostream>
using namespace std;
int main(){
    char grade='C';
    switch (grade){
        case 'A': cout<<"marks are between range 90-100"<<endl;
        break;
        case 'B': cout<<"marks are between range 80-90"<<endl;
        break;
        case 'C': cout<<"marks are between range 70-80"<<endl;
        break;
        case 'D': cout<<"marks are between range 60-70"<<endl;
        break;
        default: cout<<"marks are less than 60"<<endl;
    }
    
    //! - in switch statement , the values are compared with the case values which are specified into each case , here conditions can't be added into the case but can be added into a switch parameter or a switch expression  
    
    int age = 11 ;
    switch (age > 20)
    {
        case 1 :
        cout << "Age is greater than 20 " << endl ; 
        break;
        
        default:
        cout << " Age is under 20 " << endl ; 
        break;
    }
    
    return 0;

    
}