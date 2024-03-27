#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
	int n; cin>>n;
	int min1 = INT_MAX;
	vector<int> min2;
	for(int i=0; i<n; i++)
	{
		int m; cin>>m;
		vector<int> v(m);
		for(int i=0; i<m; i++)
		{
			cin>>v[i];
		}
        
        // minimum element in the vector
		int minl = *min_element(v.begin(), v.end());
		min1 = min(min1, minl);
		// erase minimum element in the vector
		v.erase(find(v.begin(), v.end(), minl));
		min2.push_back(*min_element(v.begin(), v.end()));
	}
    
    ll sum = 0;

    // for(int i=0; i<min2.size(); i++)
    // {
    // 	sum += min2[i];
    // }
     
    // accumulate function to calculate sum of all element of vector in perticular range with sum varriable 
    sum = (ll) accumulate(min2.begin(), min2.end(), 0ll);
	cout<<min1 - *min_element(min2.begin(), min2.end()) + sum <<endl;
	
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

