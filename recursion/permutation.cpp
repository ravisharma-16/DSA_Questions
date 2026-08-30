#include <iostream>
#include <string>
using namespace std;

void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

void permute(string str, int start, int end) {
    if (start == end) {
        cout << str << endl;
    } else {
        for (int i = start; i <= end; i++) {
            
            swap(str[start], str[i]);
           
            permute(str, start + 1, end);
        
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    cout << "All permutations are:"<<endl;
    permute(str, 0, str.size() - 1);
    
    return 0;
}
