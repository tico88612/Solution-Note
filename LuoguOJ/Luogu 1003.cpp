#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
struct Point
{
	int sx,sy;
	int tx,ty;
};
int main(){
	int N;
	cin>>N;
	vector<Point> enter(N);
	for(int i=0;i<N;i++){
		int a,b,x,y;
		cin>>a>>b>>x>>y;
		enter[i].sx=a;
		enter[i].sy=b;
		enter[i].tx=a+x;
		enter[i].ty=b+y;
	}
	int xx,yy;
	cin>>xx>>yy;
	int ans=-1;
	for(int i=0;i<N;i++){
		if(enter[i].sx<=xx&&enter[i].tx>=xx&&enter[i].sy<=yy&&enter[i].ty>=yy){
			ans=i+1;
		}
	}
	cout<<ans<<'\n';
	return 0;
}