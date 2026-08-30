#include <iostream>
#include <queue>
using namespace std;
int main()
{
    deque<int> q;
    q.push_front(14);
    q.push_back(12);

    cout << q.front() << endl;
    cout << q.back() << endl;

    q.pop_front();
    cout << q.front() << endl;
    cout << q.back() << endl;

    q.pop_back();
    cout << q.front() << endl;
    cout << q.back() << endl;

    if(q.empty())
    {
        cout <<"empty";
    }
    else
    {
        cout <<"not empty";
    }
}