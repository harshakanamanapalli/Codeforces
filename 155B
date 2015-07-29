#include <bits/stdc++.h>
using namespace std;

#define CASET int t;cin>>t;for(int _t=1;_t<=t;++_t)
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define foreach(i,a,b) for(typeof(a) i = (a), i<(b); ++i)
#define ALL(v) v.begin(),v.end()


int main() {
	ios_base::sync_with_stdio(false);
	int n,counter = 1;
	cin>>n;
	pair<int,int> p[n];
	FOR(i,0,n){
		cin>>p[i].second>>p[i].first;
	}
	sort(p,p+n);
	int index = n-1,score = 0;
	while(counter > 0 && index >= 0){
		counter = counter - 1 + p[index].first;
		score = score + p[index].second;
		index--;
	}
	cout<<score<<endl;
	return 0;
}
