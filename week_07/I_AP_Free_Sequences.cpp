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
        // bool is_AP_free = true;
        // int count = 0;
        // int val = v[1] - v[0];
        // map<int, int> freq;
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         if( i == j ) continue;
        //         int val = v[j] - v[i];
        //         freq[val]++;
        //     }
        // }
        // for (auto pair : freq)
        // {
        //     if (pair.second >= 2)
        //     {
        //         is_AP_free = false;
        //         break;
        //     }
        // }
        if (is_AP_free)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
