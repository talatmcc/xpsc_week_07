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
        sort(v.begin(), v.end(),greater <int>());
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            // cout<<v[i]<<endl;
            if(v[i] != v[i+1]){
                cout<<v[i] + v[i+1]<<endl;
                break;
            }
        }
        // cout << ans << endl;
    }
    return 0;
}