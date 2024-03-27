#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
     int n; cin>>n;
     vector<int> v(n);

     int ma = INT_MIN, mi = INT_MAX;
     int mdif = INT_MIN;
     for(int i=0; i<n; i++)
     {
     	cin>>v[i];
     	ma = max(ma, v[i]);
     	mi = min(mi, v[i]);
     } 
     
     bool flag = false;

     for(int i=1; i<n; i++)
     {
     	mdif = max(mdif, v[i-1]-v[i]);
     }
     
     cout<<max(ma-v[0], max(v[n-1]-mi, mdif))<<endl;
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
