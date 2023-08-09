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
	int val;
	int sum=0;
	for(int i=0;i<l;i++){
		val = (int)str[i]-96;
		sum+=(val*(pow(31,i)));
		if(sum>=1234567891)
			sum%=1234567891;
	}
	cout<<sum;
	return 0;
}
