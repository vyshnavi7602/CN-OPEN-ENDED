#include<stdio.h>
#include<string.h>

void main()
{
  int i, temp, k;
  char inp[20];
  
  k = 3; //key value is set to 3
  
  printf("ENTER MESSAGE:\n");
  scanf("%s", inp);
  
  printf("CIPHER TEXT IS:\n");
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
    printf("%c", temp + 97 +k);
 }
 
}
