#include<iostream>
#include<queue>
using namespace std ; 

vector<int> rearrangeQueue(queue<int> &q1)
{
    int size = q1.size();
    int half = size / 2;
    queue<int> q2;
    vector<int> ans;

    while (half--)
    {
        int element = q1.front();
        q1.pop();
        q2.push(element);
    }

    half = size / 2;
    while (half--)
    {
        ans.push_back(q2.front());
        q2.pop();
        ans.push_back(q1.front());
        q1.pop();
    }

    return ans ; 
}

int main(){
    queue<int> q ; 
    q.push(10) ; 
    q.push(20) ; 
    q.push(30) ; 
    q.push(40) ; 
    
    vector<int> ans = rearrangeQueue(q) ; 
    for(auto i : ans){
        cout << i << " " ; 
    }
}
