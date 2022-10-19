#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a[100001], sum;
void solve(){
    cin>>n;
    sum=0;
    for(int i=1; i<=n; ++i) cin >> a[i];
    map<int, int> Q;
    for(int i=1; i<n; ++i) Q[a[i]]++;
    for(auto i:Q) sum+=1.second * (i.second)/2;
    cout<<sum<<endl;
}

signed main() {
    int T; cin>>T;
    while(T--) solve(); 
	// your code goes here
	return 0;
}