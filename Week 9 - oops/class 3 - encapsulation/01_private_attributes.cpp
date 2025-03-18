#include <iostream>
#include <string>
using namespace std;

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

   
    ~Student()
    {
        cout << " Calling the default dtor " << endl;
        delete gpa;
    }
};

int main()
{

    Student *A = new Student(1, "fafu", 23, 4, 9.8, "tul");
    cout << A->age << " " << A->id << endl;
    // cout << A.gf << endl ; 
    // this will error has private attributes can not accessible by the derived or other class but there is the way to access those private attributes and method using set and get function 

    return 0;
}
