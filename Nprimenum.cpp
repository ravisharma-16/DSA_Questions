// #include <iostream>
// using namespace std;
// int primenum(int num)
// {
//     bool check;
//     for (int i = 2; i <= num / 2; i++)
//     {
//         if (num % i == 0)
//         {
//             check = false;
//             break;
//         }
//     }
// }
// int main()
// {
//     int prime = 0, size, notprime = 0;
//     cout << "enter the size  -> ";
//     cin >> size;
//     cout << "prime number are -> ";
//     for (int i = 1; i <= size; i++)
//     {
//         if (primenum(i))
//         {
//             cout << " " << i;
//             prime++;
//         }
//         else
//         {
//             notprime++;
//         }
//     }
//     cout << endl;
//     cout << "Total prime number are 1 to "<<size<< " -> " << prime << endl;
//     cout << "Total not prime number are 1 to "<<size<<" -> " << notprime;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int size, check;
//     cout << "enter the size  -> ";
//     cin >> size;
//     cout << "prime number are = ";
//     for (int i = 1; i < size; i++)
//     {
//         check = 0;
//         for (int j = 2; j <= size ; j++)
//         {
//             if (i % j == 0)
//             {
//                 check++;
//             }
//         }
//         if (check == 1)
//         {
//             cout << i << " ";
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int size;
//     cout << "Enter the size -> ";
//     cin >> size;
//     cout << "Prime numbers are = ";

//     for (int i = 2; i < size; i++) {
//         bool isPrime = true;  // Assume `i` is prime
//         for (int j = 2; j <= i / 2; j++) {
//             if (i % j == 0) { // `i` is divisible by `j`
//                 isPrime = false;
//                 break; // No need to check further
//             }
//         }
//         if (isPrime) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int size,n = 2;
//     cout << "Enter the size -> ";
//     cin >> size;
//     cout << "Prime n numbers are = ";

//     for (int i = 1; i <= size; )
//     {
//         bool isPrime = true;
//         for (int j = 2; j <= n / 2; j++)
//         {
//             if (n % j == 0)
//             {
//                 isPrime = false;
//                 break;
//             }
//         }
//         if (isPrime)
//         {
//             cout << n << " ";
//             i++;
//         }
//         n++;
//     }
//     cout << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int size, n = 2;
    cout << "Enter the size -> ";
    cin >> size;
    cout << "First " << size << " prime numbers are: ";

    for (int count = 0; count < size;)
    {
        bool isPrime = true;
        int j = 2;
        while (j <= n / 2)
        {
            if (n % j == 0)
            {
                isPrime = false;
                break;
            }
            j++;
        }
        if (isPrime)
        {
            cout << n << " ";
            count++;
        }
        n++;
    }
    cout << endl;
    return 0;
}
