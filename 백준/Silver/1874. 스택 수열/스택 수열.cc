#include <bits/stdc++.h> 
using namespace std;
int main(void){
	ios::sync_with_stdio(0); 
	cin.tie(0);
	stack<int> s;
	int n;
	cin>>n;
	int val;
	s.push(0);
	int cnt=1;
	vector<char>arr(2*n);
	//NO인지 판별하는 부분
	int k=0;
	for(int i=0;i<n;i++){
		cin>>val;
		while(val>s.top()){
			s.push(cnt);
			cnt++;
			arr[k++]='+';
		}
		if(val==s.top()){
			s.pop();
			arr[k++]='-';
		}
		else {
			cout<<"NO";
			return 0;
		}		
	}
	//출력하는 부분
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<'\n';
		}

	return 0;
}
