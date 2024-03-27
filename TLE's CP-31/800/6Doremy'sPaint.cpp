// #include <bits/stdc++.h>
// using namespace std;

// void solve() 
// {
// 	int n; cin>>n;
// 	vector<int> v(n);

// 	for(int i=0; i<n; i++)
// 	{
// 		cin>>v[i];
// 	}

// 	if(n<=2)
// 	{
// 		cout<<"YES"<<endl;
// 		return;
// 	}

// 	vector<int> ct(2, 0);
// 	sort(v.begin(), v.end());

// 	for(int i=0; i<n; i++)
// 	{
// 		if(v[i]==v[0])
// 		{
// 			ct[0]++;
// 		}
// 		else if(v[i]==v[n-1])
// 		{
// 			ct[1]++;
// 		}
// 		else
// 		{
// 			cout<<"NO"<<endl;
// 			return;
// 		}
// 	}

// 	if(ct[1]==0)
// 	{
// 		cout<<"YES"<<endl;
// 		return;
// 	}

// 	if(n%2==0)
// 	{
// 		if((ct[0]==ct[1]) and (ct[0]==n/2))
// 		{
// 			cout<<"YES"<<endl;
// 		}
// 		else
// 		{
// 			cout<<"NO"<<endl;
// 		}
// 	}
// 	else
// 	{
// 		if(((ct[0]==n/2)or (ct[0]==n/2+1)) and ((ct[1]==n/2) or (ct[1]==n/2+1)))
// 		{
// 			cout<<"YES"<<endl;
// 		}
// 		else
// 		{
// 			cout<<"NO"<<endl;
// 		}
// 	}
// }

// int main() 
// {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(nullptr);

// 	int t; cin>>t;
// 	while(t--)
// 	{
// 		solve();
// 	}

// 	return 0;
// }

// Time complexity O(nlogn) because of map

#include <bits/stdc++.h>
using namespace std;

void solve() 
{
	int n; cin>>n;
	
	map<int, int> mp;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		mp[x]++;
	}

	if(mp.size()>2)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		if(abs(mp.begin()->second - mp.rbegin()->second)<=1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
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