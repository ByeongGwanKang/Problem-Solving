#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	deque<int>d;
	for(int i=0;i<n;i++){
		int order;
		cin>>order;
		if(order==1){
			int temp;
			cin>>temp;
			d.push_front(temp);
		}
		if(order==2){
			int temp;
			cin>>temp;
			d.push_back(temp);
		}
		if(order==3){
			if(d.empty()){
				cout<<-1<<"\n";
			}
			else{
				cout<<d.front()<<"\n";
				d.pop_front();
			}
		}
		if(order==4){
			if(d.empty()){
				cout<<-1<<"\n";
			}
			else{
				cout<<d.back()<<"\n";
				d.pop_back();
			}
		}
		if(order==5){
			cout<<d.size()<<"\n";
		}
		if(order==6){
			if(d.empty()){
				cout<<"1\n";
			}
			else{
				cout<<"0\n";
			}
		}
		if(order==7){
			if(d.empty()){
				cout<<-1<<"\n";
			}
			else{
				cout<<d.front()<<"\n";
			}
		}
		if(order==8){
			if(d.empty()){
				cout<<-1<<"\n";
			}
			else{
				cout<<d.back()<<"\n";
			}
		}
	}	
	return 0;
}