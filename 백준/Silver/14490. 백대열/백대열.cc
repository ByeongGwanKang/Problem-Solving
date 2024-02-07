#include <bits/stdc++.h> 
using namespace std;

int gcd(int a,int b){
	if(a%b==0){
		return b;
	}
	else{
		return gcd(b,a%b);
	}
}
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin>>s;
	istringstream ss(s);
	string substr;
	vector<string>v;
	while(getline(ss,substr,':')){
		v.push_back(substr);
	}
	int a=stoi(v[0]);
	int b=stoi(v[1]);
	int div=gcd(a,b);
	cout<<a/div<<":"<<b/div;
	return 0;
}