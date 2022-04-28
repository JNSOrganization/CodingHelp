#include <stdio.h>

void add_element(int value, int set[], int* cp);
void delete_element(int value, int set[], int* cp);
int has_element(int value, int set[], const int* cp);
void print_set(int set[], const int* cp);

void main()
{
  pritnf("Commands : a 5 ==> adds 5 to the set.\n");
  printf("           d 5 ==>  deletes 5 from set.\n");
  printf("           q ==> quit.\n");
  printf("=======================================\n");
  
  while(1)
  {
    int num = 0, arrayCount = 0;
    char command;
    int numArray[100] = {-1};
    
    printf("Enter commands : ");
    while(getchar() != '\n');
    scanf_s("%c %d", &command, &num);
    
    switch(command)
    {
      case 'a':
        add_element(num, numArray, &arrayCount);
        print_set(numArray, &arrayCount);
        break;        
      case 'd':
        delete_element(num, numArray, &arrayCount);
        print_set(numArray, &arrayCount);
        break;        
      case 'q':
        return;
      default:
        printf("wrong commands. try again.\n");
    }
  }
}

void add_element(int value, int set[], int* cp)
{
  int check = has_element(value, set, cp);
  
  if(check == -1)
  {
      printf("%d is already in the set.\n", value);
      return;
  }
  
  set[(*cp)] = value;
  (*cp)++;
}

void delete_element(int value, int set[], int* cp)
{
  int check = has_element(value, set, cp);
  
  if(check != -1)
  {
    for(int j = check + 1; j < (*cp); j++)
      {
        set[j - 1] = set[j];
      }
      
      set[(*cp) - 1] = -1;
      (*cp)--;
      
      return;
  }
  
  printf("%d is not in the set.\n");
}

int has_element(int value, int set[], const int* cp)
{
  for(int i = 0; i < (*cp); i++)
  {
    if(set[i] == value)
      return i;
  }
  
  return -1;
}

void print_set(int set[], const int* cp)
{
  for(int i = 0; i < (*cp); i++)
  {
    printf("%d ", set[i]);
  }
}
