#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	long a,b;
	cin>>a>>b;
	vector<long>v(10000001);
	for(int i=2;i<10000001;i++){
		v[i]=i;
	}
	for(int i=2;i<=sqrt(10000001);i++){
		if(v[i]==0){
			continue;
		}
		for(int j=i+i;j<10000001;j=j+i){
			v[j]=0;
		}
	}
	int cnt=0;
	for(int i=2;i<10000001;i++){
		//소수라면
		if(v[i]!=0){
			long temp= v[i];
			while((double)v[i]<=(double)b/(double)temp){
				if((double)v[i]>=(double)a/(double)temp){
					cnt++;
				}
				temp*=v[i];
			}
		}
	}
	cout<<cnt;
    return 0;
}
