#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
    int n, k=0; cin>>n;
    vector<int> v(n);
    for(int i=1; i<=n; i++)
    {
    	int x; cin>>x;
        k = gcd(k, abs(x-i));
    }

    cout<<k<<endl;
    


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

		