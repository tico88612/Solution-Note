#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	int N;
	int enter[200002];
	cin>>N;
	for(int i=0;i<N;i++)
		cin>>enter[i];
	sort(enter,enter+N);
	int now,countt;
	for(int i=0;i<N;i++){
		now=enter[i];
		countt=1;
		while(i<N&&now==enter[i+1]){
			i++;
			countt++;
		}
		printf("%d %d\n",now,countt);
	}
	return 0;
}