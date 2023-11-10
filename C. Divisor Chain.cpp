///                       وعدتُ من المعارك.. لستُ أدري
///
///         علامَ أضعتُ عُمري في النزالِ

#include <bits/stdc++.h>
#define LOL INT_MAX
#define lol INT_MIN
#define push push_back
#define pop pop_back()
#define F first
#define S second
#define ll long long
#define GO ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
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
    GO
    ///-------------------------------------------------------------------------------++=>;
    ll t;cin>>t;
    while(t--){
	  ll n,p=1; cin>>n;
    vector<ll>v;

    while (p < n) {
        v.push(p);
        p*=2;
    }
    ll l = v[v.size() - 1];
    ll rem = n - l;
    bool one = false;
    if (rem % 2) {
        one = true;
        rem--;
    }

    for (int i = 31; i >= 0; i--) {
        int ith_bit = rem & (1 << i);
        if (ith_bit) {
            l += pow(2, i);
            v.push(l);
        }
    }

    if (one) {
        v.push(n);
    }
    cout<<v.size()<<endl;
    for(int i=v.size()-1; i>=0; i--) cout<<v[i]<<" ";
    cout<<endl;
}
}