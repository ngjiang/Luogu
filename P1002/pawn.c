#include<stdio.h>
int n, m, x, y;
long long int c[32][32];
int inside(int xx, int yy){
	if(xx<0||xx>n) return 0;
	if(yy<0||yy>m) return 0;
	return 1;
}
int main(){
	scanf("%d %d %d %d", &n, &m, &x, &y);
	for(int i=0; i<=n; i++) for(int j=0; j<=m; j++) c[i][j] = 0;
	c[x][y] = -1;
	for(int abs_dx = 1; abs_dx <= 2; abs_dx++)
		for(int sign_dx = -1; sign_dx <= 1; sign_dx += 2)
			for(int sign_dy = -1; sign_dy <= 1; sign_dy += 2){
				int abs_dy, dx, dy;
				abs_dy = 3 - abs_dx;
				dx = sign_dx * abs_dx;
				dy = sign_dy * abs_dy;
				if(inside(x+dx, y+dy)) c[x+dx][y+dy] = -1;
			}
	c[n][m] = 1;
	for(int i=n; i>=0; i--)
		for(int j=m; j>=0; j--){
			if(i == n && j == m) continue;
			if(c[i][j]<0) continue;
			if(inside(i+1,j) && c[i+1][j] >= 0)
				c[i][j] += c[i+1][j];
			if(inside(i,j+1) && c[i][j+1] >= 0)
				c[i][j] += c[i][j+1];
		}
	printf("%lld\n", c[0][0]);
	//for(int i=0;i<=n;i++) {for(int j=0;j<=m;j++) printf("%4d", c[i][j]);printf("\n");}
	return 0;
}
