#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	int query[10001]={0};
	int total=1;
	for(int i=1;total<=10000;i++){
		int TEST=i,fail=false;
		while(TEST&&!fail){
			if(TEST%10==4)
				fail=true;
			TEST/=10;
		}
		if(!fail)
			query[total++]=i;
	}
	string enter;
	int N;
	while(cin>>enter>>N){
		if(enter[0]=='T'){
			cout<<query[N]<<'\n';
		}
		else{
			int minn=0,maxx=10000;
			while(minn+1<maxx){
				int mid=(minn+maxx)/2;
				if(query[mid]>N)
					maxx=mid;
				else
					minn=mid;
			}
			cout<<minn<<'\n';
		}
	}
	return 0;
}