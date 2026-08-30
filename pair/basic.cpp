#include<iostream>
using namespace std;
int main()
{
    pair<int, char> p1;
    p1 = make_pair(2, 'b');
    cout << p1.first << " " << p1.second << endl;

    pair<int,int>p(1,2);
    cout << p.first << " " << p.second << endl;

    pair<int, char> p2;
    p2.first = 1;
    p2.second = 'a';
    cout << p2.first << " " << p2.second << endl;

    pair<int,pair<int,int>>p3;
    p3 = make_pair(1,make_pair(2,3));
    cout << p3.first << " " << p3.second.first << " " << p3.second.second << endl;
    
    return 0;
}

