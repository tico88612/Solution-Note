#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	int N;
	scanf("%d",&N);
	getchar();
	for(int i=0;i<N*N;i++){
		char s=getchar();
		if(i%N==i/N)
			putchar(s);
	}
	putchar('\n');
	return 0;
}