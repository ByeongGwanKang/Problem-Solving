#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	long long sum=0;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
		sum+=v[i];
	}
	sort(v.begin(),v.end());
	long long ans=0;
	for(int i=0;i<n-1;i++){
		long long temp=sum-v[i];
		ans+=temp*v[i];
		sum-=v[i];
	}
	cout<<ans;
}
