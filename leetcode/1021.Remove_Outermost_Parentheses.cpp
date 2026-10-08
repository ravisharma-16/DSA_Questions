// class Solution {
// public:
//     string removeOuterParentheses(string s) {
//      string ans = "";
//      int count = 0;
//      for(char ch : s)
//      {
//         if(ch == '(')
//         {
//             if(count > 0)
//             {
//                 ans += ch;
//             }
//             count++;
//         }
//         else
//         {
//             count--;
//             if(count > 0)
//             {
//                 ans += ch;
//             }
//         }
//      }
//      return ans;
//     }
// };



#include <iostream>
#include <string>
#include <stack>
using namespace std;

string removeOuterParentheses(string s) {
    string result = "";
    stack<char> st;

    for (char c : s) {
        if (c == '(') {
            if (!st.empty()) {
                result += c;
            }
            st.push(c);
        } else {
            st.pop();
            if (!st.empty()) {
                result += c;
            }
        }
    }

    return result;
}

int main() {
    cout << removeOuterParentheses("(()())(())") << endl;
    return 0;
}