#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	double fish=7,total=0,query[668]={0};
	for(int i=1;i<668;i++){
		total+=fish;
		fish*=0.98;
		query[i]=total;
		// cout<<total<<'\n';
	}
	double s,x;
	cin>>s>>x;
	double up=s-x,down=s+x;
	for(int i=0;i<668;i++){
		if(query[i]>=up){
			if(query[i+1]<=down){
				cout<<"y"<<'\n';
			}
			else{
				cout<<"n"<<'\n';
			}
			break;
		}
	}
	return 0;
}