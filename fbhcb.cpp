#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int t, n;
int w[105];
int main()
{
    freopen("lazy_loading.txt", "r", stdin);
	freopen("outputb.txt", "w", stdout);
	scanf("%d",&t);
	for(int ca=1;ca<=t;ca++)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d",&w[i]);

		sort(w,w+n);
		int l=0;
		int r=n-1;
		int sum=0;
		int cnt=0;

		while(l<=r)
		{
			sum=w[r];
			r--;
			if(sum>=50)
				{cnt++;continue;}
			while(l<=r&&sum<50)
				{l++;sum+=w[r+1];}
			if(sum>=50)
				cnt++;
		}

		printf("Case #%d: %d\n",ca,cnt);
	}
}
