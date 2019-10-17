#include <iostream>
#include <algorithm>
using namespace std;
char enter[101][101];
int N,M,sum=0;
void dfs(int x,int y){
	enter[x][y]='.';
	for(int k=-1;k<=1;k++){
		if(x+k<0||x+k>N-1)
			continue;
		for(int m=-1;m<=1;m++){
			if(y+m<0||y+m>M-1)
			continue;
			if(enter[x+k][y+m]=='W')
				dfs(x+k,y+m);
		}
	}
	return ;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>N>>M;
	for(int i=0;i<N;i++)
		cin>>enter[i];
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++){
			if(enter[i][j]=='W'){
				dfs(i,j);
				sum++;
			}
		}
	cout<<sum<<'\n';
	return 0;
}