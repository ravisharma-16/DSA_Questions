//push

// next = 1 2 3 4 5 6 7 -1

// top = -1 -1 -1

// 1. index=freespot --> index=0

// 2. freespot=next[index] --> freespot = 1

// 3. arr[index] = x --> arr[0]=x

// 4. next[index]=top(m-1) --> next[0]=-1

// 5. top[m-1]=index --> top[0]=-1

// pop

// 1 2 3 | 4 5 6 | 7 8 9 |

// top 2 | 5 | 8

// -1 -1 -1 | -1 -1 -1 | -1 -1 -1 

// 1. index = top[m-1] index=5

// 2. top[m-1] = next[index] = -1
// top[m-1] = -1

// 3. next[index] = freespot
// next[index] = -1

// 4. freespot = 5


#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Nstack {
    int *arr, *top, *next;
    int n, stackssize, free;

public:
    Nstack(int howmanystack, int size) {
        stackssize = howmanystack, n = size;
        arr = new int[n];
        top = new int[stackssize];
        next = new int[n];

        for (int i = 0; i < stackssize; i++)
            top[i] = -1;

        free = 0;
        for (int i = 0; i < n - 1; i++)
            next[i] = i + 1;
        next[n - 1] = -1;
    }

    ~Nstack() {
        delete[] arr;
        delete[] top;
        delete[] next;
    }

    bool push(int stacknum, int value) {
        if (free == -1)
            return false;

        int index = free;
        free = next[index];
        next[index] = top[stacknum - 1];
        top[stacknum - 1] = index;
        arr[index] = value;
        return true;
    }

    bool pop(int stacknum) {
        if (top[stacknum - 1] == -1)
            return false;

        int index = top[stacknum - 1];
        top[stacknum - 1] = next[index];
        next[index] = free;
        free = index;
        return true;
    }

    void displayStack(int stacknum) {
        int index = top[stacknum - 1];
        cout << "Stack " << stacknum << ": ";
        while (index != -1) {
            cout << arr[index] << " ";
            index = next[index];
        }
        cout << endl;
    }
};

int main() {
    Nstack stack(3, 9);

    stack.push(1, 1);
    stack.push(1, 2);
    stack.push(1, 3);

    stack.push(2, 4);
    stack.push(2, 5);
    stack.push(2, 6);

    stack.push(3, 7);
    stack.push(3, 8);
    stack.push(3, 9);

    cout << "Before popping:\n";
    stack.displayStack(1);
    stack.displayStack(2);
    stack.displayStack(3);

    stack.pop(1);
    stack.pop(2);
    stack.pop(3);

    cout << "\nAfter popping:\n";
    stack.displayStack(1);
    stack.displayStack(2);
    stack.displayStack(3);

    return 0;
}
