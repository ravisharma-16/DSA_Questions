#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(12);
    q.push(13);
    q.push(14);
    cout << "front element are = " << q.front() << endl;
    cout << "size of queue = " << q.size() << endl;
    q.pop();
    cout << "size of queue = " << q.size() << endl;
    if (q.empty())
    {
        cout << "empty" << endl;
    }
    else
    {
        cout << "not empty";
    }
}