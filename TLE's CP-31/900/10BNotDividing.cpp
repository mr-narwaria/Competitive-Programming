#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{ 
 	int n; cin>>n;
 	vector<int> v(n);
 	bool flag = false;
 	for(int i=0; i<n; i++)
 	{
 		cin>>v[i];
 		if(v[i]==1)
 		{
 			flag = true;
 		}
 	}

 	if(flag)
 	{
 		for(int i=0; i<n; i++)
 		{
 			v[i] += 1;
 		}
 	}

 	for(int i=0; i<n-1; i++)
 	{
 		if(v[i+1]%v[i]==0)
 		{
 			v[i+1]++;
 		}
 		cout<<v[i]<<" ";
 	}
 	cout<<v[n-1]<<endl;
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

		