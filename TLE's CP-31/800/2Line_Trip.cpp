#include <bits/stdc++.h>
using namespace std;

void solve() 
{
	int n, x; cin>>n>>x;
	vector<int> v(n+1, 0);
	for(int i=1; i<n+1; i++)
	{
		cin>>v[i];
	}

	int ans = INT_MIN;
	for(int i=1; i<n+1; i++)
	{   
		ans = max(ans, v[i]-v[i-1]);
	}

	ans = max(ans, 2*(x-v[n]));
	cout<<ans<<endl;
}

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin>>t;
	while(t--){
		solve();
	}

	return 0;
}