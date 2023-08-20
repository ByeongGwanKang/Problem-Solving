#include <bits/stdc++.h> 
using namespace std;

int check=0;
void add(char c);
void remove(char c);
vector<int>checkarr(4);
vector<int>myarr(4);

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int s,p;
	int a,c,g,t;
	int ans=0;
	cin>>s>>p;
	cin.ignore();
	string str;
	getline(cin,str);
	for(int i=0;i<4;i++){
		cin>>checkarr[i];
		if(checkarr[i]==0)
			check++;
	}
	for(int i=0;i<p;i++){
		add(str[i]);
	}
	if(check==4)
		ans++;
	for(int i=p;i<s;i++){
		int j = i-p;
		add(str[i]);
		remove(str[j]);
		if(check==4)
			ans++;
	}
	cout<<ans;
	return 0;
}
	
void add(char c){
	switch (c){
		case 'A':
			myarr[0]++;
			if(myarr[0]==checkarr[0])
				check++;
			break;
		case 'C':
			myarr[1]++;
			if(myarr[1]==checkarr[1])
				check++;
			break;
		case 'G':
			myarr[2]++;
			if(myarr[2]==checkarr[2])
				check++;
			break;
		case 'T':
			myarr[3]++;
			if(myarr[3]==checkarr[3])
				check++;
			break;
	}
}
	
void remove(char c){
	switch (c){
		case 'A':
			if(myarr[0]==checkarr[0])
				check--;
			myarr[0]--;
			break;
		case 'C':
			if(myarr[1]==checkarr[1])
				check--;
			myarr[1]--;
			break;
		case 'G':
			if(myarr[2]==checkarr[2])
				check--;
			myarr[2]--;
			break;
		case 'T':
			if(myarr[3]==checkarr[3])
				check--;
			myarr[3]--;
			break;
	}
}
