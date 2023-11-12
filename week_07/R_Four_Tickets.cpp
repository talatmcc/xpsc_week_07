#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        if ((a * 4) <= 1000)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
    return 0;
}
