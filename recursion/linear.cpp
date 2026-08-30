// #include<iostream>
// using namespace std;
// int search(int arr[],int size,int key)
// {
//     if(size == 0)
//     {
//         return false;
//     }
//     if(arr[0] == key)
//     {
//         return true;
//     }
//     else
//     {
//     search(arr + 1,size - 1,key);
//     }
// }
// int main()
// {
//     int arr[20],size,key;
//     cout<<"enter the size => ";
//     cin>>size;
//     for (int i = 0; i < size; i++)
//     {
//        cout << "[" << i << "]"<<" "<< "enter the value => ";
//        cin >> arr[i];
//     }
//     cout << "enter the searching number => ";
//     cin >> key;
//     bool ans = search(arr,size,key);
//     if(ans)
//     {
//         cout << "present";
//     }
//     else
//     {
//         cout << "not present";
//     }
// }