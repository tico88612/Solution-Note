#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	int N;
	int enter[51][51];
	cin>>N;
	int choice;
	cin>>choice;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			cin>>enter[i][j];
		}
	}
	int movex[4]={1,0,-1,0};
	int movey[4]={0,-1,0,1};
	int startx=(choice==0||choice==1)?1:N,starty=(choice==0||choice==3)?N:1;
	int nowmove=4-choice;
	int now=N*N-1;
	int print[2500];
	print[now--]=enter[starty][startx];
	for(int i=N-1;i>0;i--){
		if(i==N-1){
			for(int j=0;j<3;j++){
				for(int k=0;k<i;k++){
					starty+=movey[nowmove%4];
					startx+=movex[nowmove%4];
					print[now--]=enter[starty][startx];
					//printf("%d\n",print[now+1]);
				}
				nowmove++;
			}
		}
		else{
			for(int j=0;j<2;j++){
				for(int k=0;k<i;k++){
					starty+=movey[nowmove%4];
					startx+=movex[nowmove%4];
					print[now--]=enter[starty][startx];
					//printf("%d\n",print[now+1]);
				}
				nowmove++;
			}
		}
	}
	for(int i=0;i<N*N;i++)
		printf("%d",print[i]);
	printf("\n");
	return 0;
}