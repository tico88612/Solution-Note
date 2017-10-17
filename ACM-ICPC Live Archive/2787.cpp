#include <bits/stdc++.h>
using namespace std;
int main()
{
	int enter[20],N=0;
	cin>>enter[0];
	while(enter[0]!=-1){
		int ans=0;
		while(++N){
			cin>>enter[N];
			if(enter[N]==0)
				break;
		}
		sort(enter,enter+N);
		for(int i=0;i<N-1;i++){
			for (int j = i+1; j < N; j++)
			{
				if(enter[i]*2==enter[j])
					ans++;
			}
		}
		cout<<ans<<endl;
		cin>>enter[0];
		N=0;
	}
	return 0;
}