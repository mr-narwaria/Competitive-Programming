#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
	int n; string st; cin>>n>>st;
	vector<int> left(26, 0);
	vector<int> righ(26, 0);

	for(int i=0; i<n; i++)
	{
		righ[st[i]-'a']++;
	}
	int maximum = 0;
	
	for(int i=0; i<n; i++)
	{
		int l = 0, r=0;
        righ[st[i]-'a']--;
        left[st[i]-'a']++;
		for(int i=0; i<26; i++)
		{
			if(righ[i]>0)
			{
				r++;
			}
			if(left[i]>0)
			{
				l++;
			}
		}
		maximum = max(maximum, l+r);
	}

	cout<<maximum<<endl;

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

