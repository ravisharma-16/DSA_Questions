// #include<iostream>
// using namespace std;
// int squareroot(int num)
// {
//     int start = 0,end = num-1,ans;
//     int mid = (end+start)/2;
//     while(start < end)
//     {
//         int square = mid*mid;
//         if(square == num)
//         {
//             return mid;
//         }
//        else if(square<num)
//         {
//             ans = mid;
//             start = mid+1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = (end+start)/2;
//     }
//     return ans;
// }
// int main()
// {
//     int num;
//     cout<<"enter the number of find square root = ";
//     cin>>num;
//     cout<<"square root of = "<<squareroot(num);
// }

