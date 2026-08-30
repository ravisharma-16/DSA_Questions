// #include<iostream>
// #include<queue>
// using namespace std;

// class MaxHeap {
// public:
//     int *arr;
//     int size;
//     int capacity;
    
//     MaxHeap() {
//         capacity = 100;
//         arr = new int[capacity];
//         size = 0;
//         arr[0] = -1; // Not used (1-based indexing)
//     }
    
//     ~MaxHeap() {
//         delete[] arr;
//     }
    
//     void insert(int data) {
//         if(size >= capacity - 1) {
//             cout << "Heap is full" << endl;
//             return;
//         }
        
//         size += 1;
//         int index = size;
//         arr[index] = data;
        
//         // Bubble up
//         while(index > 1) {
//             int parent = index / 2;
//             if(arr[parent] < arr[index]) {
//                 swap(arr[parent], arr[index]);
//                 index = parent;
//             } else {
//                 break;
//             }
//         }
//     }
    
//     void deleteRoot() {
//         if(size == 0) {
//             cout << "Heap is empty" << endl;
//             return;
//         }
        
//         // Move last element to root
//         arr[1] = arr[size];
//         size -= 1;
        
//         // Heapify down
//         int index = 1;
//         while(index <= size) {
//             int left = 2 * index;
//             int right = 2 * index + 1;
//             int largest = index;
            
//             if(left <= size && arr[left] > arr[largest]) {
//                 largest = left;
//             }
//             if(right <= size && arr[right] > arr[largest]) {
//                 largest = right;
//             }
            
//             if(largest != index) {
//                 swap(arr[index], arr[largest]);
//                 index = largest;
//             } else {
//                 break;
//             }
//         }
//     }
    
//     void print() {
//         for(int i = 1; i <= size; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// // Function to find k-th smallest element using a max-heap
// int findKthSmallest(int arr[], int n, int k) {
//     MaxHeap maxHeap;
    
//     // Insert first k elements
//     for(int i = 0; i < k; i++) {
//         maxHeap.insert(arr[i]);
//     }
    
//     // For remaining elements, if smaller than root, replace root
//     for(int i = k; i < n; i++) {
//         if(arr[i] < maxHeap.arr[1]) {
//             maxHeap.arr[1] = arr[i];
//             // Heapify down
//             int index = 1;
//             while(index <= maxHeap.size) {
//                 int left = 2 * index;
//                 int right = 2 * index + 1;
//                 int largest = index;
                
//                 if(left <= maxHeap.size && maxHeap.arr[left] > maxHeap.arr[largest]) {
//                     largest = left;
//                 }
//                 if(right <= maxHeap.size && maxHeap.arr[right] > maxHeap.arr[largest]) {
//                     largest = right;
//                 }
                
//                 if(largest != index) {
//                     swap(maxHeap.arr[index], maxHeap.arr[largest]);
//                     index = largest;
//                 } else {
//                     break;
//                 }
//             }
//         }
//     }
    
//     return maxHeap.arr[1];
// }

// int main() {
//     MaxHeap h;
//     h.insert(7);
//     h.insert(10);
//     h.insert(4);
//     h.insert(3);
//     h.insert(20);
//     h.insert(15);
    
//     cout << "Max Heap: ";
//     h.print();
    
//     int k = 3;
//     int arr[] = {7, 10, 4, 3, 20, 15};
//     int n = sizeof(arr)/sizeof(arr[0]);
    
//     int kthSmallest = findKthSmallest(arr, n, k);
//     cout << "The " << k << "-th smallest element is: " << kthSmallest << endl;
    
//     return 0;
// }

// #include <iostream>
// #include<queue>
// using namespace std;
// int main()
// {
//     int arr[] = {7, 10, 4, 3, 20, 15};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 3;
//     priority_queue<int> pq;
//     for(int i = 0; i < k; i++)
//     {
//         pq.push(arr[i]);
//     }

//     for(int i = k; i < n; i++)
//     {
//         if(arr[i] < pq.top())
//         {
//             pq.pop();
//             pq.push(arr[i]);
//         }
//     }
//     cout << "The " << k << "-th smallest element is: " << pq.top() << endl;
//     return 0;

// }

// #include <iostream>
// #include<queue>
// using namespace std;
// int main()
// {
//     int arr[] = {7, 10, 4, 3, 20, 15};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 3;
//     priority_queue<int,vector<int>,greater<int>> pq;
//     for(int i = 0; i < k; i++)
//     {
//         pq.push(arr[i]);
//     }

//     for(int i = k; i < n; i++)
//     {
//         if(arr[i] > pq.top())
//         {
//             pq.pop();
//             pq.push(arr[i]);
//         }
//     }
//     cout << "The " << k << "-th gretare element is: " << pq.top() << endl;
//     return 0;

// }


// K-th Largest Sum Contiguous Subarray

// User function Template for C++

// class Solution {
//   public:
//     int kthLargest(vector<int> &arr, int k) {
//         // code here
//         priority_queue<int,vector<int>,greater<int>>mini;
//         for(int i = 0; i < arr.size(); i++)
//         {
//             int sum = 0;
//             for(int j = i; j < arr.size(); j++)
//             {
//                 sum += arr[j];
//                 if(mini.size() < k)
//                 {
//                     mini.push(sum);
//                 }
//                 else
//                 {
//                     if(sum > mini.top())
//                     {
//                         mini.pop();
//                         mini.push(sum);
//                     }
//                 }
//             }
//         }
//         return mini.top();
//     }
// };