#include <bits/stdc++.h>
using namespace std;
char enter[52][52];
char query[56];
bool solve(int x,int y,int m,int n,int strn){
	bool ans=false;
	int moveX[8]={1,-1,0,0,1,1,-1,-1};
	int moveY[8]={0,0,1,-1,1,-1,1,-1};
	for(int i=0;i<8&&ans==false;i++){
		switch(i){
			case 0:
				if(m-x<strn)
					continue;
			break;
			case 1:
				if(x+1<strn)
					continue;
			break;
			case 2:
				if(n-y<strn)
					continue;
			break;
			case 3:
				if(y+1<strn)
					continue;
			break;
			case 4:
				if(min(m-x,n-y)<strn)
					continue;
			break;
			case 5:
				if(min(m-x,y+1)<strn)
					continue;
			break;
			case 6:
				if(min(x+1,n-y)<strn)
					continue;
			break;
			case 7:
				if(min(x+1,y+1)<strn)
					continue;
			break;
		}
		int sx=x,sy=y,b=1;
		for(int j=0;j<strn&&b;j++){
			if(enter[sx][sy]!=query[j])
				b=0;
			sx+=moveX[i];
			sy+=moveY[i];
		}
		if(b)
			ans=true;
	}
	return ans;
}
int main(){
	int T,m,n;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&m,&n);
		for(int i=0;i<m;i++){
			scanf("%s",enter[i]);
			for(int j=0;j<n;j++){
				if(isalpha(enter[i][j])){
					enter[i][j]=tolower(enter[i][j]);
				}
			}
		}
		int Q;
		scanf("%d",&Q);
		while(Q--){
			int targetX=-1,targetY=-1;
			scanf("%s",query);
			int strn=strlen(query);
			for(int i=0;i<strn;i++){
				if(isalpha(query[i])){
					query[i]=tolower(query[i]);
				}
			}
			bool ans=false;
			for(int i=0;i<m&&ans==false;i++){
				for(int j=0;j<n&&ans==false;j++){
					if(enter[i][j]==query[0]){
						ans=solve(i,j,m,n,strn);
						if(ans){
							targetX=i+1;
							targetY=j+1;
						}
					}
				}
			}
			printf("%d %d\n",targetX,targetY);
		}
		if(T>0)
			printf("\n");
	}
	return 0;
}