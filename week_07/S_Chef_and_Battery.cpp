#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = 0;
        while( n!= 50){
            if(n>50){
                n -=3;
                ans++;
            }
            else{
                n+=2;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}