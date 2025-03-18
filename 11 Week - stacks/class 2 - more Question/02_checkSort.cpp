#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

bool checkSort(stack<int> &s, int &element1)
{
    // base case
    if (s.empty())
    {
        return true;
    }
    // case 1 ;
    int element2 = s.top();
    s.pop();
    if (element2 < element1)
    {
        return checkSort(s, element2);
        //! warning: control reaches end of non-void function [-Wreturn-type], it was sgiving this error because we where not returning the value , yes we had the correct base condition but we backtrack it was not returning anything 
    }
    else
    {
        return false;
    }
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int element1 = INT_MAX;
    cout << checkSort(s, element1);
}
