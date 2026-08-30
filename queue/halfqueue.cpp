#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void middle(queue<int>&q)
{
    if(q.empty())
    {
        return;
    }
    int n = q.size();
    int k = n/2;
    stack<int>s;
    for(int i = 0; i < k; i++)
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    for (int i = 0; i < k; i++)
    {
       q.push(q.front());
       q.pop();
    }
    for(int i = 0; i < k; i++)
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }
    for(int i = 0; i < n; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
}
int main()
{
    queue<int>q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    //q.push(18);
    middle(q);
}