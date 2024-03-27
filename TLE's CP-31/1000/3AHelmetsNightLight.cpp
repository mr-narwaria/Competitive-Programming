#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
	ll n, p; cin>>n>>p;
	vector<ll> a(n);
	vector<ll> b(n);

	for(ll i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(ll i=0; i<n; i++)
	{
		cin>>b[i];
	}

	priority_queue<pair<ll, ll>> pq;

	for(ll i=0; i<n; i++)
	{
		pq.push({-b[i], a[i]});
	}

	ll cost = p;
    ll x = n-1;
    
  
	for(ll i=0; i<n; i++)
	{
		if(-pq.top().first<p)
		{
			if(x>pq.top().second)
			{
				x = x - pq.top().second;
				cost += -pq.top().first*pq.top().second;
				pq.pop();
			}
			else
			{
				cost += -pq.top().first*x;
				break;
			}
		}
		else
		{
			cost += x * p;
			break;
		}
	}

	cout<<cost<<endl;
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

		