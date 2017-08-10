#include <iostream>
using namespace std;
int map[6][6]={0},road[9];
void init(){
	map[0][1]++;
	map[0][2]++;
	map[0][4]++;

	map[1][0]++;
	map[1][2]++;
	map[1][4]++;

	map[2][0]++;
	map[2][1]++;
	map[2][3]++;
	map[2][4]++;

	map[3][2]++;
	map[3][4]++;

	map[4][0]++;
	map[4][1]++;
	map[4][2]++;
	map[4][3]++;
}
void dfs(int x,int d){
	road[d]=x;
	if(d==8){
		for(int i=0;i<9;i++)
			cout<<road[i]+1;
		cout<<endl;
		road[d]=0;
		return ;
	}
	for(int i=0;i<5;i++){
		if(map[x][i]){
			map[x][i]=0;
			map[i][x]=0;
			dfs(i,d+1);
			map[x][i]=1;
			map[i][x]=1;
		}
	}
	road[d]=0;
	return;
}
int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	init();
	dfs(0,0);
	return 0;
}
