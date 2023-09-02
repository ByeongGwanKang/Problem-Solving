#include <bits/stdc++.h> 
using namespace std;

set<int> s;
set<int> allset;

void add(int x){
	s.insert(x);
}

void remove(int x){
	s.erase(x);
}

void empty(){
	s.clear();
}

void all(){
	s=allset;
}

void check(int x){
	if(s.count(x)!=0)
		cout<<1<<"\n";
	else cout<<0<<"\n";
}

void toggle(int x){
	if(s.count(x)!=0)
		s.erase(x);
	else s.insert(x);
}
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int m;
	cin>>m;
	string str;
	int val;
	for(int i=1;i<=20;i++){
		allset.insert(i);
	}
	for(int i=0;i<m;i++){
		cin.ignore();
		cin>>str;
		if(str=="add"){
			cin>>val;
			add(val);
		}
		if(str=="check"){
			cin>>val;
			check(val);
		}
		if(str=="remove"){
			cin>>val;
			remove(val);
		}
		if(str=="toggle"){
			cin>>val;
			toggle(val);
		}
		if(str=="all")
			all();
		if(str=="empty")
			empty();
	}
}
