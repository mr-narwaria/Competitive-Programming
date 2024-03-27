#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
	int n, k; cin>>n>>k;
	vector<int> v(n);
	for(int i=0; i<n; i++)
	{
		cin>>v[i];
	}

	sort(v.begin(), v.end());


	int ans = INT_MIN;
	int ct = 1;
	for(int i=1; i<n; i++)
	{
		if((v[i]-v[i-1])<=k)
		{
			ct++;
		}
		else
		{
			ans = max(ct, ans);
			ct = 1;
		}
	}

	ans = max(ct, ans);

	cout<<n-ans<<endl;

}

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin>>t;
	while(t--)
	{
		solve();
	}
	
	return 0;
}

