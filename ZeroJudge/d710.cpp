#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
struct d710 {
	string brand;
	string color;
};
int main(){
	int N,M;
	while(cin>>N>>M){
		vector<d710> enter(N);
		for(int i=0;i<N;i++){
			cin>>enter[i].brand>>enter[i].color;
		}
		for(int i=0;i<M;i++){
			string a,b;
			cin>>a>>b;
			if(a=="brand"){
				for(int j=0;j<N;j++){
					if(b==enter[j].brand)
						cout<<enter[j].brand<<" "<<enter[j].color<<'\n';
				}
			}
			else{
				for(int j=0;j<N;j++){
					if(b==enter[j].color)
						cout<<enter[j].brand<<" "<<enter[j].color<<'\n';
				}
			}
		}
		cout<<'\n';
	}
	return 0;
}