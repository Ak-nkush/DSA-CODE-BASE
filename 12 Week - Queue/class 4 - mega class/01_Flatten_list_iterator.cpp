#include<iostream>
#include<queue>
#include<vector>
using namespace std ; 
class NestedIterator{
    queue<int> flattenQ;

    void flatten(vector<NestedInteger>&nestedList){
        for(auto item:nestedList){
            if(item.isInteger()){ 
                // here item is object , to get the integer from object we have to use member to get interger soo we used getInteger
                flattenQ.push(item.getInteger()) ; 
            }
            else{
                flatten(item.getList()) ;  
            }
        }
    }
    public :
    // constructor 
    NestedIterator(vector<NestedInteger>&nestedList){
        flatten(nestedList) ; 
    }

    int next(){
        int front = flattenQ.front();
        flattenQ.pop();
        return front ; 
    } 

    bool hasNext(){
        return !flattenQ.empty() ; 
    }
        
};
