
// Standard Queue
// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     queue<int> q;
    
//     // Adding elements
//     q.push(10);
//     q.push(20);
//     q.push(30);
    
//     cout << "Front: " << q.front() << endl;  // 10
//     cout << "Back: " << q.back() << endl;    // 30
//     cout << "Size: " << q.size() << endl;    // 3
    
//     // Removing elements (FIFO)
//     q.pop();  // Removes 10
//     cout << "Front after pop: " << q.front() << endl;  // 20
    
//     return 0;
// }


// Priority Queue
// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     // Max heap (default)
//     priority_queue<int> maxPQ;
//     maxPQ.push(30);
//     maxPQ.push(10);
//     maxPQ.push(50);
//     maxPQ.push(20);
    
//     cout << "Max PQ (largest at top):" << endl;
//     while(!maxPQ.empty()) {
//         cout << maxPQ.top() << " ";  // 50 30 20 10
//         maxPQ.pop();
//     }
//     cout << endl;
    
//     // Min heap
//     priority_queue<int, vector<int>, greater<int>> minPQ;
//     minPQ.push(30);
//     minPQ.push(10);
//     minPQ.push(50);
//     minPQ.push(20);
    
//     cout << "Min PQ (smallest at top):" << endl;
//     while(!minPQ.empty()) {
//         cout << minPQ.top() << " ";  // 10 20 30 50
//         minPQ.pop();
//     }
    
//     return 0;
// }


// Deque (Double Ended Queue)
// #include <iostream>
// #include <deque>
// using namespace std;

// int main() {
//     deque<int> dq;
    
//     // Add at both ends
//     dq.push_back(10);
//     dq.push_front(20);
//     dq.push_back(30);
//     dq.push_front(40);
    
//     // dq: [40, 20, 10, 30]
    
//     cout << "Front: " << dq.front() << endl;  // 40
//     cout << "Back: " << dq.back() << endl;    // 30
    
//     // Remove from both ends
//     dq.pop_front();  // Removes 40
//     dq.pop_back();   // Removes 30
    
//     // dq: [20, 10]
    
//     return 0;
// }



//  Custom Queue Implementation (Circular Queue)
// class CircularQueue {
// private:
//     int *arr;
//     int front, rear, capacity, count;
    
// public:
//     CircularQueue(int size) {
//         arr = new int[size];
//         capacity = size;
//         front = 0;
//         rear = -1;
//         count = 0;
//     }
    
//     bool push(int x) {
//         if(count == capacity) return false;  // Full
        
//         rear = (rear + 1) % capacity;
//         arr[rear] = x;
//         count++;
//         return true;
//     }
    
//     int pop() {
//         if(count == 0) return -1;  // Empty
        
//         int val = arr[front];
//         front = (front + 1) % capacity;
//         count--;
//         return val;
//     }
    
//     int getFront() {
//         if(count == 0) return -1;
//         return arr[front];
//     }
    
//     int getRear() {
//         if(count == 0) return -1;
//         return arr[rear];
//     }
    
//     bool empty() { return count == 0; }
//     bool full() { return count == capacity; }
//     int size() { return count; }
// };


// //            OPERATIONS OF QUEUE

// queue (FIFO)
// queue<int> q;
// q.push(5);          // Add element at back
// q.pop();            // Remove front element
// q.front();          // Access front element
// q.back();           // Access back element
// q.empty();          // Check if empty (bool)
// q.size();           // Get size (int)
// q.emplace(10);      // Construct and add
// q.swap(q2);         // Swap contents


// priority_queue
// priority_queue<int> pq;
// pq.push(5);         // Add element
// pq.pop();           // Remove top element
// pq.top();           // Access top element (largest by default)
// pq.empty();         // Check if empty
// pq.size();          // Get size
// pq.emplace(10);     // Construct and add
// pq.swap(pq2);       // Swap contents


// deque
// deque<int> dq;
// dq.push_back(5);    // Add at end
// dq.push_front(3);   // Add at beginning
// dq.pop_back();      // Remove from end
// dq.pop_front();     // Remove from beginning
// dq.front();         // Access first element
// dq.back();          // Access last element
// dq.empty();         // Check if empty
// dq.size();          // Get size
// dq.at(2);           // Access element at index
// dq[2];              // Access element at index
// dq.insert(it, val); // Insert at position
// dq.erase(it);       // Erase at position
// dq.clear();         // Remove all elements



