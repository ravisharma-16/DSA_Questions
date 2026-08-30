// class Solution {
//     public:
//         long long maximumTripletValue(vector<int>&arr) {
//             long maxi = 0;
//             for(int i = 0; i < arr.size(); i++)
//             {
//                 for(int j = i + 1; j < arr.size(); j++)
//                 {
//                     for(int k = j + 1; k < arr.size(); k++)
//                     {
//                         maxi = max(maxi,(long(arr[i] - arr[j]) * arr[k]));
//                     }
//                 }
//             }
//              return maxi < 0 ? 0 : maxi;
//         }
//     };




// class Solution {
//     public:
//         long long maximumTripletValue(vector<int>&arr) {
//             long maxi = 0;
//             for(int i = 0; i < arr.size(); i++)
//             {
//                 for(int k = arr.size() - 1;k > i; k--)
//                 {
//                   int j = i + 1;
//                   while(j < k)
//                     {
//                         maxi = max(maxi,(long(arr[i] - arr[j]) * arr[k]));
//                         j++;
//                     }
//                 }
//             }
//              return maxi < 0 ? 0 : maxi;
//         }
//     };
    
    


    // class Solution {
//     public:
//         long long maximumTripletValue(vector<int>&arr) {
//             long long ans = 0;
//             int diff = 0,maxi = 0;
//             for(int i = 0; i < arr.size(); i++)
//             {
//                maxi = max(maxi,arr[i]);
//                if(i >= 2)
//                {
//                 ans = max(ans,(long long)diff * arr[i]);
//                }
//                if(i >= 1)
//                {
//                 diff = max(diff,maxi - arr[i]);
//                }
//             }
//              return ans;
//         }
//     };