#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
    int t;
	cin>>t;
	vector<int>v(100000,1);
	for(int i=2;i<100000;i++){
		if(v[i]==0){
			continue;
		}
		for(int j=i+i;j<100000;j+=i){
			v[j]=0;
		}
	}
	for(int i=0;i<t;i++){
		int n;
		vector<int>check(100000,0);
		cin>>n;
		for(int i=2;n!=1;i++){
			if(v[i]==0){
				continue;
			}
			if(n%i==0){
				n/=i;
				check[i]++;
				i--;
			}
		}
		for(int i=2;i<=100000;i++){
			if(check[i]!=0){
				cout<<i<<" "<<check[i]<<"\n";
			}
		}
	}
	return 0;
}