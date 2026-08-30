#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void reverse(queue<int> &q)
{
    stack<int> s;
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
}

void recusion(queue<int> &q)
{
    if(q.empty())
    {
        return ;
    }
    int temp = q.front();
    q.pop();
    recusion(q);
    q.push(temp);
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << "reversing queue  = ";
    //reverse(q);
    recusion(q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}