
	#include <bits/stdc++.h>
	#define endl "\n"
	#define ll long long int
	#define vi vector<ll>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<ll,ll>
	#define pll pair<long long, long long>
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y) 
	#define mem(a,val) memset(a,val,sizeof(a))
	#define pb push_back
	#define f first
	#define s second
	
	using namespace std;
	
	void reverse(int a[],int start, int end){
		while(start<end){
			int temp = a[start];
			a[start]=a[end];
			a[end]=temp;
			start++;
			end--;
		}
	}
	signed main()
	{

	std::ios::sync_with_stdio(false);
	
	#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
     #endif

      int n;cin>>n;
      int a[n];
      for (int i = 0; i < n; ++i)
      {
      	/* code */
      	cin>>a[i];
      }
      reverse(a,0,n-1);
      for (int i = 0; i < n; ++i)
      {
      	/* code */
      	cout<<a[i]<<" ";
      }
	
	return 0;
	}
