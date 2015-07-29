#include <bits/stdc++.h>
using namespace std;

#define CASET int t;cin>>t;for(int _t=1;_t<=t;++_t)
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define foreach(i,a,b) for(typeof(a) i = (a), i<(b); ++i)
#define ALL(v) v.begin(),v.end()

struct node {
	int count, first,last;
	node(){
		count = 0, first = -1;
	}
}t[1000002];

int main() {
	ios_base::sync_with_stdio(false);
	int n,a,m = 0,f = 0,val = 0;
	cin>>n;
	FOR(i,1,n+1){
		cin>>a;
		t[a].count++;
		if(t[a].first == -1)t[a].first = i;
		t[a].last = i;
	}
	FOR(i,1,1000001){
		if(m < t[i].count){
			m = t[i].count;
			f = i;
			val = t[i].last - t[i].first;
		}else if(m == t[i].count && val > t[i].last - t[i].first){
			m = t[i].count;
			f = i;
			val = t[i].last - t[i].first;
		}
	}
	cout<<t[f].first<<" "<<t[f].last<<endl;		
	return 0;
}
