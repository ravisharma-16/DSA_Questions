#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>()); //  6 5 4 3 3 2
        
        int teams = 0;
        int current = 0;
        
        for (int i = 0; i < n; ++i)
        {
            current++;
            if (a[i] * current >= x)   
            {
                teams++;
                current = 0;
            }
        }
        
        cout << teams << endl;
    }
}

int main() {
    solve();
    return 0;
}

// 6 10
// 6 1 3 6 3 2  || 6 6 3 3 2 1