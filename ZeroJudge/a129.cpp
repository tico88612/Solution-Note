#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
struct Edge{
	int from;
	int to;
	int w;
};
bool operator < (Edge &a,Edge &b){
	return a.w < b.w; 
}
int num[100001],parent[100001];
int findParent(int a){
	while(a!=parent[a]){
		a=parent[a];                  
	}    
	return a;   
}
int main(){
	_
	int N,M;
	while(cin>>N>>M){
		vector<Edge> E(M);
		for(int i=0;i<M;i++){
			cin>>E[i].from>>E[i].to>>E[i].w;
		}
		for(int i=0;i<N;i++){
			parent[i]=i;
			num[i]=1;
		}
		sort(E.begin(), E.end());
		long long int result=0,numEdge=0;
		for(int i=0;i<M && numEdge<N;i++){
			int a,b;
			a = findParent(E[i].from);
			b = findParent(E[i].to);
			if(a!=b){
				if(num[a]>num[b]){
					parent[b]=a;
					num[a]+=num[b];
				}
				else{
					parent[a]=b;
					num[b]+=num[a];
				}
				result+=E[i].w;
				numEdge++; 
			}
		}
		if(numEdge==N-1){
			cout<<result<<'\n';
		}
		else{
			cout<<"-1"<<'\n';
		}
	}
	
	return 0;
}