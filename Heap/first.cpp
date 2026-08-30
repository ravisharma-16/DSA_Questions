#include <iostream>
#include <queue>
using namespace std;
//  class heap
//  {
//     public:
//     int arr[100];
//     int size;
//     heap()
//     {
//         size = 0;
//         arr[0] = -1;
//     }
//     void insert(int data)
//     {
//         size += 1;
//         int index = size;
//         arr[index] = data;
//         while(index > 1)
//         {
//             int parent = index / 2;
//             if(arr[parent] < arr[index])
//             {
//                 int temp = arr[parent];
//                 arr[parent] = arr[index];
//                 arr[index] = temp;
//                 index = parent;
//             }
//             else
//             {
//                 return;
//             }
//         }
//     }

//     void print()
//     {
//         for(int i = 1; i <= size; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
//  };

class heap
{
public:
    int *arr;
    int size;
    heap()
    {
        arr = new int[100];
        size = 0;
        arr[0] = -1;
    }
    void insert(int data)
    {
        size += 1;
        int index = size;
        arr[index] = data;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void deleteheapnode()
    {
        if (size == 0)
        {
            cout << "Heap is empty" << endl;
            return;
        }
        arr[1] = arr[size];
        size -= 1;
        int index = 1;
        while (index < size)
        {
            int left = 2 * index; // arr are starting from index 1 but starting from 0 in array 2 * index + 1
            int right = 2 * index + 1;

            if (left < size && arr[index] < arr[left])
            {
                swap(arr[index], arr[left]);
                index = left;
            }
            else if (right < size && arr[index] < arr[right])
            {
                swap(arr[index], arr[right]);
                index = right;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// check the heap are correct or not
void checkheap(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right <= n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        checkheap(arr, n, largest);
    }

    // for(int i = 1;i <=n; i++)
    //     {
    //     int largest = i;
    //     int left = 2 * i;
    //     int right = 2 * i + 1;
    //     if(left <= n && arr[left] > arr[largest])
    //     {
    //         largest = left;
    //     }
    //     if(right <= n && arr[right] > arr[largest])
    //     {
    //         largest = right;
    //     }
    //     if(largest != i)
    //     {
    //         swap(arr[i], arr[largest]);
    //     }
    // }
}

// heap sort
void heapsort(int arr[], int n)
{
    // step 1 : swap the first element with the last element
    for (int i = n; i > 0; i--)
    {
        swap(arr[1], arr[i]);
        // step 2 : check the heap
        checkheap(arr, i - 1, 1);
    }
}

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    cout << "Heap after insertion: ";
    h.print();
    h.deleteheapnode();
    cout << "After deleting the root node: ";
    h.print();
    int arr2[] = {-1, 54, 55, 53, 52, 50};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        checkheap(arr2, n, i);
    }
    cout << "Heap after checking: ";
    for (int i = 1; i <= n; i++)
    {
        cout << arr2[i] << " ";
    }
    heapsort(arr2, n);
    cout << "\nHeap after sorting: ";
    for (int i = 1; i <= n; i++)
    {
        cout << arr2[i] << " ";
    }

    // using priority queue
    //  max heap
    // priority_queue<int> pq;
    // pq.push(50);
    // pq.push(55);
    // pq.push(53);
    // pq.push(52);
    // pq.push(54);
    // cout << "\nPriority Queue: ";
    // while (!pq.empty())
    // {
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }
    // // min heap
    // priority_queue<int, vector<int>, greater<int>> minpq;
    // minpq.push(50);
    // minpq.push(55);
    // minpq.push(53);
    // minpq.push(52);
    // minpq.push(54);
    // cout << "\nMin Priority Queue: ";
    // while (!minpq.empty())
    // {
    //     cout << minpq.top() << " ";
    //     minpq.pop();
    // }
    return 0;
}