#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin>>s;
	int one_cnt=0;
	int zero_cnt=0;
	for(int i=0;i<s.length()-1;i++){
		//1후에 0나오는 경우
		if(s[i]=='1'&&s[i+1]!='1'){
			one_cnt++;
		}
		//0후에 1나오는 경우
		else if(s[i]=='0'&&s[i+1]!='0'){
			zero_cnt++;
		}
	}
	if(s[0]=='0'&&s[s.length()-1]=='0'){
		cout<<zero_cnt;
	}
	else if(s[0]=='1'&&s[s.length()-1]=='1'){
		cout<<one_cnt;
	}
	else{
		cout<<max(zero_cnt,one_cnt);
	}
	return 0;
}
