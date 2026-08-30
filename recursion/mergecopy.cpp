// #include <iostream>
// using namespace std;
// void sort(int arr[], int s, int e)
// {
//     int mid = s + (e - s) / 2;
//     int len = mid - s + 1;
//     int len2 = e - mid;
//     int *arr1 = new int[len];
//     int *arr2 = new int[len2];
//     for (int i = 0; i < len; i++)
//     {
//         arr1[i] = arr[s + i];
//     }
//     for (int i = 0; i < len2; i++)
//     {
//         arr2[i] = arr[mid + 1 + i];
//     }
//     int i = 0, j = 0, k = s;
//     for (; i < len && j < len2; k++)
//     {
//         if (arr1[i] <= arr2[j])
//         {
//             arr[k] = arr1[i++];
//         }
//         else
//         {
//             arr[k] = arr2[j++];
//         }
//     }

//     // Copy any remaining elements of arr1[]
//     for (; i < len; i++, k++)
//     {
//         arr[k] = arr1[i];
//     }

//     // Copy any remaining elements of arr2[]
//     for (; j < len2; j++, k++)
//     {
//         arr[k] = arr2[j];
//     }
//     delete[] arr1;
//     delete[] arr2;
// }
// void margesort(int arr[], int s, int e)
// {
//     int mid = s + (e - s) / 2;
//     if (s >= e)
//     {
//         return;
//     }
//     margesort(arr, s, mid);
//     margesort(arr, mid + 1, e);
//     sort(arr, s, e);
// }
// int main()
// {
//     int arr[20], size;
//     cout << "enter the size -> ";
//     cin >> size;
//     for (int i = 0; i < size; i++)
//     {
// cout << i << " " << "enter the index = ";
// cin >> arr[i];
//     }
//     cout << "Sorted array: ";
//     margesort(arr, 0, size - 1);
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// #include <iostream>
// using namespace std;
// void sortnum(int arr[], int start, int end)
// {
//     int mid = start + (end - start) / 2;
//     int len1 = mid - start + 1;
//     int len2 = end - mid;
//     int *arr1 = new int[len1];
//     int *arr2 = new int[len2];
//     int i = 0, j = 0;
//     while (i < len1)
//     {
//         arr1[i] = arr[start + i];
//         i++;
//     }
//     while (j < len2)
//     {
//         arr2[j] = arr[mid + 1 + j];
//         j++;
//     }
//     int k = start, m = 0, n = 0;
//     for (; m < len1 && n < len2; k++)
//     {
//         if (arr1[m] <= arr2[n])
//         {
//             arr[k] = arr1[m++];
//         }
//         else
//         {
//             arr[k] = arr2[n++];
//         }
//     }
//     // Copy any remaining elements of arr1[]
//     for (; m < len1; m++, k++)
//     {
//         arr[k] = arr1[m];
//     }
//     // Copy any remaining elements of arr2[]
//     for (; n < len2; n++, k++)
//     {
//         arr[k] = arr2[n];
//     }
//     delete[] arr1;
//     delete[] arr2;
// }
// void margenum(int arr[], int start, int end)
// {
//     int mid = start + (end - start) / 2;
//     if (start >= end)
//     {
//         return;
//     }
//     margenum(arr, start, mid);
//     margenum(arr, mid + 1, end);
//     sortnum(arr, start, end);
// }
// int main()
// {
//     int arr[20], size;
//     cout << "enter the size = ";
//     cin >> size;
//     for (int i = 0; i < size; i++)
//     {
//         cout << i + 1 << " " << "enter the index = ";
//         cin >> arr[i];
//     }
//     margenum(arr, 0, size - 1);
//     cout << "array sorted = ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

#include <iostream>
using namespace std;
void mergesort(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;
    int len = mid - s + 1;
    int len2 = e - mid;
    int *arr2 = new int[len];
    int *arr3 = new int[len2];
    for (int i = 0; i < len; i++)
    {
        arr2[i] = arr[s + i];
    }
    for (int i = 0; i < len2; i++)
    {
        arr3[i] = arr[mid + 1 + i];
    }  
    int k = s, m = 0, n = 0;
    for (; m < len && n < len2; k++)
    {
        if (arr2[m] <= arr3[n])
        {
            arr[k] = arr2[m++];
        }
        else
        {
            arr[k] = arr3[n++];
        }
    }
    for (; m < len; m++)
    {
        arr[k] = arr2[m];
        k++;
    }
    for (; n < len2; n++)
    {
        arr[k] = arr3[n];
        k++;
    }
    delete[] arr2;
    delete[] arr3;
}
void sorting(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;
    if (s >= e)
    {
        return;
    }
    sorting(arr, s, mid);
    sorting(arr, mid+1, e);
    mergesort(arr, s, e);
}
int main()
{
    int size, arr[20];
    cout << "enter the number = ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << i << " index = ";
        cin >> arr[i];
    }
    cout << "original array = ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    sorting(arr, 0, size - 1);
    cout << endl;
    cout << "ascending order = ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
