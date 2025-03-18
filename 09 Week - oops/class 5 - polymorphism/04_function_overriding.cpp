#include<iostream>
using namespace std ;
// program for unserstanding the function overriding and use of virtual and final keyword 

class Shape {
    public : virtual 
     void draw() {
        cout <<"Generic drawing...." << endl ; 
     }
}; 
class Circle : public Shape{
    public : 
     void draw() override {
        cout <<"Circle Drawing...." << endl ; 
     }
};
class Rectangle : public Shape{
     public : 
     void draw(){
        cout <<"Rectangle Drawing...." << endl ; 
     }
};
class Triangle : public Shape{
     public : 
     void draw(){
        cout <<"Triangle Drawing...." << endl ; 
     }
};


int main(){
    Shape * s = new Circle() ; // this is known as upcasting 
    s->draw() ; 
    return 0 ; 
}