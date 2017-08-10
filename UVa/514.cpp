#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	while(cin>>N){
		if(N==0) break;
		int enter[1000+5]={0};
		while(cin>>enter[0]){
			if(enter[0]!=0){
				for(int i=1;i<N;i++)
					cin>>enter[i];
				stack<int> st;
				int indexx=0;
				for(int i=1;i<=N;i++){
					st.push(i);
					while(st.top()==enter[indexx]){
						
						st.pop();
						indexx++;
						if(st.empty())
							break;
					}
				}
				if(indexx==N)
					cout<<"Yes"<<endl;
				else
					cout<<"No"<<endl;
			}
			else{
				cout<<endl;
				break;
			}
		}
	}
}