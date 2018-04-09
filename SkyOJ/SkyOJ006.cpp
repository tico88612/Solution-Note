#include <bits/stdc++.h>
using namespace std;
vector <int> v(16);
int bbbb[16];
int ans=0;
int check_leftup[100]={0};
int check_leftdown[100]={0};
int vaild(int row,int col,int N){
	if(bbbb[col])
		return 0;
	if(check_leftup[row+col])
		return 0;
	if(check_leftdown[col-row+N])
		return 0;
	return 1;
}
void dfs(int now,int limit){
	if(now==limit){
		ans++;
		for(int i=0;i<limit-1;i++){
			printf("%d ",v[i]);
		}
		printf("%d\n",v[limit-1]);
		return;
	}
	for(int i=1;i<=limit;i++){
		int legal=vaild(now,i,limit);
		if(legal){
			v[now]=i;
			bbbb[i]=1;
			check_leftup[i+now]=1;
			check_leftdown[i-now+limit]=1;

			dfs(now+1,limit);

			bbbb[i]=0;
			check_leftup[i+now]=0;
			check_leftdown[i-now+limit]=0;
			v[now]=0;
		}
	}
}
int main(){
	int N,T=1;
	while(~scanf("%d",&N)){
		printf("case %d:\n",T++);
		ans=0;
		dfs(0,N);
		printf("%d\n",ans);
	}
	return 0;
}