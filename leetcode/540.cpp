// #include <iostream>
// #include <vector>
// using namespace std;
// int dublicate(vector<int> &arr)
// {
//     int s = 0, e = arr.size() - 1;
//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;
//         if (mid == 0 && arr[0] != arr[1])
//         {
//             return arr[mid];
//         }
//         if (mid == (arr.size() - 1) && arr[mid - 1] != arr[arr.size() - 1])
//         {
//             return arr[mid];
//         }
//         if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1])
//         {
//             return arr[mid];
//         }
//         if (mid % 2 == 0)
//         {
//             if (arr[mid - 1] == arr[mid] &&arr[mid] != arr[mid + 1])
//             {
//                 e = mid - 1;
//             }
//             else
//             {
//                 s = mid + 1;
//             }
//         }
//         else
//         {
//             if (arr[mid - 1] == arr[mid] && arr[mid] != arr[mid + 1])
//             {
//                 s = mid + 1;
//             }
//             else
//             {
//                 e = mid - 1;
//             }
//         }
//     }
// }
// int main()
// {
//     int n;
//     cout << "enter the number = ";
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << "[" << i << "]" << "index = ";
//         cin >> arr[i];
//     }
//     int ans = dublicate(arr);
//     cout << "non dublicate number are = " << ans;
// }


#include <iostream>
#include <vector>
using namespace std;

int  NonDuplicate(vector<int> &arr) {
    int s = 0, e = arr.size() - 1;

    while (s < e) {
        int mid = s + (e - s) / 2;

        if (mid % 2 == 1) {
            mid--;
        }

        if (arr[mid] == arr[mid + 1]) {
            s = mid + 2;
        } else {
            e = mid;
        }
    }

    return arr[s];
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++) {
        cout << "[" << i << "] index = ";
        cin >> arr[i];
    }

    int ans = NonDuplicate(arr);
    cout << "The non-duplicate number is: " << ans << endl;

    return 0;
}
