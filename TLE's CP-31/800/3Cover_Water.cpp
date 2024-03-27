#include <bits/stdc++.h>
using namespace std;

void solve() 
{
	int n; cin>>n;
	vector<char> vc(n);
	for(int i=0; i<n; i++)
	{
		cin>>vc[i];
	}

	int ct = 0;
	int ans = 0;
	for(int i=0; i<n; i++)
	{
		if(vc[i]=='.')
		{
			ct += 1;
		}
		else
		{
			if(ct>=3)
			{
				cout<<2<<endl;
				return;
			}
			else
			{
				ans += ct;
			}
			ct = 0;
		}
	}

	if(ct>=3)
	{
		cout<<2<<endl;
		return;
	}
	else
	{
		cout<<ct+ans<<endl;
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