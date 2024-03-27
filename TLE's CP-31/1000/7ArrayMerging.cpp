// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// void solve() 
// {
// 	ll n; cin>>n;
// 	map<ll, ll> a;
// 	map<ll, ll> b;
// 	vector<ll> aa(n);
// 	vector<ll> bb(n);

// 	for(ll i=0; i<n; i++)
// 	{
// 		cin>>aa[i];
// 	}
// 	for(ll i=0; i<n; i++)
// 	{
// 		cin>>bb[i];
// 	}


// 	ll ct = 1;
// 	ll i=0;
// 	for(i=1; i<n; i++)
// 	{
// 		if(aa[i]==aa[i-1])
// 		{
// 			ct++;
// 		}
// 		else
// 		{
// 			a[aa[i-1]] = max(a[aa[i-1]], ct);
// 			ct = 1;
// 		}
// 	}
// 	a[aa[i-1]] = max(a[aa[i-1]], ct);

// 	ct = 1;
// 	for(i=1; i<n; i++)
// 	{
// 		if(bb[i]==bb[i-1])
// 		{
// 			ct++;
// 		}
// 		else
// 		{
// 			b[bb[i-1]] = max(b[bb[i-1]], ct);
// 			ct = 1;
// 		}
// 	}
//     b[bb[i-1]] = max(b[bb[i-1]], ct);

//     auto it = a.begin();
//     auto jt = b.begin();
//     ll ma = 0;
//     i = 0;
//     int j = 0;
// 	while(i<a.size() and j<b.size())
// 	{
// 		if((it->first == jt->first) and (i<a.size() and j<b.size()))
// 		{
// 			ma = max(ma, jt->second + it->second);
// 			it++;
// 			jt++;
// 			i++;
// 			j++;
// 		}
// 		else if(it->first > jt->first)
// 		{
// 			ma = max(ma, jt->second);
// 			jt++;
// 			j++;
// 		}
// 		else
// 		{
// 			ma = max(ma, it->second);
// 			it++;
// 			i++;
// 		}
// 	}

// 	cout<<ma<<endl;
// }

// int main() 
// {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(nullptr);

// 	ll t; cin>>t;
// 	while(t--)
// 	{
// 		solve();
// 	}

// 	return 0;
// }



#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	vector<int> a(n + 1);
	vector<int> b(n + 1);

	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; ++i)
	{
		cin >> b[i];
	}
	vector<int> fa(n + n + 1);
	vector<int> fb(n + n + 1);
	int ct = 1;
	int i = 0;
	for (i = 2; i <= n; ++i)
	{
		if(a[i]==a[i-1])
		{
			ct++;
		}
		else
		{
			fa[a[i-1]] = max(fa[a[i-1]], ct);
			ct = 1;
		}
	}
	fa[a[n]] = max(fa[a[n]], ct);

	ct = 1;
	for (i = 2; i <= n; ++i)
	{
		if(b[i]==b[i-1])
		{
			ct++;
		}
		else
		{
			fb[b[i-1]] = max(fb[b[i-1]], ct);
			ct = 1;
		}
	}
	fb[b[n]] = max(fb[b[n]], ct);

	int ans = 0;
	for (int i = 1; i <= n + n; ++i)
	{
		ans = max(ans, fa[i] + fb[i]);
	}

	cout << ans << endl;
}

int main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--)
	{
		solve();
	}
}
