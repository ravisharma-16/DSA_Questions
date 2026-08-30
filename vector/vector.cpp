// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int size;
//     cout << "enter the size => ";
//     cin >> size;
//     vector<int>vec(size);
//     for (int i = 0; i < size; i++)
//     {
//        cout << "[" << i << "]" << "index => ";
//        cin >> vec[i];
//     }
//    // vec.push_back(25);
//     cout << vec.size() << endl;
//      cout << vec.capacity() << endl;
//     // for(int i : vec)
//     // {
//     //     cout << i << " ";
//     // }
//     for (int i = 0; i < vec.size(); i++)
//     {
//         cout << vec[i] << " ";
//     }

// }

// 2D matrix

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int row = 3, col = 3;
//     vector<vector<int>>arr(row,vector<int>(col));
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << "[" << i << " " << j << " " << "]" << "index => ";
//             cin >> arr[i][j];
//         }
//     }
//      for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j]<<" ";
//         }
//         cout <<endl;
//     }
//     return 0;
// }



// #include <iostream>
// #include <vector>
// using namespace std;

// void printnum(vector<vector<int>>&arr,int row,int col)
// {
//      for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = 0; j < arr[i].size(); j++)
//         {
//             cout << arr[i][j]<<" ";
//         }
//         cout <<endl;
//     }
// }
// int main()
// {
//     int row = 3, col = 3;
//     vector<vector<int>>arr(row,vector<int>(col));
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << "[" << i << " " << j << " " << "]" << "index => ";
//             cin >> arr[i][j];
//         }
//     }
//     printnum(arr,row,col);
//     return 0;
// }


#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;
int main()
{
    // vector<stack<int>>m;
    // stack<int>s;
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // stack<int>st;
    // st.push(5);
    // st.push(6);
    // st.push(7);
    // st.push(8);
    // m.push_back(s);
    // m.push_back(st);
    // for(int i = 0;i < m.size();i++)
    // {
    //     while(!m[i].empty())
    //     {
    //         cout<<m[i].top()<<" ";
    //         m[i].pop();
    //     }
    // }


    unordered_map<int,int>arr;
    arr[1]= 40;
    arr[1]= 50;
    arr[2]= 60;
    arr[4]= 70;

    // for(int i=0;i< arr.size(); i++)
    // {
    //     cout<< arr[i].first << " "
    // }

    for(auto i : arr)
    {
        cout << i.first << " -> "<< i.second <<endl;
    }
    
    return 0;
}
