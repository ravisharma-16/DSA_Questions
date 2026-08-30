// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     priority_queue<int, vector<int>, greater<int>> minHeap;

//     minHeap.push(10);
//     minHeap.push(5);
//     minHeap.push(15);
//     minHeap.push(1);

//     cout << "Min-Heap Top: " << minHeap.top() << endl; // Output: 1

//     while (!minHeap.empty()) {
//         cout << minHeap.top() << " ";
//         minHeap.pop();
//     }
//     return 0;
// }


// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     priority_queue<int, vector<int>, greater<int>> minHeap;
//     vector<int> nums = {7, 10, 4, 3, 20, 15};
//     int k = 3;

//     for (int num : nums) {
//         minHeap.push(num);
//         if (minHeap.size() > k) {
//             minHeap.pop(); // Remove smallest to keep only `k` largest elements
//         }
//     }

//     cout << "The " << k << "rd largest element is: " << minHeap.top() << endl;
//     return 0;
// }

               //             decending order

// #include<iostream>
// #include<queue>
// using namespace std;
// int main()
// {
    // priority_queue<int>minHeap;
    // minHeap.push(12);
    // minHeap.push(22);
    // minHeap.push(1);
    // minHeap.push(2);
    // while(!minHeap.empty())
    // {
    //     cout <<minHeap.top()<<" ";
    //     minHeap.pop();
    // }
//     return 0;
// }


  //             ascending order

// #include<iostream>
// #include<queue>
// using namespace std;
// int main()
// {
//     priority_queue<int ,vector<int>,greater<int>>maxHeap;
//     maxHeap.push(12);
//     maxHeap.push(22);
//     maxHeap.push(1);
//     maxHeap.push(2);
//     while(!maxHeap.empty())
//     {
//         cout <<maxHeap.top()<<" ";
//         maxHeap.pop();
//     }
//     return 0;
// }