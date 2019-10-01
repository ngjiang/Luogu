#include<stdio.h>
int main(){
	int digit[32], p, nn, n, b;
	scanf("%d %d", &nn, &b);
	n = nn, p=0;
	if(n==0) digit[p++] = 0;
	while(n!=0){
		digit[p] = (n % (-b) + (-b)) % (-b);
		n = (n - digit[p]) / b;
		p++; 
	}
	printf("%d=",nn);
	for(int i=p-1; i>=0; i--)
		if(digit[i] < 10) printf("%d",digit[i]);
		else printf("%c", digit[i]-10+'A');
	printf("(base%d)\n", b);
	return 0;
}
