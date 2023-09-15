#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int> v(10);
	for(int i=0;i<10;i++){
		int val;
		cin>>val;
		v[i]=val%42;
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(),v.end()),v.end());
	cout<<v.size();
	return 0;
}