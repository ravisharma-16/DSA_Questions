// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,arr[15],n;
//     cout<<"enter the number = ";
//     cin>>n;
//      for(i=0;i<n;i++)
//      {
//         cout<<i<<" enter the index = ";
//         cin>>arr[i];
//      }
//      for(i=0;i<n;i++)
//      {
//         cout<<arr[i]<<" ";
//      }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,arr[100],n;
//     cout<<"enter the number = ";
//     cin>>n;
//      for(i=0;i<n;i++)
//      {
//         arr[i] = 1;
//      }
//      for(i=0;i<n;i++)
//      {
//         cout<<arr[i]<<" ";
//      }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i;
//     char arr[100] = {'H','E','E','L','O','\0'};
//      for(i=0;arr[i]!='\0';i++)
//      {
//         cout<<arr[i]<<" ";
//      }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i;
//     char arr[100] = "hello";
//      for(i=0;arr[i]!='\0';i++)
//      {
//         cout<<arr[i]<<" ";
//      }
// }
// 2D array
//  #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[100][100],n,i,j;
//     cout<<"enter the number = ";
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             cout<<i<<" "<<j<<"index number = ";
//             cin>>arr[i][j];
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             if(i==j)
//             {
//                 cout<<1<<"  ";
//             }
//             else{
//                 cout<<0<<"  ";
//             }
//         }
//         cout<<endl;
//     }

// }

//         merge array
//  #include<iostream>
//  using namespace std;
//  void mergearray(int arr[],int arr2[],int arr3[],int size,int size2)
//  {
//     int i,k=0;
//      for(i=0;i<size;i++)
//     {
//         arr3[k] = arr[i];
//         k++;
//     }
//     for(i=0;i<size2;i++)
//     {
//         arr3[k] = arr2[i];
//         k++;
//     }
//     cout<<"merge array -> ";
//     for(i=0;i<k;i++)
//     {
//        cout<<arr3[i]<<" ";
//     }
//  }
//  void originalarray(int arr[],int size)
//  {
//     int i;
//     for(i=0;i<size;i++)
//      {
//         cout<<arr[i]<<" ";
//      }
//  }
//  void originalsecarray(int arr2[],int size2)
// {
//     int i;
//     for(i=0;i<size2;i++)
//      {
//         cout<<arr2[i]<<" ";
//      }
// }
// int main()
// {
//     int arr[50],arr2[50],arr3[100];
//     int i,j,k=0,size,size2;
//     cout<<"enter the array size = ";
//     cin>>size;
//     for(i=0;i<size;i++)
//     {
//         cout<<i<<" "<<"index -> ";
//         cin>>arr[i];
//     }
//     cout<<"enter the 2 array size = ";
//    cin>>size2;
//     for(i=0;i<size2;i++)
//     {
//         cout<<i<<" "<<"index -> ";
//         cin>>arr2[i];
//     }
//     cout<<"first array -> ";
//     originalarray(arr,size);
//     cout<<endl;
//     cout<<"second array -> ";
//     originalsecarray(arr2,size2);
//     cout<<endl;
//    mergearray(arr,arr2,arr3,size,size2);
// }

//        merge and shorting
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,k =0,arr[50],arr2[50],arr3[100],j;
//     int size,size2;
//     cout<<"enter the size -> ";
//     cin>>size;
//     for(i=0;i<size;i++)
//     {
//         cout<<i<<"enter the index = ";
//         cin>>arr[i];
//     }
//     cout<<"enter the 2 size -> ";
//     cin>>size2;
//      for(i=0;i<size2;i++)
//     {
//         cout<<i<<"enter the index = ";
//         cin>>arr2[i];
//     }
//      for(i=0,j=0;i<size,j<size2;i++,j++)
//     {
//        arr3[k] = arr[i];
//        k++;
//        arr3[k] = arr2[j];
//        k++;
//     }
//     for(i=1;i<k;i++)
//     {
//         for(j =0;j<k-i;j++)
//         {
//             if(arr3[j] > arr3[j + 1])
//                {
//                 int temp = arr3[j];
//                 arr3[j] = arr3[j + 1];
//                 arr3[j + 1] = temp;
//                }
//         }
//     }
//      for(i=0;i<k;i++)
//     {
//         cout<<arr3[i]<<" ";
//     }
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, arr[20], size;
//     int k = 0;
//     cout << "enter the size -> ";
//     cin >> size;
//     for (i = 0; i < size; i++)
//     {
//         cout << i << " " << "enter the index = ";
//         cin >> arr[i];
//     }
//     for (i = 0; i < size; i++)
//     {
//         if (arr[i] != 0)
//         {

