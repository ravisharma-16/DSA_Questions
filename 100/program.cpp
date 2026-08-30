// #include <iostream>
// #include <vector>
// using namespace std;
// void twosum(vector<int> &arr, int target)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             if (arr[i] + arr[j] == target)
//             {
//                 cout << arr[i] << " " << "+" << " " << arr[j] << " " << "=" << " " << target;
//             }
//         }
//     }
// }
// bool twosum2(vector<int> &arr, int target)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             if (arr[i] + arr[j] == target)
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main()
// {
//     int size,target;
//     cout << "enter the size = ";
//     cin >> size;
//     vector<int>arr(size);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << "[" << i << "]" <<" " << "index = ";
//         cin >> arr[i];
//     }
//     cout << " enter the target number = ";
//     cin >> target;
//     twosum(arr, target);
//     cout << endl;
//     if (twosum2(arr, target))
//     {
//         cout << "true";
//     }
//     else
//     {
//         cout << "false";
//     }
// }

//      STOCK BUY ANS SELL MAX ONE TRANSACTION ALLOWED

// #include <iostream>
// #include <vector>
// using namespace std;
// int stock(vector<int> &arr)
// {
//     int res = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             int sum = arr[j] - arr[i];
//              if(res < sum)
//              {
//                 res = sum;
//              }
//         }
//     }
//     return res;
// }
// int main()
// {
//     int size;
//     cout << "enter the size = ";
//     cin >> size;
//     vector<int>arr(size);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << "[" << i << "]" <<" " << "index = ";
//         cin >> arr[i];
//     }
//     cout << stock (arr);
//     cout << endl;
// }

//    PRINT DUPLICATE NUMBER

// #include <iostream>
// #include <vector>
// using namespace std;
// void duplicatenum(vector<int> &arr)
// {
//      cout <<"duplicate number = ";
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i+1; j < arr.size(); j++)
//         {
//             if(arr[i] == arr[j])
//              {
//             cout << arr[i] << " ";
//              }
//         }
//     }
// }
// int main()
// {
//     int size;
//     cout << "enter the size = ";
//     cin >> size;
//     vector<int>arr(size);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << "[" << i << "]" <<" " << "index = ";
//         cin >> arr[i];
//     }
//     duplicatenum(arr);
//     cout << endl;
// }

//         NON - DUPLICATE NUMBER

// #include <iostream>
// #include <vector>
// using namespace std;
// void duplicatenum(vector<int> &arr)
// {
    // int res = 0;
    // cout <<"non - duplicate number = " ;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     res = 0;
    //     for (int j = 0; j < arr.size(); j++)
    //     {
    //         if(arr[i] == arr[j])
    //          {
    //             res++;
    //          }
    //     }
    //     if(res == 1)
    //     {
    //         cout << arr[i] << " ";
    //     }
    // }
// }
// int main()
// {
//     int size;
//     cout << "enter the size = ";
//     cin >> size;
//     vector<int>arr(size);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << "[" << i << "]" <<" " << "index = ";
//         cin >> arr[i];
//     }
//     duplicatenum(arr);
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> arr = {2,4, 5,5,5,9};
//     int n = arr.size();
//     int prev = -1;
//     vector<int> ans;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != prev)
//         {
//             ans.push_back(arr[i]);
//             prev = arr[i];
//         }
//         else
//         {
//             prev = arr[i];
//         }
//     }
//     cout << "non - duplicate number = ";
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << endl;
// }

//                MAXIMUM SUBARRAY -----

#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
void subarray(vector<int> &arr)
{
    cout << "MAXIMUM SUBARRAY ----" <<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // sorting descending order
    // sort(arr.begin(),arr.end(),greater<int>());

    // sorting ascending order
    // sort(arr.begin(),arr.end());

    // for(int i = 0; i < arr.size(); i++)
    // {
    //     for(int j = i; j < arr.size(); j++)
    //     {
    //             cout << arr[j] << " ";
    //     }
    //     cout << endl;
    // }
}
int main()
{
    int size;
    cout << "enter the size = ";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "[" << i << "]" << " " << "index = ";
        cin >> arr[i];
    }
   subarray(arr);
}

//       MAXIMUM SUBARRAY PRODUCT  ----

// #include <iostream>
// #include <vector>
// using namespace std;
// void subarray(vector<int> &arr)
// {
//     int temp = 0,pro;
//     cout << "MAXIMUM SUBARRAY PRODUCT => ";
//     for (int i = 0; i < arr.size(); i++)
//     {
//         pro = 1;
//         for (int j = i; j < arr.size(); j++)
//         {
//             pro *= arr[j];
//             if (temp < pro)
//             {
//                 temp = pro;
//             }
//         }
//     }
//     cout << temp << endl;
// }
// int main()
// {
//     int size;
//     cout << "enter the size = ";
//     cin >> size;
//     vector<int> arr(size);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << "[" << i << "]" << " " << "index = ";
//         cin >> arr[i];
//     }
//     subarray(arr);
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// void subarray(vector<int> &arr)
// {
//     int min;
//     min = arr[0];
//     cout << "MINIMUM NUMBER => ";
//     for (int i = 0; i < arr.size(); i++)
//     {
//          if (min > arr[i])
//             {
//                 min = arr[i];
//             }
//     }
//     cout << min << endl;
// }
// int main()
// {
//     int size;
//     cout << "enter the size = ";
//     cin >> size;
//     vector<int> arr(size);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << "[" << i << "]" << " " << "index = ";
//         cin >> arr[i];
//     }
//     subarray(arr);
// }

