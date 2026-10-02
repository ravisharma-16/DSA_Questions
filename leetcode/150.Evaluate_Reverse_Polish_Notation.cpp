// class Solution {
// public:
//     int evalRPN(vector<string>& tokens) {
//         stack<int>st;
//         for(int i = 0;i < tokens.size(); i++)
//         {
//             if(tokens[i] == "+")
//             {
//                 int first_val = st.top();
//                 st.pop();
//                 int second_val = st.top();
//                 st.pop();
//                 st.push(first_val + second_val);
//             }
//             else if(tokens[i] == "-")
//             {
//                 int first_val = st.top();
//                 st.pop();
//                 int second_val = st.top();
//                 st.pop();
//                 st.push(second_val - first_val);
//             }
//             else if(tokens[i] == "*")
//             {
//                 int first_val = st.top();
//                 st.pop();
//                 int second_val = st.top();
//                 st.pop();
//                 st.push(second_val * first_val);
//             }
//             else if(tokens[i] == "/")
//             {
//                 int first_val = st.top();
//                 st.pop();
//                 int second_val = st.top();
//                 st.pop();
//                 st.push(second_val / first_val);
//             }
//             else
//             {
//                 st.push(stoi(tokens[i]));
//             }
//         }
//         return st.top();
//     }
// };





// class Solution {
//     int add(int a, int b)
//     { 
//     return a + b; 
//     }
//     int sub(int a, int b)
//     {
//         return a - b; 
//     }
//     int mul(int a, int b)
//     {
//         return a * b;
//     }
//     int div(int a, int b)
//     {
//         return a / b;
//     }

// public:
//     int evalRPN(vector<string>& tokens)
//     {
//         stack<int> s;
//         for (int i = 0; i < tokens.size(); i++)
//         {
//             if (tokens[i] == "+")
//             {
//                 int temp = s.top();
//                 s.pop();
//                 int temp2 = s.top();
//                 s.pop();
//                 s.push(add(temp2,temp));
//             }
//             else if (tokens[i] == "-")
//             {
//                 int temp = s.top();
//                 s.pop();
//                 int temp2 = s.top();
//                 s.pop();
//                 s.push(sub(temp2,temp));
//             }
//             else if (tokens[i] == "*")
//             {
//                 int temp = s.top();
//                 s.pop();
//                 int temp2 = s.top();
//                 s.pop();
//                 s.push(mul(temp2,temp));
//             }
//             else if (tokens[i] == "/")
//             {
//                 int temp = s.top();
//                 s.pop();
//                 int temp2 = s.top();
//                 s.pop();
//                 s.push(div(temp2,temp));
//             }
//             else
//             {
//                 s.push(stoi(tokens[i]));
//             }
//         }
//     return s.top();
//     }
// };