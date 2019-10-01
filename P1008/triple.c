#include<stdio.h>
int check(int a){
	int b, c, count[9];
	//printf("%d\t", a);
	b = a * 2;
	c = a * 3;
	for(int i=0; i<10; i++) count[i] = 0;
	while(a>0)count[a%10]++, a/=10;
	while(b>0)count[b%10]++, b/=10;
	while(c>0)count[c%10]++, c/=10;
	//for(int i=0; i<10; i++) printf("%d",count[i]);
	//printf("\n");
	for(int i=1; i<10; i++) if(count[i] != 1) return 0;
	return 1;
}
int main(){
	for(int i=0; i<334; i++) if(check(i))
		printf("%d %d %d\n", i, i*2, i*3);
	return 0;
}
