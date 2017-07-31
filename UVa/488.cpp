#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--){
		int N,M;
		cin>>N>>M;
		for(int q=0;q<M;q++){
			int plus=1;
			for(int i=1;i>=1;i+=plus){
				for(int j=0;j<i;j++){
					printf("%d",i);
				}
				printf("\n");
				if(i==N){
					plus=-1;
				}
			}
			if((T!=0)||(T==0&&q!=M-1)){
				printf("\n");
			}
		}
	}
}