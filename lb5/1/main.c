

#include <stdio.h>
#include <stdlib.h>  
int Mypow(float val, int step)
{
    if (step < 1) return 1;
    return val * Mypow(val, step - 1);
}
int main()
{ int i; int step; float val;


printf("Vedit val\n");
scanf("%f",&val);
metka:
printf("Vedit step\n");
scanf("%d",&step);
if(step<0){
    printf("vedu + znachennyA\n");goto metka;
}

i = Mypow(val, step);
printf("%d vidpovid",i);
return 0;
}