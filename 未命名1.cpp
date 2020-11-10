#include<stdio.h>
int main()
{
	int n,i;
	float u,v,w,l,s1,s2,s,h,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f %f %f %f",&u,&v,&w,&l);
		t=l/(u+v);
		s=w*t;
		printf("%.3f",s);
	}
	return 0;
}

