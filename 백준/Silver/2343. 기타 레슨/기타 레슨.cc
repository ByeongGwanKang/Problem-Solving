#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	vector<int>v(n);
	int sum=0;
	int max=0;
	for(int i=0;i<n;i++){
		cin>>v[i];
		sum+=v[i];
		if(max<v[i])
			max=v[i];
	}
	
	int start = max;
	int end=sum;
	while(start<=end){
		sum=0;
		int cnt=0;
		int mid = (start+end)/2;
		for(int i=0;i<n;i++){
			if(sum+v[i]>mid){
				cnt++;
				sum=0;
			}
			sum+=v[i];
		}
		if(sum>0){
			cnt++;
		}
		if(cnt>m){
			start=mid+1;
		}
		else {
			end=mid-1;
		}
	}
	cout<<start;
}
