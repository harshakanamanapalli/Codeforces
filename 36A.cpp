/* 
 * This particular problem requires the input to be taken 
 * from "input.txt" and the output to be written to 
 * output.txt.
 */

#include <bits/stdc++.h>
using namespace std;

#define CASET int t;cin>>t;for(int _t=1;_t<=t;++_t)
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define foreach(i,a,b) for(typeof(a) i = (a), i<(b); ++i)
#define ALL(v) v.begin(),v.end()


int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> v;
    FOR(i,0,n)if(s[i]=='1')v.push_back(i);
    int ans = 0;
    FOR(i,1,v.size()){
    	if(v[i] != v[0] + (i)*(v[1]-v[0])){ans=1;break;}
    }
    if(ans==1)cout<<"NO";
    else cout<<"YES";
return 0;
}
