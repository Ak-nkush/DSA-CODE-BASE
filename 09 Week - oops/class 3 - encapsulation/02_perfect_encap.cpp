#include <iostream>
#include <string>
using namespace std; 
// program about get and set in the perfect encapsulation 

class Student
{
public:
    int id;
    int age;
    string name;
    int nos;
    float *gpa;

private:
    string gf;

public:
    // set function is use to change the private attribute and assinging the different value into it 
    void setgf(string a ){
         this->gf = a ; 
    }
    // in get function is use to display or return the value of the private attribute or the method in the main() 
    string getgf()const{
        return this->gf ; 
    }
    Student(int id, string name, int age, int nos, float gpa, string gf)
    {
        cout << " Called parameterised constructor " << endl;
        this->id = id;
        this->name = name;
        this->age = age;
        this->nos = nos;
        this->gpa = new float(gpa);
        this->gf = gf ; // soo this private attribute can be accessible within the class
    }

    void study()
    {
        cout << this->name << " studying " << endl;
       
    }

    void sleep()
    {
        cout << this->name << " sleeping " << endl;
    }

    void bunk()
    {
        cout << this->name << " bunking " << endl;
    }

private:
    void gfchatting()
    {
        cout << this->name << " has a gf and does chatting " << endl;
    }

   public: 
    ~Student()
    {
        cout << " Calling the default dtor " << endl;
        delete gpa;
    }
};

int main()
{

    Student A (1, "fafu", 23, 4, 9.8, "tul");
    
    // cout << A.gf << endl ; 
    // A->gfchatting -> error 
    // A.gf = "tu" -> error 
    cout << A.getgf() << endl  ; 
    A.setgf("niv") ; 
    cout << A.getgf() << endl  ; 

    return 0;
}