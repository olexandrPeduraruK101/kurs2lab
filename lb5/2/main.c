#include <stdio.h>
#include <stdlib.h>  
double fact(int n) {
if (n<=1) return 1;
return (fact(n-1)*n); }
void main() {
int n; double value;int k; double valuek;float result;
printf("N=");
scanf("%d",&n);
printf("k=");
scanf("%d",&k);
k=n-k;
valuek=fact(k);
value=fact(n);
result=value/valuek;
printf("\n result = %f",result);
getch();
}