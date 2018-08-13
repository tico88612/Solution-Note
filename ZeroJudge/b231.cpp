#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
struct b231 {
	int A,B;
}data[1001];
bool operator <(b231 a,b231 b){
	return a.B > b.B;
}
int main(){
	int N;
	while(cin>>N){
		for(int i=0;i<N;i++)
			cin>>data[i].A>>data[i].B;
		sort(data,data+N);
		int toa=0,ans=0;
		for(int i=0;i<N;i++){
			toa+=data[i].A;
			ans=max(ans,toa+data[i].B);
		}
		cout<<ans<<'\n';
	}
	return 0;
}