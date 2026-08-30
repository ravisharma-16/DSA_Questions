// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, num2 = 0;
//     cout << "enter the number = ";
//     cin >> num;
//     while (num > 0)
//     {
//         int dig = num % 10;
//         num = num / 10;
//         num2 = (num2 * 10) + dig;
//     }
//     cout << "reverse number are = " << num2;
// }

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    int freq[26] = {0}; // Initialize frequency array for A-Z (26 letters)

    // Loop through the string
    for (char c : s) {
        if (c >= 'A' && c <= 'Z') {  // Count only A-Z
            freq[c - 'A']++;  // Convert char to index (e.g., 'A' - 'A' = 0)
        }
    }

    // Display frequencies
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {  // Show only letters that appeared
            cout << char('A' + i) << ": " << freq[i] << endl;
        }
    }

    return 0;
}
