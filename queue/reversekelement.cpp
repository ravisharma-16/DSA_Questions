#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void reverse(queue<int> &q,int k)
{
    stack<int> s;
   for(int i = 0; i < k; i++)
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    for(int i = 0; i < q.size() - k; i++)
    {
        int val = q.front();
        q.pop();
        q.push(val);
    }
}

int main()
{
    int k;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout <<"enter the Kth element reverse = ";
    cin >> k;
    cout << "reversing a queue k element = ";
    reverse(q,k);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}