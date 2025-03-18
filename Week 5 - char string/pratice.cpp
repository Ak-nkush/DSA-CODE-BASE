#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int countone(string s)
{
    int count = 0;
    for (auto i : s)
    {
        if (i == '1')
            count++;
    }
    return count;
}

    int main()
    {

        vector<string> bank = {"000","111","000"};
        vector<int> device;
        for (int i = 0; i < bank.size(); i++)
        {
            int value = countone(bank[i]);
            device.push_back(value);
        }
        
        for(auto i:device){
            cout << i << " " ; 
        }
        
        int laser = 0 ; 
        for (int i = 0; i < device.size(); i++)
        {   
            int j = i + 1 ;
            while (j<device.size()){
                if(device[j]==0) j++ ;
                laser = laser +(device[i]*device[j]) ; 
                break ; 
            }
        }
        cout << endl << laser  ; 
    }