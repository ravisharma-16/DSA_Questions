// #include <iostream>
// #include <random>
// using namespace std;
// int numgen()
// {
//     // random Number generator
//     random_device rand;
//     mt19937 gen(rand());
//     uniform_int_distribution<> dis(1, 10);
//     int random_number = dis(gen);
//     return random_number;
// }
// int checker(int guess, int pick)
// { 
//     for (;;)
//     {

//         if (guess > pick)
//         {
//             cout << " Guess a lower Num" << endl
//                  << "Guess Again : ";
//             cin >> guess;
//         }
//         else if (guess < pick)
//         {
//             cout << "Guess a higher Num" << endl
//                  << "Guess Again : ";
//             cin >> guess;
//         }
//         else if (pick == guess)
//         {
//             cout << "You win";
//             break;
//         }
//     }

//     return 0;
// }
// int main()
// {
//     int guess = 0;
//     int pick = 0;
//     cout << "Enter Your Guess 1-10 : ";
//     cin >> guess;

//     checker(guess, numgen());
// }



