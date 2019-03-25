#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
struct Item {
	int X,Y,W;
	Item(int q,int w,int e){
		X=q;
		Y=w;
		W=e;
	}
};
bool cmp(Item a,Item b){
	return a.W>b.W;
}
int main(){
	int N,M,K;
	cin>>N>>M>>K;
	vector<Item> v;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			int enter;
			cin>>enter;
			if(enter!=0){
				v.emplace_back(i,j,enter);
			}
		}
	}
	sort(v.begin(), v.end(), cmp);
	int ans=0,nowX=0,nowY=0,nowdis=0;
	for(int i=0;i<v.size();i++){
		if(i){
			if(abs(v[i].X-nowX)+abs(v[i].Y-nowY)+v[i].X+nowdis+1>K){
				break;
			}
			else{
				nowdis+=abs(v[i].X-nowX)+abs(v[i].Y-nowY)+1;
				ans+=v[i].W;
				nowX=v[i].X;
				nowY=v[i].Y;
			}
		}
		else{
			if(v[i].X*2+1>K){
				break;
			}
			else{
				nowdis+=v[i].X+1;
				ans+=v[i].W;
				nowX=v[i].X;
				nowY=v[i].Y;
			}
		}
	}
	cout<<ans<<'\n';
	return 0;
}