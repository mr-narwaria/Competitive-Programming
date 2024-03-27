#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{  
	int n, k; cin>>n>>k;
	string st; cin>>st;

	map<char, int> mp;

	for(int i=0; i<n; i++)
	{
		mp[st[i]]++;
	}

    bool flag = true;

	for(auto itr=mp.begin(); itr!=mp.end(); itr++)
	{
	    if(flag and ((itr->second)%2==1))
	    {
	    	flag = false;
	    	continue;
	    }
	    if((itr->second)%2==1)
	    {
	    	if(k>0)
	    	{
	    		k--;
	    		itr->second--;
	    	}
	    	else
	    	{
	    		cout<<"NO"<<endl;
	    		return;
	    	}
	    }
	}
    
    int ttl = 0;
	for(auto it=mp.begin(); it!=mp.end(); it++)
	{
		ttl += it->second;
	}
    
    if(ttl>=k)
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

