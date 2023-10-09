#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int a,b;
	cin>>a>>b;
	vector<int>aset;
	vector<int>bset;
	int cnt=a;
	for(int i=0;i<a;i++){
		int val;
		cin>>val;
		aset.push_back(val);
	}
	for(int i=0;i<b;i++){
		int val;
		cin>>val;
		bset.push_back(val);
	}
	sort(aset.begin(),aset.end());
	sort(bset.begin(),bset.end());
	vector<int>ans;
	for(int i:aset){
		if(binary_search(bset.begin(),bset.end(),i)){
			continue;
		}
		ans.push_back(i);
	}
	cout<<ans.size()<<"\n";
	for(int i:ans){
		cout<<i<<" ";
	}
	return 0;
}