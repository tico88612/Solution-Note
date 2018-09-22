#include <bits/stdc++.h>
using namespace std;
void hannoi(int n,char A,char B,char C){
	if(n==0) return;
	hannoi(n-1,A,C,B);
	printf("Move ring %d from %c to %c\n",n,A,C);
	hannoi(n-1,B,A,C);
}
int main(){
	int N;
	while(cin>>N){
		hannoi(N,'A','B','C');
	}
	return 0;
}