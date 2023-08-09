#include <bits/stdc++.h> 
using namespace std;
int main(void){
	ios::sync_with_stdio(0); 
	cin.tie(0);
	int l;
	cin>>l;
	string str;
	cin.ignore();
	getline(cin,str);
	long long val;
	long long sum=0;
	for(int i=0;i<l;i++){
		val = (int)str[i]-96;
		for(int j=0;j<i;j++){
			val*=31;
			if(val>=1234567891)
				val%=1234567891;
		}
		sum+=val;
		if(sum>=1234567891)
			sum%=1234567891;
	}
	cout<<sum;
	return 0;
}
