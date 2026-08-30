#include <iostream>
using namespace std;
bool primenum(int num)
{
    if (num <= 1)
    {
        return false;
    }
    if (num == 2)
    {
        return true;
    }
    if (num % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
        {
            return false;
            // break;
        }
    }
    return true;
}
int main()
{
    int size;
    cout << "enter the size  -> ";
    cin >> size;
    cout << "prime number are 1 to " << size << " -> ";
    for (int i = 2; i <= size; i++)
    {
        if (primenum(i))
        {
            cout << " " << i;
        }
    }
}




// #include <iostream>
// using namespace std;
// int main()
// {
//     int size;
//     cout << "enter the number -> ";
//     cin >> size;
//     cout << "prime number are -> " << endl;
//     for (int i = 2; i < size; i++)
//     {
//         // int sum = 2*i,sum2 = 3*i;
//         if (i % 2 == 0)
//         {
//         }
//         else if (i % 3 == 0)
//         {
//         }
//         else
//         {
//             cout << " " << i;
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int primenum(int num)
// {
//     bool check;
//     for (int i = 2; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             check = false;
//             break;
//         }
//     }
//      check = true;
// }
// int main()
// {
//     int prime = 0, size, notprime = 0;
//     cout << "enter the size  -> ";
//     cin >> size;
//     cout << "prime number are 1 -> ";
//     for (int i = 1; i <= size; i++)
//     {
//         if (primenum(i))
//         {
//             cout << " " << i;
//         }
//     }
// }

