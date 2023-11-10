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
void DO(){
string s;cin>>s;

string b;cin>>b;
int n = s.size();
if(s==b){
    yes
    return;
}
if(n==3){
    no
    return;
}
vector<int>v;
for(int i=0;i<n;i++){
    if(s[i]=='1'||b[i]=='1'){
        v.push(i);

    }

}
for(auto x:v){
        if(s[x]=='1'&&b[x]=='1'){
            if(s[x-1]=='0'&&b[x-1]=='0'){
                yes
                return;
            }
        }
}
no
}




int main()
{
    GO
///-------------------------------------------------------------------------------++=>;
    ll t;
    cin>>t;
    while(t--)
    {
DO();
    }

}
 