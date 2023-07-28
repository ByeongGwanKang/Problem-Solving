#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	string str;
	cin>>str;
	int len = str.length();
	vector <string> arr(len);
	for(int i=0;i<len;i++){
		arr[i]=str;
		str.erase(str.begin());
	}
	sort(arr.begin(), arr.end());
	for(int i=0;i<len;i++){
		cout<<arr[i]<<"\n";
	}
	return 0;
}