// #include <iostream>
// using namespace std;
// int banana(int arr[], int size, int hour)
// {
//     int k, start = 0, end = size - 1;
//     int max = arr[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }

//     int total_time = 0;
//     for (int i = 1; i <= max; i++)
//     {
//         total_time += (i + k - 1);
//     }
//     return total_time <= hour;
// }
// int main()
// {
//     int arr[20], size, hour;
//     cout << "enter the size = ";
//     cin >> size;
//     for (int i = 0; i < size; i++)
//     {
//         cout << i << " " << "index = ";
//         cin >> arr[i];
//     }
//     cout << "enter the hour = ";
//     cin >> hour;
//     cout << banana(arr, size, hour);
// }

#include <iostream>
using namespace std;
int tablenum(int num, int table = 1)
{
    int fact=1;
    if (table == 11)
    {
        return 1;
    }
    cout << num * fact << endl;
    fact = tablenum(num, table + 1);
}
int main()  
{
    int num, table;
    cout << "enter the number = ";
    cin >> num;
    tablenum(num);
}