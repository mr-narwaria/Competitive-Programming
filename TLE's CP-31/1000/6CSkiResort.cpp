#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
	ll n, k, q; cin>>n>>k>>q;
	ll ct = 0;
	vector<ll> v;
	for(ll i=0; i<n; i++)
	{
		ll x; cin>>x;
		if(q>=x)
		{
			ct++;
		}
		else if(ct>=k)
		{
			v.push_back(ct);
			ct = 0;
		}
		else
		{
			ct = 0;
		}
	}

	if(ct>=k)
	{
		v.push_back(ct);
	}
    ll ans = 0;
	for(int i=0; i<v.size(); i++)
	{
		ans += (v[i]-k+1)*(v[i]-k+2)/2;
	}

	cout<<ans<<endl;
}

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	ll t; cin>>t;
	while(t--)
	{
		solve();
	}
	
	return 0;
}

		