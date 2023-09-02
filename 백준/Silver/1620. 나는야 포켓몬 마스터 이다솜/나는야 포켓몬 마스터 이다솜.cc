#include <bits/stdc++.h> 
using namespace std;


int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	map<string, int>map;
	cin>>n>>m;
	vector<string> name;
	vector<string> res;
	string str;
	for(int i=1;i<=n;i++){
		cin>>str;
		map.insert({str,i});
		name.push_back(str);
	}
	for(int i=0;i<m;i++){
		cin>>str;
		if(str[0]>=65&&str[0]<=90)
			res.push_back(to_string(map[str]));
		else res.push_back(name[stoi(str)-1]);
	}
	for(string i:res){
		cout<<i<<"\n";
	}
}
