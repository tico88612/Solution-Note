#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
struct Point {
	int no,s;
};
bool operator < (Point a,Point b){
	return a.s>b.s;
}
int main(){
	int M,N,K,L,D;
	cin>>M>>N>>K>>L>>D;
	vector<Point> GapM(M+1);
	for(int i=0;i<M+1;i++){
		GapM[i].no=i;
		GapM[i].s=0;
	}
	vector<Point> GapN(N+1);
	for(int i=0;i<N+1;i++){
		GapN[i].no=i;
		GapN[i].s=0;
	}
	for(int i=0;i<D;i++){
		int AX,AY,BX,BY;
		cin>>AX>>AY>>BX>>BY;
		if(AX==BX){
			GapM[min(AY,BY)].s++;
		}
		else{
			GapN[min(AX,BX)].s++;
		}
	}
	sort(GapN.begin(), GapN.end());
	sort(GapM.begin(), GapM.end());
	int enter[10000]={0};
	for(int i=0;i<K;i++){
		enter[i]=GapN[i].no;
	}
	sort(enter,enter+K);
	for(int i=0;i<K;i++){
		if(i)
			printf(" %d", enter[i]);
		else
			printf("%d", enter[i]);
	}
	printf("\n");
	for(int i=0;i<L;i++){
		enter[i]=GapM[i].no;
	}
	sort(enter,enter+L);
	for(int i=0;i<L;i++){
		if(i)
			printf(" %d", enter[i]);
		else
			printf("%d", enter[i]);
	}
	printf("\n");
	return 0;
}