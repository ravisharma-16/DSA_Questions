// class MinStack {
//     stack<pair<int,int>>st;
// public:
//     MinStack() {}

//     void push(int value) {
//         if (st.empty()) {
//             st.push(make_pair(value,value));
//         } else 
//         {
//             st.push(make_pair(value,min(st.top().second,value)));
//         }
//     }

//     void pop() { 
//         if(st.empty())
//         {
//             return;
//         }
//             st.pop();
//         }

//     int top() {
//         if (st.empty()) {
//             return -1;
//         }
//             return st.top().first;
//     }

//     int getMin() { 
//         return st.top().second; 
//         }
// };

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(value);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */




//  class MinStack {
//     stack<int> st;
//     stack<int> min;

// public:
//     MinStack() {}

//     void push(int value) {
//         if (st.empty() && min.empty()) {
//             st.push(value);
//             min.push(value);
//         } else 
//         {
//             if (value < min.top()) {
//                 st.push(value);
//                 min.push(value);
//             } else {
//                 st.push(value);
//                 min.push(min.top());
//             }
//         }
//     }

//     void pop() { 
//         if(st.empty())
//         {
//             return;
//         }
//             st.pop();
//             min.pop();
//         }

//     int top() {
//         if (st.empty()) {
//             return -1;
//         }
//             return st.top();
//     }

//     int getMin() { 
//         return min.top(); 
//         }
// };

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(value);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */



//  #include <stack>

// class MinStack {
//     stack<long long> s;
//     long long min;

// public:
//     MinStack() {
//         min = LLONG_MAX;
//     }

//     void push(long long val) {
//         if (s.empty()) 
//         {
//             s.push(val);
//             min = val;
//         } else {
//             if (val < min)
//             {
//                 s.push(2 * val - min);
//                 min = val;
//             } else
//             {
//                 s.push(val);
//             }
//         }
//     }

//     void pop() {
//         if (s.empty()) 
//         {
//             return;
//         }

//         if (s.top() < min) 
//         {
//             min = 2 * min - s.top();
//         }
//         s.pop();
//     }

//     int top() {
//         if (s.empty()) 
//         {return -1;}  

//         if (s.top() < min) 
//         {
//             return min;
//         } else 
//         {
//             return s.top();
//         }
//     }

//     int getMin() {
//         return min;
//     }
// };


// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(val);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */