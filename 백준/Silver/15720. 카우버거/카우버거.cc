#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int a,b,c;
	cin>>a>>b>>c;
	vector<int>burger(a);
	vector<int>drink(b);
	vector<int>side(c);
	int sum=0;
	for(int i=0;i<a;i++){
		cin>>burger[i];
		sum+=burger[i];
	}
	for(int i=0;i<b;i++){
		cin>>drink[i];
		sum+=drink[i];
	}
	for(int i=0;i<c;i++){
		cin>>side[i];
		sum+=side[i];
	}
	int set_sum=0;
	sort(burger.begin(),burger.end(),greater<int>());
	sort(drink.begin(),drink.end(),greater<int>());
	sort(side.begin(),side.end(),greater<int>());
	int temp=min({a,b,c});
	int big=max({a,b,c});
	for(int i=0;i<temp;i++){
		set_sum+=0.9*(burger[i]+drink[i]+side[i]);
	}
	for(int i=temp;i<a;i++){
		set_sum+=burger[i];
	}
	for(int i=temp;i<b;i++){
		set_sum+=drink[i];
	}
	for(int i=temp;i<c;i++){
		set_sum+=side[i];
	}
	cout<<sum<<"\n"<<set_sum;
	return 0;
}
