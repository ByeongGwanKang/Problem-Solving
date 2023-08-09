#include <bits/stdc++.h> 
using namespace std;
int main(void){
	ios::sync_with_stdio(0); 
	cin.tie(0);
	int k,n;
	cin>>k>>n;
	unsigned int high=0;
	unsigned int min=1;
	unsigned int mid;
	unsigned int ans =0;
	vector<int> v(k);
	for(int i=0;i<k;i++){
		cin>>v[i];
		if(high<v[i])
			high=v[i];
	}
	while(min<=high){
		unsigned int sum=0;
		mid=(min+high)/2;
		for(int i=0;i<k;i++){
			sum+=(v[i]/mid);
		}
		if(sum>=n){
			min=mid+1;
			ans=max(ans,mid);
		}
		else high=mid-1;
	}
	cout<<ans;
	return 0;
}
