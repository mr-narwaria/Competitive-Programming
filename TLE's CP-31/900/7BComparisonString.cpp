#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
	int n; cin>>n;
	string str; cin>>str;

	int ma = INT_MIN;
	int ct1 = 1, ct2 = 1;

	for(int i=0; i<n; i++)
	{
		if(str[i]=='<')
		{
			ct1++;
		}
		else
		{
			ma = max(ma, ct1);
			ct1 = 1;
		}

		if(str[i]=='>')
		{
			ct2++;
		}
		else
		{
			ma = max(ma, ct2);
			ct2 = 1;
		}
	}
	ma = max(ma, max(ct1, ct2));

	cout<<ma<<endl;
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

