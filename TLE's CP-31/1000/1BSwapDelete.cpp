#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
	string st; cin>>st;
	int n = st.size();
	vector<int> one(n+1, 0);
	vector<int> zero(n+1, 0);

	for(int i=1; i<=st.size(); i++)
	{
		if(st[i-1]=='0')
		{
			zero[i] += 1;
		}
		else
		{
			one[i]+= 1;
		}

		zero[i] += zero[i-1];
		one[i] += one[i-1];
	}

	
	int ans = 0;
	if(zero[n]>one[n])
	{
		int y = one[n];
		while(zero[n]>y)
		{
			int x = zero[n]-y;
			ans += x;
			n = n-x;
		}
		cout<<ans<<endl;
	}
	else if(zero[n]<one[n])
	{
		int y = zero[n];
		while(y<one[n])
		{
			int x =one[n]-y;
			ans += x;
			n = n-x;
		}
		cout<<ans<<endl;
	}
	else
	{
		cout<<0<<endl;
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

