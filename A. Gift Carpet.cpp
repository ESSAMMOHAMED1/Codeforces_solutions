///                       وعدتُ من المعارك.. لستُ أدري
///
///         علامَ أضعتُ عُمري في النزالِ

#include <bits/stdc++.h>
#define LOL INT_MAX
#define lol INT_MIN
#define push push_back
#define pop pop_back()
#define ll long long
#define GO ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl

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
     int t;
    cin >> t;
    while (t--)
    {
  string s = "vika";
        int n, m, x = 0, ans = 0;
        cin >> n >> m;
        char a[n][m];
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> a[i][j];
        bool ok = true;
        for (int j = 0; j < m; ++j)
        {
            for (int i = 0; i < n; ++i)
            {
                if (x < 4 && ok && a[i][j] == s[x])
                    ans++, x++, ok = false;
            }
            ok = true;
        }
        ans ==4 ? yes : no
    }



}

