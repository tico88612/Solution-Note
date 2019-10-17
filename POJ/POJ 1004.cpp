#include <bits/stdc++.h>
using namespace std;
int main()
{
	double avg=0,enter;
	for(int i=0;i<12;i++){
		cin>>enter;
		avg+=enter;
	}
	avg/=12;
	printf("$%.2f\n",avg);
	return 0;
}