#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int c = b * 2;
        if (c >= a)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}a