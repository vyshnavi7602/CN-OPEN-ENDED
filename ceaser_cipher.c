#include<stdio.h>
#include<string.h>

void main()
{
  int i, temp;
  char inp[20];
  printf("INPUT MESSAGE IS: %s", inp);
  
  for(i = 0; i < strlen(inp); i++)
  {
    temp = inp[i] - 97;
    if(temp > 22)
    {
      if(temp == 23)
        temp = -3;
      else if(temp == 24)
        temp = -2;
      else if(temp == 25)
        temp = -1;
    }
    printf("CIPHER TEXT IS: %c\t", temp + 97 +3);
 }
 
}
