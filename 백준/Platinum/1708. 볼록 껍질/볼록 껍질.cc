#include <bits/stdc++.h>
using namespace std;

struct point
{
	long long x;
	long long y;
	bool operator < (const point &a){
		return y==a.y? x<a.x : y<a.y;
	}
};
//반시계면 양수
long long ccw(const point &a, const point &b, const point &c){
	return (b.x-a.x)*(c.y-a.y)-(c.x-a.x)*(b.y-a.y);
}

point p[100001];
int s[100001];
int top=0;

long long dist(const point& a, const point& b){
	return (a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);
}
	
bool cmp(const point& a, const point& b){
	long long c=ccw(p[0],a,b);
	if(c==0){
		return dist(p[0],a)<dist(p[0],b);
	}
	return c>0;
}

void push(int n){
	s[top++]=n;
}

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p[i].x>>p[i].y;
	}
	//y좌표가 작은 순으로 정렬 후 반시계방향으로 정렬
	sort(p,p+n);
	sort(p+1,p+n,cmp);
	push(0);
	push(1);
	for(int i=2;i<n;i++){
		while(top>=2&&ccw(p[i],p[s[top-2]],p[s[top-1]])<=0){
			top--;
		}
		push(i);
	}
	cout<<top;
	return 0;
}
