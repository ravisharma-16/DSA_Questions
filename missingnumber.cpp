#include <iostream>
using namespace std;
int maxnum(int arr[], int n)
{
    int i;
    int max;
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int minnum(int arr2[], int n)
{
    int i, min;
    min = arr2[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr2[i])
        {
            min = arr2[i];
        }
    }
    return min;
}
int main()
{
    int arr[20], missing, size, sum = 0, sum2 = 0;
    cout << "enter the number = ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << i << " " << "enter the index = ";
        cin >> arr[i];
    }

    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;

    int max = maxnum(arr, size);
    int min = minnum(arr, size);
    for (int i = min; i <= max; i++)
    {
        sum += i;
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            for (int j = i; j < size; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
    }
    for (int i = 0; i < size - 1; i++) //      -1 hatana hai
    {
        sum2 += arr[i];
    }
    missing = sum - sum2;
    cout << "missing number -> " << missing;
}

// #include <iostream>
// using namespace std;
// int missingNum(int arr[],int size)
// {
//     int start = 0, end = size+1,i=0;
//     int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         i=mid;
//         if (i!=arr[mid])
//         {
//             return i;
//         }
//         else if (i=arr[mid])
//         {
//             start = arr[mid + 1];
//         }
//         else
//         {
//             end = arr[mid - 1];
//         }
//         mid = start + (end - start) / 2;
//     }
// }
// void bubbleSort(int arr[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j < size - 1 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//                 swap(arr[j], arr[j+1]);
//         }
//     }
// }
// int main()
// {
//     int arr[10], size;
//     cout << "enter size of array : ";
//     cin >> size;
//     cout << endl
//          << "enter elements of array : ";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << endl;
//     bubbleSort(arr,size);
//     int result=missingNum(arr,size);
//     cout<<"the missing number is : "<<result;
// }