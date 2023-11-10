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
    int t;cin>>t;
    while(t--){
	int x,y,n; cin>>x>>y>>n;
     vector<int>v;
        int count=1;
        for(int i=0; i<n; i++){
            v.push_back(y);
            y-=count;
            count++;
        }
        if(v[v.size()-1]<x)
        cout<<-1<<endl;
        else{
            cout<<x<<" ";
            for(int i=v.size()-2; i>=0; i--)
            cout<<v[i]<<" \n"[i==0];
}

}
}