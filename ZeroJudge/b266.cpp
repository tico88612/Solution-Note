#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
	_
	int R,C,M;
	while(cin>>R>>C>>M){
		int enter1[10][10]={0},enter2[10][10]={0};
		for(int i=0;i<R;i++){
			for(int j=0;j<C;j++){
				cin>>enter1[i][j];
			}
		}
		int print=0;
		int choice[20];
		for(int i=0;i<M;i++){
			cin>>choice[i];
		}
		for(int i=M-1;i>=0;i--){
			if(choice[i]==1){
				if(print==0){
					for(int j=0;j<R/2;j++){
						for(int k=0;k<C;k++){
							swap(enter1[j][k],enter1[R-j-1][k]);
						}
					}
				}
				else{
					for(int j=0;j<R/2;j++){
						for(int k=0;k<C;k++){
							swap(enter2[j][k],enter2[R-j-1][k]);
						}
					}
				}
			}
			else{
				if(print==0){
					//enter1->enter2
					for(int j=0;j<R;j++){
						for(int k=0;k<C;k++){
							swap(enter1[j][k],enter2[C-k-1][j]);
						}
					}
					swap(R,C);
					print=1;
				}
				else{
					//enter2->enter1
					for(int j=0;j<R;j++){
						for(int k=0;k<C;k++){
							swap(enter2[j][k],enter1[C-k-1][j]);
						}
					}
					swap(R,C);
					print=0;
				}
			}
		}
		printf("%d %d\n",R,C);
		if(print==0){
			//enter1
			for(int i=0;i<R;i++){
				for(int j=0;j<C;j++){
					if(j)
						printf(" %d",enter1[i][j]);
					else
						printf("%d",enter1[i][j]);
				}
				printf("\n");
			}
		}
		else{
			//enter2
			for(int i=0;i<R;i++){
				for(int j=0;j<C;j++){
					if(j)
						printf(" %d",enter2[i][j]);
					else
						printf("%d",enter2[i][j]);
				}
				printf("\n");
			}
		}
	}
	// Ready-Set-Code!
	return 0;
}