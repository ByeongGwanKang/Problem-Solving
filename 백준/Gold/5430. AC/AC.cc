#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		deque<int>d;
		string func;
		cin>>func;
		cin.ignore();
		int n;
		cin>>n;
		cin.ignore();
		string arr;
		cin>>arr;
		cin.ignore();
		int cnt=0;
		int errflag=0;
		//입력값을 int로 변환하여 덱에 저장
		string s="";
		for(auto i:arr){
			if(i>='0'&&i<='9'){
				s+=i;
			}
			else{
				if(!s.empty()){
					d.push_back(stoi(s));
					s="";
				}
			}
		}
		//rvs변수가 홀수면 반대로 출력
		int rvs=0;
		for(auto i:func){
			if(i=='R'){
				rvs++;
			}
			if(i=='D'){
				if(d.empty()){
					cout<<"error\n";
					errflag=1;
					break;
				}
				else if(rvs%2==0){
					d.pop_front();
				}
				else{
					d.pop_back();
				}
			}
		}
		if(errflag==1){
			continue;
		}
		cout<<"[";
		while(!d.empty()){
			if(rvs%2==0){
				cout<<d.front();
				d.pop_front();
				if(d.size()!=0){
					cout<<",";
				}
			}
			if(rvs%2==1){
				cout<<d.back();
				d.pop_back();
				if(d.size()!=0){
					cout<<",";
				}
			}
		}
		cout<<"]\n";
	}
	return 0;
}
