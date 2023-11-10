#include <bits/stdc++.h>
#define LOL INT_MAX
#define lol INT_MIN
using namespace std;
int fun_fun_lol(int x,int y){
return x+y;
}
int main(){
long long t;cin>>t;
while(t--){
    long long a,b; cin>>a>>b;
    if(a%b==0){
        cout<< 2 <<endl<<(a - 1)<< ' ' << 1 <<endl;
    }else{
    cout<< 1 << endl << a <<endl;
    }
}
return 0;
}