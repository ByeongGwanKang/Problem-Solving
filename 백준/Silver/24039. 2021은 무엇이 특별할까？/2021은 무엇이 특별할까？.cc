#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	//에라체
	int arr[1000]={0,};
	vector<int>prime;
	for(int i=2;i<1000;i++){
		if(arr[i]==1){
			continue;
		}
		for(int j=i+i;j<1000;j+=i){
			arr[j]=1;
		}
	}

	for(int i=2;i<1000;i++){
		if(arr[i]==0){
			prime.push_back(i);
		}
	}
	for(int i=0;i<1000;i++){
		if(prime[i]*prime[i+1]>n){
			cout<<prime[i]*prime[i+1];
			return 0;
		}
	}
	return 0;
}
