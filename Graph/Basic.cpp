// #include<iostream>
// #include<list>
// #include<unordered_map>
// using namespace std;

// class graph
// {
//  public:
//  unordered_map<int,list<int>>G;
//  void addedge(int u,int v,bool direction)
//  {
//    G[u].push_back(v);

//    // 0 mean diection and 1 mean non diection 
//    if(direction == 0)
//    {
//      G[v].push_back(u);
//    }
//  }
//  void printedgelist()
//  {
//     for(auto i : G)
//     {
//         cout << i.first << "-> ";
//         for(auto j : i.second)
//         {
//             cout << j << ", ";
//         }
//         cout <<endl;
//     }
//  }
// };

// int main()
// {
//     int n;
//     cout << "enter the n number of nodes : ";
//     cin >> n;
//     int m;
//     cout << "enter the m number of Edges : ";
//     cin >> m;

//     graph obj;
//     for(int i = 0; i < m; i++)
//     {
//         int u,v;
//         cin >> u >> v;
//         obj.addedge(u,v,0);
//     }
//     obj.printedgelist();
//     return 0;
// }


// it as not a declear datatype

#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;
template <typename T>

class graph
{
 public:
 unordered_map<T,list<T>>G;
 void addedge(T u,T v,bool direction)
 {
   G[u].push_back(v);
   // 0 mean diection and 1 mean non diection 
   if(direction == 0)
   {
     G[v].push_back(u);
   }
 }
 void printedgelist()
 {
    for(auto i : G)
    {
        cout << i.first << "-> ";
        for(auto j : i.second)
        {
            cout << j << ", ";
        }
        cout <<endl;
    }
 }
};

int main()
{
    int n;
    cout << "enter the n number of nodes : ";
    cin >> n;
    int m;
    cout << "enter the m number of Edges : ";
    cin >> m;

    graph<int> obj;
    for(int i = 0; i < m; i++)
    {
        int u,v;
        cin >> u >> v;
        obj.addedge(u,v,0);
    }
    obj.printedgelist();
    return 0;
}