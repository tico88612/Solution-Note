#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
#define MAXN 100000
vector<int> v[MAXN];
int mid;
int DFS(int Root){
	if(v[Root].size()==0)
		return 0;
	else if(v[Root].size()==1)
		return DFS(v[Root][0])+1;
	else{
		int max1=0,max2=0;
		for(unsigned int i=0;i<v[Root].size();i++){
			int result=DFS(v[Root][i])+1;
			if(i==0){
				max1=result;
			}
			else if(i==1){
				if(result>max1){
					max2=max1;
					max1=result;
				}
				else{
					max2=result;
				}
			}
			else{
				if(result>max1){
					max2=max1;
					max1=result;
				}
				else if(result>max2){
					max2=result;
				}
			}
		}
		mid = max(mid,max1+max2);
		return max1;
	}
}
int main(){
	_
	int N;
	while(cin>>N){
		mid=0;
		bool isChild[MAXN]={0};
		for(int i=0;i<N;i++){
			v[i].clear();
		}
		for(int i=0;i<N-1;i++){
			int A,B;
			cin>>A>>B;
			v[A].push_back(B);
			isChild[B]=true;
		}
		int Root;
		for(int i=0;i<N;i++){
			if(isChild[i]==false){
				Root=i;
				break;
			}
		}
		int result=DFS(Root);
		result = max(result,mid);
		cout<<result<<'\n';
	}
	return 0;
}