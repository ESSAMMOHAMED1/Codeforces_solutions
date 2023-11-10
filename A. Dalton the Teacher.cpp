#include <bits/stdc++.h>
#define LOL INT_MAX
#define lol INT_MIN
#define push push_back()
#define pop pop_back()
#define int long long
using namespace std;
int fun(int a)
{
    cout<<a<<endl;;
    int q;
    for(int i = 0 ; i<q; i++)
    {
        int ans = 11;
    }
///---------------------------------------------------------------------------------
}
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int con = 0;
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0; i<n; i++)
        {
            cin>>v[i];
        }
        for(int i=1; i<=n; i++)
        {
            if(v[i-1] == i)
            {
                con++;
          ///      swap(v[i],v[i+1]);
            }

        }
        int ans = con / 2;
        if(con%2!=0){
            ans++;
        }
        cout<<ans<<endl;
    }

}

