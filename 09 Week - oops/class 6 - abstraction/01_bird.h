#if !defined(BIRD_H)
#define BIRD_H
#include <bits/stdc++.h>
using namespace std ; 
class Bird
{
public:
    // this is interface
    virtual void eat() = 0;
    virtual void fly() = 0;
    //   classes that inherits this class has to implement pure virtual functions
};
class Sparrow : public Bird
{
public:
    void eat()
    {
         cout << "Sparrow is eating\n";
    }
    void fly()
    {
        cout << "Sparrow is flying \n";
    }
};
class Eagle : public Bird
{
public:
    void eat()
    {
        cout << "Eagle is eating\n";
    }
    void fly()
    {
        cout << "Eagle is flying \n";
    }
};
class Pigeion : public Bird
{
public:
    void eat()
    {
        cout << "Pigeion is eating\n";
    }
    void fly()
    {
        cout << "Pigeion is flying \n";
    }
};
#endif