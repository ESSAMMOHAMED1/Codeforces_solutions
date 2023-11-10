#include <bits/stdc++.h>
#define LOL INT_MAX
#define lol INT_MIN
#define push push_back
#define pop pop_back()
#define ll long long
#define fast_as_fuck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
using namespace std;
int fun(int a)
{
    cout<<a<<endl;;
    int q;
    for(int i = 0 ; i<q; i++)
    {
        int ans = 11;
    }
}
///I'M IN -----------------------------------------------------------------------++=>;
int main()
{
    fast_as_fuck
///-------------------------------------------------------------------------------++=>;
    /// max(0,x);
    /// test 3
    ///3 1 5 4
    ///2 0 4 3 --> 1
    ///1 0 3 2 --> 2
    ///0 0 2 1 --> 3
    ///0 0 1 0 --> 4
    ///0 0 0 0 --> 5

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int ans=0;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                ans = max(ans, v[i]);
            }
        }
        cout<<ans<<endl;
    }
}
