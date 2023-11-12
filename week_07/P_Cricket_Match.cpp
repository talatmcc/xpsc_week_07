#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if (n <= m * 36)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}