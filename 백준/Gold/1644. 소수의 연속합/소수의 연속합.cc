#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int cnt=0;
	//소수가 아니면 1
	vector<bool>v(4000001,false);
	vector<int>prime;
	v[1]=1;
	for(int i=2;i*i<=n;i++){
		if(v[i]==1){
				continue;
			}
		for(int j=i+i;j<=n;j=j+i){
			v[j]=1;
		}
	}
	for(int i=2;i<=n;i++){
		if(v[i]==0){
			prime.push_back(i);
		}
	}
	if(prime.empty()){
		cout<<0;
		return 0;
	}
	int s=0;
	int e=0;
	int sum=0;
	while(true){
		if(sum>n){
			sum-=prime[s];
			s++;
		}
		else if(sum<n){
			if(e>=prime.size()){
				break;
			}
			sum+=prime[e];
			e++;
		}
		else{
			cnt++;
			if(e>=prime.size()){
				break;
			}
			sum+=prime[e];
			e++;
		}
	}
	cout<<cnt;
	return 0;
}
