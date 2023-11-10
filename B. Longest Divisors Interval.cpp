#include <bits/stdc++.h>
#define LOL INT_MAX
#define lol INT_MIN
#define push push_back()
#define pop pop_back()
#define le 10000007
#define ll long long int
using namespace std;
int n[le >> 6];
vector<int> v;
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
int fun(int a)
{
    cout<<a<<endl;;
    int q;
    for(int i = 0 ; i<q; i++)
    {
        int ans = 11;
    }
}
int jus(){
   int con;
int ans = con / 2;
        if(con%2!=0){
            ans++;
        }
        cout<<ans<<endl;
    }

void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v.push_back(2);
    for(int i = 3; i < le; i += 2) if(!ck(i)) v.push_back(i);
}
bool fnc(ll a){
    int sum = 0;
    for(int i = 0; i < v.size() && v[i] * v[i] <= a; i++){
        if(a % v[i] == 0){
            int p = 0;
            while(a % v[i] == 0){
                a /= v[i];
                p++;
            }
            sum += p;
        }
    }
    if(a != 1) sum++;
    return (sum == 20);
}

int main() {
	ll t;	cin >> t;
	while(t--){
		ll n;	cin >> n;
		if(fnc(n)){
			cout << 1 << "\n";
		} else{
			ll ans = 1;
			for(ll i=2; i<=n; i++){
				if(n%i != 0) break;
				ans++;
			}
			cout << ans << "\n";
		}
	}
}
