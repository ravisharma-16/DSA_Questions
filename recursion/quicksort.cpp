// #include <iostream>
// using namespace std;
// int patitionarry(int arr[], int start, int end)
// {
//     int count = 0;
//     for (int i = 1; i <= end; i++)
//     {
//         if (arr[start] >= arr[i])
//         {
//             count++;
//         }
//     }
//     int privotindex = start + count;
//     int temp = arr[start];
//     arr[start] = arr[count];
//     arr[count] = temp;
//     int i = start, j = end;
//     while (i < privotindex && j > privotindex)
//     {
//         while (arr[count] > arr[i])
//         {
//             i++;
//         }
//         while (arr[count] < arr[j])
//         {
//             j--;
//         }
//         if (i < privotindex && j > privotindex)
//         {
//             int temps = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temps;
//             i++;
//             j--;
//         }
//     }
//     return privotindex;
// }
// void quicksort(int arr[], int start, int end)
// {
//     if (start >= end)
//     {
//         return;
//     }
//     int p = patitionarry(arr, start, end);
//     quicksort(arr, start, p - 1);
//     quicksort(arr, p + 1, end);
// }
// int main()
// {
//     int arr[20], size;
//     cout << "enter the size = ";
//     cin >> size;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     quicksort(arr, 0, size - 1);
//     cout << "quick sort = ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

#include <iostream>
#include <vector>
using namespace std;

int CenterValueFind(vector<int>&arr,int start,int end)
{
    int p = arr[end];
    int idx = start - 1;
    for(int j = start; j < end; j++)
    {
        if(arr[j] <= p)
        {
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}

void quicksort(vector<int>&arr,int start,int end)
{
    if(start > end)
    {
        return;
    }
    int privot = CenterValueFind(arr,start,end);
    quicksort(arr,start,privot - 1);
    quicksort(arr,privot + 1,end);
}

int main()
{
    vector<int> arr = {2, 4, 5, 1, 3, 6};
     for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout <<endl;
    quicksort(arr,0,arr.size()-1);
    cout<<"after sort : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }



    // cout <<"jbcijwcbeicecejnejne;neqoiji3fjeifjejeqfiqejfifjijeiovnieovnioevuvqeneqjvnevjnjqenvjqebvejbvej;vb;evb;eqbv"
    // "jvejvejvejvnewj;vn;ejrvnjv";
    return 0;
}