//             arr[k] = arr[i];
//             k++;
//         }
//     }
//     for (i = k; i < size; i++)
//     {
//         arr[i] = 0;
//     }
//     for (i = 0; i < size; i++)
//     {
//         cout << " " << arr[i];
//     }
// }

//   NON DUPLICATE NUMBER PRINT

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;

//     // Input the size of the array
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];

//     // Input elements in the array
//     cout << "Enter the elements of the array:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // Loop through each element
//     cout << "Non-duplicate elements are: ";
//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         // Check if the current element is duplicated
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }
//         // If the element appears only once, print it
//         if (count == 1)
//         {
//             cout << arr[i] << " ";
//         }
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int i, arr[20], size;
//     int k = 0;
//     cout << "Enter the size -> ";
//     cin >> size;

//     // Input the array elements
//     for (i = 0; i < size; i++) {
//         cout << i << " enter the index = ";
//         cin >> arr[i];
//     }

//     // First pass: Move all non-zero elements to the front
//     for (i = 0; i < size; i++) {
//         if (arr[i] != 0) {
//             arr[k] = arr[i];
//             k++;
//         }
//     }

//     // Second pass: Fill the remaining positions with zeros
//     while (k < size) {
//         arr[k] = 0;
//         k++;
//     }

//     // Output the modified array
//     for (i = 0; i < size; i++) {
//         cout << " " << arr[i];
//     }

//     return 0;
// }

// rotart array

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, arr[20], size, arr2[20], rotate;
//     cout << "enter the size -> ";
//     cin >> size;
//     for (i = 0; i < size; i++)
//     {
//         cout << i << " " << "enter the index = ";
//         cin >> arr[i];
//     }
//     cout << "enter the rotate size -> ";
//     cin >> rotate;
//     for (i = 0; i < size; i++)
//     {
//         arr2[(i + rotate) % size] = arr[i];
//     }
//     for (i = 0; i < size; i++)
//     {
//         cout << " " << arr2[i];
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, arr[20], size, count = 0;
//     cout << "enter the size -> ";
//     cin >> size;
// for (i = 0; i < size; i++)
// {
//     cout << i << " " << "enter the index = ";
//     cin >> arr[i];
// }
//     for (i = 1; i <= size; i++)
//     {
//         if (arr[i - 1] > arr[i])
//         {
//             count++;
//         }
//     }
//     if (arr[size - 1] > arr[0])
//     {
//         count++;
//     }
//     if(count == 1)
//     {
//     cout << "number of pear -> " << count;
//     }
//     else
//     {
//         cout << "number of not pear -> " << count;
//     }
// }

//   CHARACTER ARRAY
// #include <iostream>
// using namespace std;
// int main()
// {
//     char arr[20];
//     cout << "enter the string -> ";     //   ravi sharma
//     cin >> arr;                          // output =>  ravi
//     cout << arr;
// }

//  ... . . . . . .  . . .....

// #include <iostream>
// using namespace std;
// int main()
// {
//     char arr[20];
//     cout << "enter the string -> ";          //   ravi sharma
//     cin.get(arr,20);                        // output =>  ravi sharma
//     cin.getline(arr,20); using any one
//     cout << arr;

// }

//       STRING

// #include <iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string str;
//     cout << "enter the string => ";
//     getline(cin,str);
//     cout << str;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     string s = "hello";
    
//     for (int i = 0; i < s.length(); i++) {
//         cout << s[i] << " ";  // Access each character by index
//     }
    
//     return 0;
// }


// #include <iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string str[20];
//     cout << "enter the string => ";
//     getline(cin,str[0]);
//     cout << str[0];
//     cout << "enter the index number 1 => ";
//      getline(cin,str[1]);
//     cout << str[1];
// }

//   MAJORITY NUMBER

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, arr[20], size, count = 0, maj = 0;
//     cout << "enter the size -> ";
//     cin >> size;
//     for (i = 0; i < size; i++)
//     {
//         cout << i << " " << "enter the index = ";
//         cin >> arr[i];
//     }
//     int half = (size / 2);
//     for (i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }
//         if (count > half)
//         {
//             maj = arr[i];
//         }
//         count = 0;
//     }
//     cout << "majority number are => " << maj;
// }

#include<iostream>
using namespace std;
int main()
{
    int *arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "enter the number -> ";
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        // cout<<arr[i]<<" ";
        // cout<<i[arr]<<" ";
        cout<<*(arr + i)<<" ";
        // cout<<*(i+arr)<<" ";
    }
    delete []arr;
    
    return 0;
}
