#include <bits/stdc++.h>
using namespace std;

void solve() 
{ 
	int n, k; cin>>n>>k;
    
    bool ans = false;

    for(int i=0; i<n; i++)
    {
    	int x; cin>>x;
    	if(x==k)
    	{
    		ans = true;
    	}
    }

    if(ans)
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