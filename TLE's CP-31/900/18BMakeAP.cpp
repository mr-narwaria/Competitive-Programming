#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
	ll a, b, c; cin>>a>>b>>c;

	if((a+c)%(2*b)==0)
	{
		cout<<"YES"<<endl;
	}
	else if((2*b-c)%a==0 and (2*b-c)>0)
	{
        cout<<"YES"<<endl;
	}
	else if((2*b-a)%c==0 and (2*b-a)>0)
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