// #include <iostream>
// using namespace std;
// void array(int arr[], int size)
// {
//     int temp[size];
//     for (int i = 0; i < size; i++)
//     {
//         temp[i] = 1;
//         for (int j = 0; j < size; j++)
//         {
//             if (i != j)
//             {
//                 temp[i] *= arr[j];
//             }
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {

//         arr[i] = temp[i];
//     }
// }

// int main()
// {
//     int arr[10], size;
//     cout << endl
//          << "enter size of array : ";
//     cin >> size;
//     cout << endl
//          << "enter elements of array : ";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << endl
//          << "orignal array : ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << " " << arr[i] << endl;
//     }
//     array(arr, size);
//     cout << endl
//          << "updated array : ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << " " << arr[i] << endl;
//     }
// }

//     linaer search

// #include <iostream>
// #include <vector>
// using namespace std;
// int array(vector<int> &arr, int size, int find)
// {
//     int s = 0, e = size - 1;
//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;
//         if (arr[mid] == find)
//         {
//             return mid;
//         }
//         if (arr[mid] > find)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int size, find;
//     cout << "enter size of array : ";
//     cin >> size;
//     vector<int> arr(size);
//     cout << "enter elements of array : " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "[" << i << "]" << "index = ";
//         cin >> arr[i];
//     }
//     cout << "enter the find element: ";
//     cin >> find;
//     int result = array(arr, size, find);
//     if (result == -1)
//     {
//         cout << " number are not present " << endl;
//     }
//     else
//     {
//         cout << "number are present index number = " << result;
//     }
// }

//  find the sum of equal of 0;

// #include <iostream>
// #include <vector>
// using namespace std;
// void array(vector<int> &arr, int count)
// {
//     int check = 0;
//     for (int i = 0; i < count; i++)
//     {
//         for (int j = i + 1; j < count; j++)
//         {
//             for (int k = j + 1; k < count; k++)
//             {
//                 if ((arr[i] + arr[j] + arr[k]) == 0)
//                 {
//                     cout << "triplets found with sum zero : ";
//                     cout << arr[i] << " " << arr[j] << " " << arr[k] << " ";
//                     cout << endl;
//                     check = 1;
//                 }
//             }
//         }
//     }
//     if(check == 0)
//     {
//         cout << "no triplets found with sum zero ";
//     }
// }

// int main()
// {
//     int size;
//     cout << "enter size of array : ";
//     cin >> size;
//     vector<int> arr(size);
//     cout << "enter elements of array : " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "[" << i << "]" << "index = ";
//         cin >> arr[i];
//     }
//     array(arr, size);
// }


//  contain with most water

// #include <iostream>
// #include <vector>
// using namespace std;
// int array(vector<int> &arr, int count)
// {
//     int area = 0,min = 0;
//     for (int i = 0; i < count; i++)
//     {
//         for (int j = i + 1; j < count; j++)
//         {
//             if(arr[j] > arr[i])
//             {
//                  min = arr[i] * (j -i);
//             }
//             else
//             {
//                 min = arr[j] *(j - i);
//             }
//         }
//         if(area < min)
//         {
//             area = min;
//         }
//     }
//     return area;
// }

// int main()
// {
//     int size;
//     cout << "enter size of array : ";
//     cin >> size;
//     vector<int> arr(size);
//     cout << "enter elements of array : " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "[" << i << "]" << "index = ";
//         cin >> arr[i];
//     }
//     cout << array(arr, size);
// }


//        maximum subarray
//  #include <iostream>
// #include <vector>
// using namespace std;
// void subarray(vector<int> &arr)
// {
//     int temp = 0,pro;
//     cout << "MAXIMUM SUBARRAY  => ";
//     for (int i = 0; i < arr.size(); i++)
//     {
//         pro = 0;
//         for (int j = i; j < arr.size(); j++)
//         {
//             pro += arr[j];
//             if (temp < pro)
//             {
//                 temp = pro;
//             }
//         }
//     }
//     cout << temp << endl;
// }
// int main()
// {
//     int size;
//     cout << "enter the size = ";
//     cin >> size;
//     vector<int> arr(size);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << "[" << i << "]" << " " << "index = ";
//         cin >> arr[i];
//     }
//     subarray(arr);
// }


