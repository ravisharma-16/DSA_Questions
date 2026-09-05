// class Solution {
//     bool PrimeNum(int val)
//     {
//     if(val <= 1)
//     {
//         return false;
//     }
//     if(val == 2)
//     {
//         return true;
//     }
//     if(val %2 == 0)
//     {
//         return false;
//     }
//         for(int i = 3; i*i <= val; i+=2)
//         {
//             if(val % i == 0)
//             {
//                 return false;
//             }
//         }
//         return true;
//     }
// public:
//     bool completePrime(int num) {
//         if(num < 0)
//         {
//             return false;
//         }
//         bool check = PrimeNum(num);
//         while(num > 0)
//         {
//             int val = num % 10;
            
//             if(!PrimeNum(val))
//             {
//                 return false;
//             }
//             num /= 10;
//         }
//         return true && check;
//     }
// };