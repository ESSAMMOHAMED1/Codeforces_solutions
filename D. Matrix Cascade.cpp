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
        int n;
        cin >> n;

        vector<vector<char>> a(n, vector<char>(n));
        for (int i = 0; i < n; i++)
        {
            string st;
            cin >> st;
            for (int j = 0; j < n; j++)
            {
                a[i][j] = st[j];
            }
        }

        int ans = 0;
        vector<vector<int>> arr(n + 1, vector<int>(n + 1, 0));
        vector<vector<int>> mark(n + 1, vector<int>(n + 1, 0));
        vector<vector<int>> neg(n + 1, vector<int>(n + 1, 0));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mark[i][j] != 0)
                {
                    arr[i][j] += mark[i][j];
                    int st = max(j - 1, 0);
                    int en = min(n, j + 1);
                    mark[i + 1][st] += mark[i][j];
                }
                if (neg[i][j] != 0)
                {
                    arr[i][j] -= neg[i][j];
                    int st = max(j - 1, 0);
                    int en = min(n, j + 1);
                    neg[i + 1][en] += neg[i][j];
                }
            }
            for (int j = 1; j < n; j++)
            {
                arr[i][j] += arr[i][j - 1];
            }
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] % 2 == 1)
                {
                    if (a[i][j] == '0')
                    {
                        a[i][j] = '1';
                    }
                    else
                    {
                        a[i][j] = '0';
                    }
                }
            }
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == '1')
                {
                    ans += 1;
                    int st = max(j - 1, 0);
                    int en = min(n, j + 1 + 1);
                    mark[i + 1][st] += 1;
                    neg[i + 1][en] += 1;
                }
            }
        }
        cout << ans << "\n";
    }

}