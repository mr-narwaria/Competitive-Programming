#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
       int x; cin>>x;
    }

    if(n%2==0)
    {
    	cout<<2<<endl;
    	cout<<1<<" "<<n<<endl;
    	cout<<1<<" "<<n<<endl;
    }
    else
    {
    	cout<<4<<endl;
    	cout<<1<<" "<<n-1<<endl;
    	cout<<1<<" "<<n-1<<endl;
    	cout<<n-1<<" "<<n<<endl;
    	cout<<n-1<<" "<<n<<endl;
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

		