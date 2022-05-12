#include <stdio.h>

void reverse_array(int* original, int length);

int main()
{
  printf("Enter a sequence of positive integers.\n");
  
  int* original = (int*)malloc(sizeof(int));
  int lenght = 0;
  for(int lenght = 0; lenght < 20; lenght++)
  {
    original = (int*)realloc(original, sizeof(int) * (i + 1));
    scanf("%d ", &origin[lenght]);
    
    if(origin[lenght] <= 0)
      break;
  }
  
  reverse_array(original, lenght);
  
  free(original);
  
  return 0;
}

void reverse_array(int* original, int length)
{
  int* pWalk = original;
  int* pEnd = original + length - 1;
  
  for(;pWalk >= pEnd; pWalk--)
    printf("%d ", *pWalk);
}
