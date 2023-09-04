#include <bits/stdc++.h> 
using namespace std;

int arr[501][501];
//가로줄 4칸연속
int straight_1(int x, int y){
	int val = arr[x][y]+arr[x][y+1]+arr[x][y+2]+arr[x][y+3];
	return val;
}
//세로줄 4칸연속
int straight_2(int x, int y){
	int val = arr[x][y]+arr[x+1][y]+arr[x+2][y]+arr[x+3][y];
	return val;
}
//정사각형
int square(int x, int y){
	int val = arr[x][y]+arr[x+1][y]+arr[x][y+1]+arr[x+1][y+1];
	return val;
}
//L모양 기본
int bigl_1(int x, int y){
	int val = arr[x][y]+arr[x+1][y]+arr[x+2][y]+arr[x+2][y+1];
	return val;
}

int bigl_2(int x, int y){
	int val = arr[x][y]+arr[x+1][y]+arr[x+2][y]+arr[x+2][y-1];
	return val;
}

int bigl_3(int x, int y){
	int val = arr[x][y]+arr[x][y+1]+arr[x+1][y]+arr[x+2][y];
	return val;
}

int bigl_4(int x, int y){
	int val = arr[x][y]+arr[x][y-1]+arr[x+1][y]+arr[x+2][y];
	return val;
}

int bigl_5(int x, int y){
	int val = arr[x][y]+arr[x+1][y]+arr[x+1][y+1]+arr[x+1][y+2];
	return val;
}

int bigl_6(int x, int y){
	int val = arr[x][y]+arr[x+1][y]+arr[x+1][y-1]+arr[x+1][y-2];
	return val;
}

int bigl_7(int x, int y){
	int val = arr[x][y]+arr[x+1][y]+arr[x][y+1]+arr[x][y+2];
	return val;
}

int bigl_8(int x, int y){
	int val = arr[x][y]+arr[x+1][y]+arr[x][y-1]+arr[x][y-2];
	return val;
}

int twst_1(int x, int y){
	int val = arr[x][y]+arr[x+1][y]+arr[x+1][y+1]+arr[x+2][y+1];
	return val;
}

int twst_2(int x, int y){
	int val = arr[x][y]+arr[x+1][y]+arr[x+1][y-1]+arr[x+2][y-1];
	return val;
}

int twst_3(int x, int y){
	int val = arr[x][y]+arr[x][y+1]+arr[x+1][y+1]+arr[x+1][y+2];
	return val;
}

int twst_4(int x, int y){
	int val = arr[x][y]+arr[x][y-1]+arr[x+1][y-1]+arr[x+1][y-2];
	return val;
}

int woo_1(int x, int y){
	int val = arr[x][y]+arr[x+1][y]+arr[x+1][y-1]+arr[x+1][y+1];
	return val;
}

int woo_2(int x, int y){
	int val = arr[x][y]+arr[x][y-1]+arr[x][y+1]+arr[x+1][y];
	return val;
}

int woo_3(int x, int y){
	int val = arr[x][y]+arr[x+1][y]+arr[x+2][y]+arr[x+1][y+1];
	return val;
}

int woo_4(int x, int y){
	int val = arr[x][y]+arr[x+1][y]+arr[x+2][y]+arr[x+1][y-1];
	return val;
}



int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n-3;i++){
		for(int j=0;j<m;j++){
			ans=max(ans,straight_2(i,j));
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m-3;j++){
			ans=max(ans,straight_1(i,j));
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<m-1;j++){
			ans=max(ans,square(i,j));
		}
	}
	for(int i=0;i<n-2;i++){
		for(int j=0;j<m-1;j++){
			ans=max(ans,bigl_1(i,j));
			ans=max(ans,bigl_3(i,j));
		}
	}
	for(int i=0;i<n-2;i++){
		for(int j=1;j<m;j++){
			ans=max(ans,bigl_2(i,j));
			ans=max(ans,bigl_4(i,j));
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<m-2;j++){
			ans=max(ans,bigl_5(i,j));
			ans=max(ans,bigl_7(i,j));
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=2;j<m;j++){
			ans=max(ans,bigl_6(i,j));
			ans=max(ans,bigl_8(i,j));
		}
	}
	for(int i=0;i<n-2;i++){
		for(int j=0;j<m-1;j++){
			ans=max(ans,twst_1(i,j));
		}
	}
	for(int i=0;i<n-2;i++){
		for(int j=1;j<m;j++){
			ans=max(ans,twst_2(i,j));
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<m-2;j++){
			ans=max(ans,twst_3(i,j));
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=2;j<m;j++){
			ans=max(ans,twst_4(i,j));
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=1;j<m-1;j++){
			ans=max(ans,woo_1(i,j));
			ans=max(ans,woo_2(i,j));
		}
	}
	for(int i=0;i<n-2;i++){
		for(int j=0;j<m-1;j++){
			ans=max(ans,woo_3(i,j));
		}
	}
	for(int i=0;i<n-2;i++){
		for(int j=1;j<m;j++){
			ans=max(ans,woo_4(i,j));
		}
	}
	cout<<ans;
}