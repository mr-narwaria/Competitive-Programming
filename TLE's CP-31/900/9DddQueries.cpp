#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
    int n, que; cin>>n>>que;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++)
    {
    	cin>>v[i];
    }
    for(int i=1; i<=n; i++)
    {
    	v[i] += v[i-1];
    }

    for(int i=0; i<que; i++)
    {
    	int l, r, k;  cin>>l>>r>>k;

    	int x = v[n] - (v[r]-v[l-1]) + k*(r-l+1);

    	if(x%2==0)
    	{
    		cout<<"NO"<<endl;
    	}
    	else
    	{
    		cout<<"YES"<<endl;
    	}
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

		