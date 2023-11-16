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
#define make_it_fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
using namespace std;

///I'M IN -----------------------------------------------------------------------++=>;

void DO(){

int n,k;cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        int diff=n-k;
        if(diff==1){
            yes
        }
        else if(diff<1){
            no
        }
        else{
            for(auto x:s){
                mp[x]++;
            }
            int cnt=0;
            for(auto x:mp){
                int temp = x.second%2;
                if(temp==1) cnt++;
            }
             if(cnt<=k+1){
                yes
            }
            else{
                no
            }

        }
        cout<<endl;
    }
int main()
{
    make_it_fast
//=====================================================================================
    int t;
    cin>>t;
    while(t--)
    {
        DO();
    }
}

