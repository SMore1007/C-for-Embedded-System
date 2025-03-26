#include<stdio.h>
#include<string.h>
#include<ctype.h>
int count(char *arr , int C);
int main()
{
    char c;
    printf("Which charactor you want to check\n");
    scanf("%c", &c);

    char str[50] = "censadsgf afaafdata logersfa afafa aff afafa";
    int len = strlen(str);
    char *PtrData = str;
    int result = count(PtrData, c);
    printf("The %c comes for %d times: \n",c,result);
    return 0;
}

int count(char *arr , int C)
{
  int n = 0;
  while (*arr != '\0')
  {
      if(*arr == C)
      {
        n++;
      }
      arr+= sizeof(char);
  }
  return n;
}