// #include <iostream>
// #include<vector>
// using namespace std;
// int singleNumber(vector<int> &nums)
// {
//     vector<bool> arr(nums.size(), false);
//     int ans = 0;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (arr[i])
//             continue;
//         bool dublicatecheck = false;
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             if (nums[i] == nums[j] && !arr[j])
//             {
//                 arr[j] = true;
//                 dublicatecheck = true;
//             }
//         }
//         if (!dublicatecheck)
//         {
//             ans = nums[i];
//         }
//     }

//     return ans;
// }

// int main()
// {
//     int size;
//     cout <<"enter the size => ";
//     cin >> size;
//     vector<int> vec(size);
//     for (int i = 0; i < size; i++)
//     {
//         cout << "[" << i << "]" << " " << "index => ";
//         cin >> vec[i];
//     }
//     cout << singleNumber(vec);
// }

#include <iostream>
#include <vector>
using namespace std;
int totalNumbers(vector<int> &arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] != 0)
        {
        for (int j = 0; j < arr.size(); j++)
        {
            for (int k = 0; k < arr.size(); k++)
            {
                if (i != j && j != k && i != k)
                {
                    if (arr[k] % 2 == 0)
                    {
                        int number = arr[i] * 100 + arr[j] * 10 + arr[k];
                        cout << number << endl;
                        count++;
                    }
                }
            }
        }
    }
    }
    return count;
}
int main()
{
    vector<int> arr;
    arr.push_back(0);
    arr.push_back(2);
    arr.push_back(2);
    //arr.push_back(4);
    cout << totalNumbers(arr) << endl;
}