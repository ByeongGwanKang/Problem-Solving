#include <bits/stdc++.h> 
using namespace std;

void mergesort(int s, int e);
static vector<int> v;
static vector<int> tmp;
long cnt=0;
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	v=vector<int>(n+1,0);
	tmp=vector<int>(n+1,0);
	for(int i=1;i<=n;i++){
		cin>>v[i];
	}
	mergesort(1,n);
	cout<<cnt;
	return 0;
}

void mergesort(int s, int e){
	if(e-s<1){
		return;
	}
	int m=s+(e-s)/2;
	mergesort(s,m);
	mergesort(m+1,e);
	for(int i=s;i<=e;i++){
		tmp[i]=v[i];
	}
	int k = s;
	int small_idx=s;
	int big_idx=m+1;
	while(small_idx<=m&&big_idx<=e){
		if(tmp[small_idx]>tmp[big_idx]){
			v[k]=tmp[big_idx];
			cnt+=big_idx-k;
			k++;
			big_idx++;
		}
		else{
			v[k]=tmp[small_idx];
			k++;
			small_idx++;
		}
	}
	while(small_idx<=m){
		v[k]=tmp[small_idx];
		k++;
		small_idx++;
	}
	while(big_idx<=e){
		v[k]=tmp[big_idx];
		k++;
		big_idx++;
	}
}
	