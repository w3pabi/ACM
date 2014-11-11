#include <stdio.h>
#include <math.h>

int turret(int x1, int y1, int r1, int x2, int y2, int r2)
{
	int r3;
	r3= pow(x1-x2,2) + pow(y1-y2,2);
	if(r3==0) {
		return r1==r2? -1: 0;
	} 
	else {
		if( r3==pow(r1+r2,2) || 
			r3==pow(r1-r2,2) || 
	 		r3==pow(r2-r1,2) )return 1;
		else if(r3>pow(r1+r2,2)) return 0;
   		else return 2;
	}
}

int main()
{
	int tsc;
	int x1[10001], y1[10001], r1[10001], x2[10001], y2[10001], r2[10001];
	
	scanf("%d", &tsc);
	for(int i=0; i<tsc; i++)
	{
		scanf("%d %d %d %d %d %d", &x1[i], &y1[i], &r1[i], &x2[i], &y2[i], &r2[i]);
	}
	for(int i=0; i<tsc; i++)
	{
		printf("%d\n", turret(x1[i], y1[i], r1[i], x2[i], y2[i], r2[i]));
	}

}
