#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
    ll n, k, x; cin>>n>>k>>x;
    ll ma = (k<n)? ((n)*(n+1)/2) - ((n-k)*(n-k+1)/2) : (n)*(n+1)/2;
    ll mi = (k<n)? (k)*(k+1)/2 : (n)*(n+1)/2;

    if(x>=mi and x<=ma)
    {
    	cout<<"YES"<<endl;
    }
    else
    {
    	cout<<"NO"<<endl;
    }
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

		