#include<iostream>
using namespace std;
int main(){
    
    cout<<"FOR LOOP"<<endl;
    for(int count=1;count<=10;count++){
        cout<<"great work "<<endl;
    }

    cout<<"BREAK KEYWORD"<<endl;
    for(int i=1;i<=10;i++){
        if(i==5){
            break;
        }
        cout<<i<<endl;
    }

    cout<<"CONTINUE KEYWORD"<<endl;
    for(int i=1;i<=10;i++){
        if(i==5){
            continue;
        }
        cout<< i<<" "<<endl;
    }

    cout<<"WHILE LOOP"<<endl;
    int i=1;
    while(i<=5){
        cout<<i<<endl;
        i=i+1;
    }



    cout<<"DO WHILE LOOP"<<endl;
    int d=1;
    do{
        //logic
        cout<<d<<" "<<endl;
        //updation
        d++;
    } while(d<=5);


    return 0;
}