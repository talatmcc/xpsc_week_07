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
        string s;
        cin >> s;
        unordered_map<char, int> mp;
        for (char c : s)
        {
            mp[c]++;
        }
        int odd_count = 0;
        int ans = INT_MIN;
        for (auto pair : mp)
        {
            ans = max(ans,pair.second);
            if (pair.second % 2 == 1)
            {
                odd_count++;
            }
        }
        if (((n % 2 == 0) && n >= 1) || odd_count >1)
        {
            cout << 0 << endl;
        }
        else{
            cout<<"5"<<endl;
        }
    }
    return 0;
}