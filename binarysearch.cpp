// #include <iostream>
// using namespace std;
// int binarysearch(int arr[], int size, int find)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = (start + end) / 2;
   
//     while (start <= end)
//     {
//         if (arr[mid] == find)
//         {
//             return mid;
//         }
//         else if (find < arr[mid])
//         {
//             end = mid - 1;
//         }
//         else if (find > arr[mid])
//         {
//             start = mid + 1;
//         }
//         mid = (start + end) / 2;
//     }
//     return -1;
// }
// int main()
// {
//     int size, arr[100];
//     int find;
//     cout << "enter the number = ";
//     cin >> size;
//     for (int i = 0; i < size; i++)
//     {
//         cout << i << "enter the index = ";
//         cin >> arr[i];
//     }
//     cout << "enter the find number = ";
//     cin >> find;
//     cout << "original array is = ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     if (binarysearch(arr, size, find) == -1)
//     {
//         cout << "element not found";
//     }
//     else
//     {
//         cout << "element found = " << find;
//     }
// }

// #include<iostream>
// using namespace std;
// int first(int arr[],int size, int find)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = (start + end)/2;
//     int first;
//     while(start <= end)
//     {
//         if(arr[mid] == find)
//         {
//             first = mid;
//             end = mid - 1;
//         }
//         else if(find < arr[mid])
//         {
//             end = mid - 1;
//         }
//         else if(find > arr[mid])
//         {
//            start = mid + 1;
//         }
//        mid = (start + end)/2;
//     }
//     return first;
// }
// int last(int arr[],int size, int find)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = (start + end)/2;
//     int last;
//     while(start <= end)
//     {
//         if(arr[mid] == find)
//         {
//             last = mid;
//              start = mid + 1;
//         }
//         else if(find < arr[mid])
//         {
//             end = mid - 1;
//         }
//         else if(find > arr[mid])
//         {
//            start = mid + 1;
//         }
//        mid = (start + end)/2;
//     }
//     return last;
// }
// int main()
// {
//     int i,size,arr[100];
//     int find;
//     cout<<"enter the number = ";
//     cin>>size;
//     for(i=0;i<size;i++)
//     {
//         cout<<i<<" "<<"enter the index = ";
//         cin>>arr[i];
//     }
//     cout<<"enter the find number = ";
//     cin>>find;
//     cout<<"original array is = ";
//     for(i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int index = first(arr,size,find);
//     cout<<"first index number are = "<<index<<endl;
//     int index2 = last(arr,size,find);
//     cout<<"last index number are = "<<index2<<endl;
// }

//  2D matrix

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& arr, int target) {
//         for (int i = 0; i < arr.size(); ++i) {
//             int s = 0, e = arr[i].size() - 1;
//             while (s <= e) {
//                 int mid = s + (e - s) / 2;
//                 if (arr[i][mid] == target) {
//                     return true;
//                 } else if (arr[i][mid] < target) {
//                     s = mid + 1;
//                 } else {
//                     e = mid - 1;
//                 }
//             }
//         }
//         return false;
//     }
// };

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& arr, int target) {
//         int row = arr.size();
//         int col = arr[0].size();
//         int s = 0, e = row * col - 1;
//         int mid;

//         while (s <= e) {
//             mid = s + (e - s) / 2;
//             int num = arr[mid / col][mid % col];
//             if (num == target) {
//                 return true;
//             } else if (num < target) {
//                 s = mid + 1;
//             } else {
//                 e = mid - 1;
//             }
//         }
//         return false;
//     }
// };



#include<iostream>
using namespace std;
void solve(int &n)
{
  if(n > 10)
  {
    return;
  }
  cout<<n<<endl;
  int v = n+1;
  solve(v);

}
int main()
{
    int n =1;
    solve(n);
    return 0;
}