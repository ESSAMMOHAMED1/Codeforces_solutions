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
    ll t;
    cin>>t;
    while(t--)
    {
 ll n,a,q;
        cin>>n>>a>>q;

        string s;
        cin>>s;

        ll ans=0;

        ll cn=a;
        for(ll i=0;i<q;i++){

            if(a>=n){
                ans=1;

            }
            if(s[i]=='-'){
                a--;
            }else{
                cn++;
                a++;
            }

            if(a>=n){
                ans=1;
            }
        }


        if(cn>=n && ans==0){
            ans=2;

        }



        if(ans==1){
          yes
        }else if(ans==2){
            cout<<"MAYBE"<<endl;
        }else{
           no
        }





}


}