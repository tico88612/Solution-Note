#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int enter[3];
	scanf("%d %d %d",&enter[0],&enter[1],&enter[2]);
	bool noneee=1;
	for(int i=1;i<=333;i++){
		vector<bool> NN(10,0);
		NN[0]=1;
		int enterN[3];
		for(int j=0;j<3;j++){
			enterN[j]=i*enter[j];
		}
		bool ans=1;
		for(int j=0;j<3&&ans;j++){
			int sss=enterN[j];
			while(sss&&ans){
				if(NN[sss%10]){
					ans=0;
				}
				else{
					NN[sss%10]=1;
				}
				sss/=10;
			}
		}
		for(int j=0;j<10;j++)
			if(!NN[j])
				ans=0;
		if(ans){
			printf("%d %d %d\n",enterN[0],enterN[1],enterN[2]);
			noneee=0;
		}
	}
	if(noneee)
		printf("No!!!\n");
	return 0;
}