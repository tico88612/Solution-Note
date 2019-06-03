#pragma GCC optimize ("O2")
#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FZ(n) memset((n),0,sizeof(n))
#define FMO(n) memset((n),-1,sizeof(n))
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ALL(x) begin(x),end(x)
#define SZ(x) ((int)(x).size())
#define REP(i,a,b) for (int i = a; i < b; i++)

// Let's Fight!

typedef struct Node
{
	int Num;
	Node *prev, *next;
}Node;

vector<Node*> Query;

int main() {
	_
	int N;
	cin >> N;
	Query.resize(N + 1, NULL);
	REP(i, 1, N + 1){
		Query[i] = new Node;
		Query[i] -> prev = NULL;
		Query[i] -> next = NULL;
		Query[i] -> Num = i;
	}
	
	int Now_Head = 1;
	REP(i, 2, N + 1){
		int K, P;
		cin >> K >> P;
		if(P){
			if(Query[K] -> next){
				Query[K] -> next -> prev = Query[i];
			}
			Query[i] -> next = Query[K] -> next;
			Query[K] -> next = Query[i];
			Query[i] -> prev = Query[K];
		}
		else{
			if(Query[K] -> prev){
				Query[K] -> prev -> next = Query[i];
			}
			Query[i] -> prev = Query[K] -> prev;
			Query[K] -> prev = Query[i];
			Query[i] -> next = Query[K];
			if(Now_Head == K){
				Now_Head = i;
			}
		}
		
	}
	int M;
	cin >> M;
	while( M-- ){
		int enter;
		cin >> enter;
		if(Query[enter]){
			if(Query[enter] -> prev){
				Query[enter] -> prev -> next = Query[enter] -> next; 
			}
			if(Query[enter] -> next){
				Query[enter] -> next -> prev = Query[enter] -> prev; 
			}
			if(Now_Head == enter){
				Now_Head = Query[enter] -> next -> Num;
			}
			delete Query[enter];
			Query[enter] = NULL;
		}
	}
	Node *Head = Query[Now_Head];
	while(Head){
		cout << Head -> Num << " \n"[!(Head -> next)];
		Head = Head -> next;
	}
	REP(i, 1, N + 1){
		delete Query[i];
		Query[i] = NULL;
	}
    return 0;
}