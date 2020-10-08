
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
	
	int random(int arr[], int l, int r){
		int p = l + rand()%(r-l);
		swap(arr[r],arr[p]);
		return partition(arr, l, r);
	}
	int partition(int arr[], int l, int r){
		int pivot = arr[r];
		int pindex = l;
		for (int i = l; i < r; ++i)
		{
			/* code */
			if(arr[i]<=pivot){
				swap(arr[i],arr[pindex]);
				pindex++;
			}
		}
		swap(arr[pindex],arr[r]);
		return pindex;
	}

	void quicksort(int arr[], int l, int r){
		if(l>=r) return;
		int pindex = random(arr, l, r);
		partition(arr, l, r);
		quicksort(arr, l, pindex-1);
		quicksort(arr, pindex+1, r);
	}

	signed main()
	{

	std::ios::sync_with_stdio(false);
	
	#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
     #endif

	ll T;
	cin>>T;
	while(T--)
	{
		int n; cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin>>a[i];
		}
		int k; cin>>k;
		quicksort(a,0,n-1);
		cout<<a[k-1]<<endl;
	}
	return 0;
	}
