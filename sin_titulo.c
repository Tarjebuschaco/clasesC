#include <stdio.h>

int j,x,a,b;
int main()
{
	for (j=2;j<=541;j++){
	b=0;
	
	for (a=1;a<=j;a++){
		if (j%a==0){
		b++;
		}
	}
	
		if (b<=2){
		printf ("%d\n", j);
		
		}
	}
}
