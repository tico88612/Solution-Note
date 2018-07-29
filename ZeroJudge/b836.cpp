#include<bits/stdc++.h>
//此Code複雜度極高，隨時都可能被TLE
int main()
{
	long long int n,m;
	while(~scanf("%lld %lld",&n,&m))
	{
		long long int i=0,sum=0;
		if(m==0){
			printf("Go Kevin!!\n");
			continue;
		}
		for(i=1;sum<n;i++)
			sum=(2*1+(i-1)*m)/2;
		if(sum==n)
			printf("Go Kevin!!");
		else
			printf("No Stop!!");
		printf("\n");
	}
	return 0;
}