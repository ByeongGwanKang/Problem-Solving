#include <iostream>
#include <string>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin>>s;
	int alp[26]={0,};
	for(int i=0;i<s.length();i++){
		s[i]=toupper(s[i]);
		alp[s[i]-'A']++;
	}
	int max=0;
	for(int i=0;i<26;i++){
		if(alp[i]>max){
			max=alp[i];
		}
	}
	int cnt=0;
	int idx;
	for(int i=0;i<26;i++){
		if(alp[i]==max){
			cnt++;
			idx=i;
		}
	}
	if(cnt>1){
		cout<<"?";
	}
	else {
		cout<<char(idx+'A');
	}
	
    return 0;
}
