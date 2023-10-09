#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	if(n==1){
		cout<<2;
		return 0;
	}
	vector<int>v(10000001,1);
	for(int i=2;i<=sqrt(10000001);i++){
		if(v[i]==0){
			continue;
		}
		for(int j=i+i;j<10000001;j+=i){
			v[j]=0;
		}
	}
	for(int i=n;;i++){
		if(v[i]==1){
			string str=to_string(i);
			int s=0;
			int e=str.length()-1;
			while(s<=e){
				if(str[s]==str[e]){
					s++;
					e--;
				}
				else {
					break;
				}
			}
			if(s>e){
				cout<<i;
				return 0;
			}
		}
	}
	return 0;
}