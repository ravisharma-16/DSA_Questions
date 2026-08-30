// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// int studentCount(int arr[], int mid,int size){
//    int student=1;
//    int pages=0;
//   for (int i = 0; i <size ; i++)
//   {
//     if (pages+arr[i]<=mid)
//     {
//         pages+=arr[i];
//     }
//     else
//     {
//         student++;
//         pages=arr[i];
//     }

//   }
//    return student;
// }
// int ans(int arr[],int size,int n){
//       int s= *max_element(arr,arr+size);
//       int e= accumulate(arr,arr+size,0);

//       int mid=(s+e)/2;
//       int result=0;
//       while (s<=e)
//       {
//         int count=studentCount(arr,mid,size);
//         if (count>n)
//         {
//             s=mid+1;
//         }

//         else
//         {
//             result=mid;
//             e=mid-1;
//         }
//         mid=(s+e)/2;

//       }
//        return result;
// }
// int main(){
//     int arr[10];
//     int size;
//     int studentNo;
//     cout<<"Enter the size of array = ";
//     cin>>size;
//     for (int i = 0; i < size; i++)
//     {
//         cout<<"enter "<< i<<" element = ";
//         cin>>arr[i];
//     }

//     cout<<"Enter No of Student = ";
//     cin>>studentNo;
//     if(studentNo > size){
//         return -1;
//     }
//     int result = ans(arr, size, studentNo);
//     cout << "The minimum number of pages each student can get is = " << result << endl;

// }

// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// int studentCount(int arr[], int mid, int size)
// {
//     int student = 1;
//     int pages = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (pages + arr[i] <= mid)
//         {
//             pages += arr[i];
//         }
//         else
//         {
//             student++;
//             pages = arr[i];
//         }
//     }
//     return student;
// }
// int ans(int arr[], int size, int n)
// {
//     int s = *max_element(arr, arr + size);
//     int e = accumulate(arr, arr + size, 0);

//     int mid = (s + e) / 2;
//     int result = 0;
//     while (s <= e)
//     {
//         int count = studentCount(arr, mid, size);
//         if (count > n)
//         {
//             s = mid + 1;
//         }

//         else
//         {
//             result = mid;
//             e = mid - 1;
//         }
//         mid = (s + e) / 2;
//     }
//     return result;
// }
// int main()
// {
//     int arr[10];
//     int size;
//     int studentNo;
//     cout << "Enter the size of array = ";
//     cin >> size;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "enter " << i << " element = ";
//         cin >> arr[i];
//     }

//     cout << "Enter No of Student = ";
//     cin >> studentNo;
//     if (studentNo > size)
//     {
//         return -1;
//     }
//     int result = ans(arr, size, studentNo); 
//     cout << "The minimum number of pages each student can get is = " << result << endl;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// bool iscorrect(vector<int> &arr, int stud, int mid)
// {
//     int student = 1, pages = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] > mid)
//         {
//             return false;
//         }

//         if (pages + arr[i] <= mid)
//         {
//             pages += arr[i];
//         }
//         else
//         {
//             student++;
//             pages = arr[i];
//         }
//     }
//     return student > stud ? false : true;
// }
// int bookallocation(vector<int> &arr, int stud)
// {
//     int sum = 0, size = arr.size();
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }
//     if (stud > size)
//     {
//         cout << "student more then size of the array = ";
//         return -1;
//     }
//     int s = 1, e = sum, ans = -1;
//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;
//         if (iscorrect(arr, stud, mid))
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int size;
//     int studentNo;
//     cout << "Enter the size of array = ";
//     cin >> size;
//     vector<int> arr(size);
//     for (int i = 0; i < size; i++)
//     {
//         cout << "enter " << i << " element = ";
//         cin >> arr[i];
//     }
//     cout << "Enter the student = ";
//     cin >> studentNo;
//     int result = bookallocation(arr, studentNo);
//     cout << result;
// }

