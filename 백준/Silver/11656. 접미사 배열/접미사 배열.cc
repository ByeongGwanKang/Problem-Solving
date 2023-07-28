#include <bits/stdc++.h>
using namespace std;

int main(void){
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