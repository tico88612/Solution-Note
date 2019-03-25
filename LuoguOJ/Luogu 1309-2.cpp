#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
struct Item {
    int idd;
    long long int w,score;
};
bool cmp(Item a,Item b){
    if(a.score==b.score)
        return a.idd<b.idd;
    return a.score>b.score;
}
int N;
vector<Item> v,win,lose;
void merge(){
	int i,nox=0,noy=0;
	for(i=0;i<2*N&&nox!=N&&noy!=N;i++){
		if(win[nox].score>lose[noy].score){
			v[i]=win[nox++];
		}
		else if(win[nox].score<lose[noy].score){
			v[i]=lose[noy++];
		}
		else{
			if(win[nox].idd<lose[noy].idd){
				v[i]=win[nox++];
			}
			else{
				v[i]=lose[noy++];
			}
		}
	}
	while(nox!=N){
		v[i]=win[nox++];
		i++;
	}
	while(noy!=N){
		v[i]=lose[noy++];
		i++;
	}
}
int main(){
	_
    int R,Q;
    cin>>N>>R>>Q;
    v.resize(2*N);
    win.resize(N);
    lose.resize(N);
    for(int i=0;i<2*N;i++){
        v[i].idd=i+1;
        cin>>v[i].score;
    }
    for(int i=0;i<2*N;i++)
        cin>>v[i].w;
    sort(v.begin(), v.end(), cmp);
    for(int i=0;i<R;i++){
        for(int i=0;i<N;i++){
            if(v[i*2].w>v[i*2+1].w){
            	v[i*2].score++;
            	win[i]=v[i*2];
                lose[i]=v[i*2+1];
            }
            else if(v[i*2].w<v[i*2+1].w){
                v[i*2+1].score++;
            	win[i]=v[i*2+1];
                lose[i]=v[i*2];
            }
        }
        merge();
    }
    cout<<v[Q-1].idd<<'\n';
	return 0;
}