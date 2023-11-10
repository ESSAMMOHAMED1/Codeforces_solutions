///                       وعدتُ من المعارك.. لستُ أدري
///
///         علامَ أضعتُ عُمري في النزالِ

#include <iostream>
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
void DO()
{
    int n,m;
    cin>>n>>m;
    string s,l;
    cin>>s>>l;
    if(n==1)
    {
        yes
        return;
    }
    for(int i =0 ; i<l.size(); i++)
    {

        if((l[i]=='1' && l[i+1]== '0') || (l[l.size()-1]== '0' && l[l.size()-2]=='1'))
        {
            for(int i =0; i<s.size(); i++)
            {
                if(s[i]==s[i+1]&&s[i]=='1')
                {
                    no
                    return;
                }
                else
                {
                    yes
                    return;
                }
            }
        }
    }
    for(int x = 0;x<l.size();x++){

    if(l[x]=='0'&&l[x+1]=='1'){
        if(l[l.size()-1] == '1'&& l[l.size()- 2] == '0')
        {
            for(int x =0; x<s.size(); x++)
            {
                if(s[x]==s[x+1]&&s[x]=='0')
                {
                    no
                    return;
                }
                else
                {
                    yes
                    return;
                }
            }
        }
    }
}
}
bool check(string s) {
    for (int i = 0; i + 1 < s.size(); ++i) {
        if (s[i] == s[i + 1]) return false;
    }
    return true;
}

void v2DO(){
int m,n;
string s,t;
  cin >>n>>m;
    cin >> s >> t;
    if (!check(s) && !check(t)) {
        no
    } else if (check(s)) {
        yes
    } else {
        for (int i = 0; i + 1 < s.size(); i++) {
            if (s[i] == s[i + 1]) {
                if (t[0] == s[i] || t.back() == s[i + 1]) {
                    no
                    return;
                }
            }
        }
        yes
    }

}






int main()
{
    make_it_fast
//=====================================================================================
    int t;
    cin>>t;
    while(t--)
    {
        v2DO();
    }
}

