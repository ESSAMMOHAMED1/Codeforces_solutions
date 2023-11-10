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

void DO(){
ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (k % 2 == 0) {
        sort(s.begin(), s.end());
        cout << s << endl ;
        return;
    }
    vector<vector<ll>> cnt(26, vector<ll>(2, 0));
    for (ll i = 0; i < n; i++) {
        cnt[s[i] - 'a'][i % 2]++;
    }
    string ans = "";
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < 26; j++) {
            if (cnt[j][i % 2] > 0) {
                cnt[j][i % 2]--;
                ans += (j + 'a');
                break;
            }
        }
    }
    cout << ans << endl;
}




///I'M IN -----------------------------------------------------------------------++=>;
int main()
{
    GO
    ///-------------------------------------------------------------------------------++=>;
    ll t;cin>>t;
    while(t--){
	DO();
}
}