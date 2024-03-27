#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
	ll n, k; cin>>n>>k;
	vector<ll> v(n);
	priority_queue<pair<ll, ll>> pq;

	for(ll i=0; i<n; i++)
	{
		ll x; cin>>x;
		if(x%k==0)
		{
			cout<<i+1<<" ";
		}
		else if(x>k)
		{
			v[i] = x%k;
			pq.push({v[i], -(i+1)});
		}
		else
		{
			v[i] = x;
			pq.push({v[i], -(i+1)});
		}
	}

	while(!pq.empty())
	{
		cout<<-pq.top().second<<" ";
		pq.pop();
	}
	cout<<endl;
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

		