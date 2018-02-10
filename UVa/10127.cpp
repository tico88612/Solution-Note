#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	while(cin>>N){
		int val=1,count=1;
		while(val%N){
			val=val%N*10+1;
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}