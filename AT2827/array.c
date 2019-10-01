/*
Idea: 
Recursion: f(n) = max{f(i) | i<n && a[i]<a[n]}. 
However the size of the array may be too big. A data structure with O(ln(n)) maintenance is needed.
A possible solution: 1) Sort a[]; 2) Prepare a segment tree-like binary treestructure; 3) Recursion.
Final time complexity: O(n ln n)
*/

#include <stdio.h>
int main(){
	int n, a[100001], f[100001];
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", a+i);
	/* To be continued... */
}
