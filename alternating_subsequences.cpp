#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
	ll n;
	cin>>n;
	ll arr[n],inc,exc;
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	inc = arr[0];
	exc = 0;
	for(ll i=1;i<n;i++){
		ll temp = (inc>exc)?inc:exc;
		inc = exc + arr[i];
		exc = temp;
	}
	cout<<max(inc,exc)<<endl;
	}
	return 0;
}