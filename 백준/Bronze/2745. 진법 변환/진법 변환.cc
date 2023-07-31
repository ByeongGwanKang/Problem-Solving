#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int b;
	string str;
	cin>>str>>b;
	int len = str.length();
	int cnt=1;
	int sum=0;
	for(int i=len-1;i>=0;i--){
		if(str[i]>='A')
			sum+=((int)str[i]-55)*cnt;
		
		else sum+=((int)str[i]-48)*cnt;
		
		cnt*=b;
	}
	cout<<sum;
	return 0;
}