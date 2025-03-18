#include <iostream>
#include <queue>
#include <stack>
using namespace std;
// todo - reverse the k groups in the queue
// intution - we will store the k elements into the stacks and then pushed it into the queue , repeat this process until groups are present, then groups are not left then just push the front element directly to the queue

void reverseKgroup(queue<int> &q, int count, int k)
{
    stack<int> s;
    if (count >= k)
    {
        for (int i = 0; i < k; i++)
        {
            int element = q.front();
            q.pop();
            s.push(element);
        }
        for (int i = 0; i < k; i++)
        {
            int element = s.top();
            s.pop();
            q.push(element);
        }
        reverseKgroup(q, count - k, k);
    }
    else
    {
        while (count--)
        {
            int element = q.front();
            q.pop();
            q.push(element);
        }
    }
}
void print(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);

    int count = q.size();
    int k = 2;
    reverseKgroup(q, count, k);
    print(q);
}