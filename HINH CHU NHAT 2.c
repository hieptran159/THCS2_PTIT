#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define f(i,x,y) for(int i=x; i<=y; ++i)
#define fn(i,x,y) for(int i=x; i>=y; --i)

int max( int n, int m){
	return (n>m) ? n:m;
}
int min(int n, int m){
	return (n<m) ? n:m;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main()
{	
	int a, b;
	scanf("%d %d", &a, &b);
	for(int i = 1; i <= a; ++i){
		if(i > b) {
			for(int j = i ; j >= (i - b + 1); --j) printf("%d",j);
		}
		else{
			for(int j = i; j <= b; ++j){
				printf("%d",j);
			}
			int k = 1;
			while( k <= i - 1){
				printf("%d",b-k);
				k++;
				
			}
			
		}
		printf("\n");
	}
	
	return 0;
}