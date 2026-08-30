#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int t;
    cin >> t;
    int arr[10] = {3, 1, 2, 1, 0, 1, 0, 0, 0, 0};
    
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        
        int freq[10] = {0};
        int result = 0;
        
        for (int i = 0; i < n; ++i)
        {
            freq[a[i]]++;
            bool complete = true;
            for (int d = 0; d < 10; ++d)
            {
                if (freq[d] < arr[d])
                {
                    complete = false;
                    break;
                }
            }
            
            if (complete)
            {
                result = i + 1;
                break;
            }
        }
        
        cout << result << endl;
    }
}

int main() {
    solve();
    return 0;
}

//2 0 1 2 3 2 5 0 0 1