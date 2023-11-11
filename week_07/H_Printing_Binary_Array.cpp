#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        // if (n == 1)
        // {
        //     if (v[0] == 0)
        //     {
        //         cout << 1 << endl;
        //     }
        //     else
        //     {
        //         cout << 0 << endl;
        //     }
        // }
        // else
        // {
        //     int a = v[0];
        //     int b = v[1];
        //     v[0] = b;
        //     v[1] = a;

        //     for (int i = 0; i < n; i++)
        //     {
        //         cout << v[i] << " ";
        //     }
        //     cout << endl;
        // }
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                v[i] = 1;
            }
            else
            {
                v[i] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}