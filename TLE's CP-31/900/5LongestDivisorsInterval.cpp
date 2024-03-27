// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// void solve() 
// {
//     ll n; cin>>n;

//     for(int i=1; i<=n; i++)
//     {
//     	if(n>i and n%i!=0)
//     	{
//     		cout<<i-1<<endl;
//     		break;
//     	}
//     	else if(i>n)
//     	{
//     		cout<<n<<endl;
//     		break;
//     	}
//     }
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

// 		


#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
	ll n; cin>>n;
	ll len = INT_MIN;
	ll ct = 0;

	for(int i=1; i*i<=1e4; i++)
	{
		if(n%i==0)
		{
			ct++;
		}
		else
		{
			len = max(len, ct);
			ct = 0;
		}
	}
	cout<<len<<endl;
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

