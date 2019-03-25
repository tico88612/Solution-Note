#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// https://www.luogu.org/discuss/show/58229
// https://www.luogu.org/discuss/show/42573
struct Item {
	char alpha;
	int valid;//0 Not Enter 1 O(1) 2 O(N)
};
int main(){
	_
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		int Line;
		int TimeN=0;
		cin>>Line;
		string TimeCom;
		cin>>TimeCom;
		if(TimeCom[2]=='1')
			TimeN=0;
		else
			for(int j=4;j<(int)TimeCom.length()-1;j++)
				TimeN=TimeN*10+(TimeCom[j]-'0');
		cin.ignore();
		int realTimeN=0,ErrorCode=0;
		vector<Item> S;
		set<char> usedChar;
		for(int j=0;j<Line;j++){
			getline(cin,TimeCom);
			if(!ErrorCode){
				if(TimeCom[0]=='E'){
					if(S.empty())
						ErrorCode=1;
					else{
						int nowTimeN=0;
						for(int k=0;k<(int)S.size();k++){
							if(S[k].valid==2){
								nowTimeN++;
							}
							else if(S[k].valid==1){
								continue;
							}
							else{
								break;
							}
						}
						realTimeN=max(realTimeN,nowTimeN);
						char del=S.back().alpha;
						usedChar.erase(del);
						S.pop_back();
					}
				}
				else{
					if(usedChar.find(TimeCom[2])==usedChar.end()){
						usedChar.insert(TimeCom[2]);
						if(TimeCom[4]=='n'){
							Item q;
							q.alpha=TimeCom[2];
							q.valid=0;
							if(TimeCom[6]=='n')
                                q.valid=1;
							S.emplace_back(q);
						}
						else{
							Item q;
							q.alpha=TimeCom[2];
							int xjudge=0,yjudge=0;
							for(int k=4;k<(int)TimeCom.length();k++){
								while(isdigit(TimeCom[k])&&k<(int)TimeCom.length()){
									xjudge=xjudge*10+(TimeCom[k]-'0');
									k++;
								}
								if(k+1<(int)TimeCom.length()&&isdigit(TimeCom[k+1])){
									k++;
									while(isdigit(TimeCom[k])&&k<(int)TimeCom.length()){
										yjudge=yjudge*10+(TimeCom[k]-'0');
										k++;
									}
									// printf("%d %d\n",xjudge,yjudge);
									if(xjudge<yjudge)
										q.valid=1;
									else
										q.valid=0;
								}
								else if(k+1<(int)TimeCom.length()&&TimeCom[k+1]=='n'){
									q.valid=2;
								}
							}
							S.emplace_back(q);
						}
					}
					else
						ErrorCode=1;
				}
			}
		}
		if(S.size()>0)
			ErrorCode=1;
		if(ErrorCode)
			cout<<"ERR"<<'\n';
		else if(TimeN==realTimeN)
			cout<<"Yes"<<'\n';
		else
			cout<<"No"<<'\n';
	}
	return 0;
}