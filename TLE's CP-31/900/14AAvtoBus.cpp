#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
    ll n; cin>>n;
    if(n%2==1 or n==2)
    {
    	cout<<-1<<endl;
    	return;
    }
    
    n = n/2;
    ll ma, mi;
    ll x = 0, y = 0;
    bool flag = true;
    while(flag)
    {
        if((n-3*y)%2==0)
        {
           ma = y + (n-3*y)/2;
           flag = false;
        }
        else
        {
        	y++;
        }
    }

    flag = true;
    x = 0, y = 0;
    while(flag)
    {
    	if((n-2*x)%3==0)
    	{
    		mi = (n-2*x)/3 + x;
    		flag = false;
    	}
    	else
    	{
    		x++;
    	}
    }

    cout<<mi<<" "<<ma<<endl;

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

		