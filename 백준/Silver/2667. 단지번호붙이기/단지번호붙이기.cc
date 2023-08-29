#include <bits/stdc++.h> 
using namespace std;

int arr[26][26]={0,};
vector<vector<bool>> visited(26,vector<bool>(26,false));
void dfs(int i,int j);
int cnt;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	cin.ignore();
	vector<int> ans;
	string str;
	for(int i=0;i<n;i++){
		getline(cin,str);
		for(int j=0;j<n;j++){
			arr[i][j]=str[j]-'0';
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(visited[i][j]==false&&arr[i][j]==1){
				cnt=0;
				dfs(i,j);
				ans.push_back(cnt);
			}
		}
	}
	cout<<ans.size()<<"\n";
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<"\n";
	}
	return 0;
}
void dfs(int i,int j){
	cnt++;
	visited[i][j]=true;
	for(int k=0;k<4;k++){
		int x=i+dx[k];
		int y=j+dy[k];
		if(x>=0&&y>=0&&arr[x][y]==1&&visited[x][y]==false)
			dfs(x,y);
	}
}