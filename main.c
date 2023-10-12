#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


long long factorial(int n)
{
	long long res=1;
	int i;
	
	for (i=1; i<=n; i++)
	    res = res*i;
	return res;
	
}

long long combination(int n, int r)
{
	if (r>n-r){
		r=n-r;
	}
	
	long long  div1, div2;
	
	div1=factorial(n);
	div2=factorial(n-r)*factorial(r);
	
	return(div1/div2);
	
}

int main(int argc, char *argv[]) {
	
	int n;
	int r;
	long long result;
	
	printf("input n: ");
	scanf("%d", &n);
	
	printf("input r: ");
	scanf("%d", &r);
	
	result=combination(n,r);
	
	printf("Result is %lld \n", result);
	
	
    return 0;
    
}


