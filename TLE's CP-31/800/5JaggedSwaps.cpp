#include <bits/stdc++.h>
using namespace std;

void solve() 
{
	int n; cin>>n;
	vector<int> v(n);
	for(int i=0; i<n; i++)
	{
		cin>>v[i];
	}

	if(v[0]!=1)
	{
		cout<<"NO"<<endl;
		return;
	}
	
	for(int j=0; j<n; j++)
	{
		for(int i=1; i<n-1; i++)
		{
			if(v[i]>v[i-1] and v[i]>v[i+1])
			{
				swap(v[i], v[i+1]);
			}
		}
	}

	for(int i=1; i<n; i++)
	{
		if(v[i]<v[i-1])
		{
			
			cout<<"NO"<<endl;
			return;
		}
	}

	cout<<"YES"<<endl;
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