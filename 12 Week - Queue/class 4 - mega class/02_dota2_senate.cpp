#include<iostream>
#include<string>
#include<queue>
using namespace std ; 
// LC - 649 - dota2 senate

string predictPartyVictory(string senate){
    queue<int> radiantQ , direQ ; 
    
    int position = 0 ; 
    for(; position<senate.size() ; position++){
         char senator = senate[position] ; 
         if(senator == 'R') radiantQ.push(position) ; 
         if(senator == 'D') radiantQ.push(position) ; 
    }

    while(!radiantQ.empty() || !direQ.empty()){

        int Fradiant = radiantQ.front() ;
        radiantQ.pop() ;  
        int Fdire= direQ.front() ;
        direQ.pop() ; 
        
        if(Fradiant < Fdire){
           radiantQ.push(++position) ; 
        }
        else{
            direQ.push(++position) ; 
        }
    }

    if(!radiantQ.empty()){
        return "Radiant" ; 
    }
    else{
        return "Dire" ; 
    }
}
