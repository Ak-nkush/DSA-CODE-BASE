#include <iostream>
using namespace std;
// program about how operator overloading works
// operator overloading add the another functionality or overload the operator with the another functionality

class Complex
{
public:
    int real;
    int imag;

    Complex()
    {
        real = imag = -1;
    }
    Complex(int _real, int _imag)
    {
        this->real = _real;
        this->imag = _imag;
    }
    Complex operator + (const Complex &B){
        Complex temp ; 
        temp.real = this->real + B.real ; 
        temp.imag = this->imag + B.imag ; 
        return temp ; 
    }
    void print()
    {
        cout << "[" << this->real << " +i" << this->imag << "]" << endl;
    }
};

int main()
{
    Complex A(2, 4);
    A.print();
    Complex B(5, 7);
    B.print();
    Complex C = A + B ; 
    C.print() ; 

    return 0;
}