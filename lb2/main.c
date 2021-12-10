#include <stdio.h>
#include <string.h>
#include <locale.h>
#define N 256
void white () {
    printf("\033[0;37m");
}

int v_Slove(char *ps)
{
  char d[]=" .,;:!?\n\0";
  char *pa=ps;
  int i;
  for(i=0;i<9;i++)
  {
    if(*pa==d[i])return 0;
  }
  return 1;
}
int kol_simv(char *ps)
{
   int c=0;
  char *pps=ps;
   while(v_Slove(pps))
   {
      c++;
      pps++;
   }
   return c;
}
int chislo(char *ch)
{
  return (*ch>='0'&&*ch<='9'); 
}
 
int nachalo_chisla(char * ch)
{
  return (chislo(ch)&&(!chislo(ch-1))); 
}

int latin_bukva(char *lat)
{
   return ((*lat>='\x61')&&(*lat<='\x7a'))||((*lat>='\x41')&&(*lat<='\x5a'));
}
int slovo_is_latin_bukv(char *ps)
{
   char*pps=ps;
   int c=kol_simv(ps);
   while(v_Slove(pps)&&latin_bukva(pps))
   {
      --c;
      pps++;
   }
  return   (c==0)?1:0;
}

char *udal_kazd_2_slovo(char *a)
{
  int c,i;
  char *k;
   for(i=0,c=1;a[i]!='\0';i++)
   {
      if(v_Slove(&a[i])&&(i==0||!v_Slove(&a[i-1])))
      {
         if(c%2==0)
         {
            k=&a[i]+kol_simv(&a[i]);
            a[i]='\0';
            strcat(&a[i],k);
         }
         c++;
      }
   }
  return a;
}
void Enter( char A[N]) {
    printf("\nEnter String: \033[0;32m");
    gets(A);
    white();
}
int main(void)
{
   char A[N];
   Enter(A);
   printf("\t\t\t\tResult:\n");
   printf("\tThe line with every second word removed: \033[0;32m%s\n",udal_kazd_2_slovo(A));
   white();
   return (0);
}