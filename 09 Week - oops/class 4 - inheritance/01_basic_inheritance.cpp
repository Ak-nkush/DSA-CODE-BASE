#include<iostream>
#include<string> 
using namespace std ; 

// creating the base class 
class Vehicle{
    protected : 
      string name ; 
      string model ; 
      int noofTyres ; 
    
    public : 
      Vehicle(string _name , string _model , int _noofTyres){
        cout << "Vehicle ctor called " << endl ; 
        this->name = _name ; 
        this->model = _model ; 
        this->noofTyres - _noofTyres ; 
      }
      void start_engine(){
        cout << " Engine started of " << this->name << endl ; 
      }
      void stop_engine(){
        cout << " Engine stopped  " << this->name << endl ; 

      }
      ~Vehicle(){
         cout << "Vehicle dtor called " << endl ; 
      }
};

class Cars : public Vehicle{
    public : 
     int noofDoors ; 
     string transmissionType ; 

    Cars(string _name , string _model , int _noofTyres , int _noofDoors , string _transmissionType ):
     Vehicle(_name ,_model , _noofTyres)
    {
        cout << "Cars ctor called " << endl ;
        this->noofDoors = _noofDoors ; 
        this ->transmissionType = _transmissionType ;  
    }

    void getinfo(){
        return this->illegal() ; 
    }

    private : 
      void illegal(){
        cout << "Car is illegal " << endl ; 
      }
    
    public : 
     ~Cars(){
        cout << "cars dtor called "  << endl ; 
    }
};

class Truck : public Vehicle {
    public : 
     string handlebar ; 
     string suspensionType ; 

     Truck(string _name , string _model , int _noofTyres , string _handlebar , string _suspensionType):
     Vehicle(_name ,_model , _noofTyres){
        cout << "Truck ctor called " << endl ; 
        this->handlebar = _handlebar ; 
        this->suspensionType = _suspensionType ; 
     }

    ~Truck(){
        cout << "Truck dtor called " << endl ; 
    }
};

int main(){
     Cars A("suzuki Desire" , "100s" , 4 ,4 , "manual") ; 
     A.getinfo() ; 
     return 0 ; 
}