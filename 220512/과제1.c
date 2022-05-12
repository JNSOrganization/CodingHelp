#include <stdio.h>

void delete_char(char* Arr, int Arr_size, char DelChar);

int main()
{
  char Arr[] = {'G','O','O','D','M','O','R','N','I','N','G','\0'};
  char del;
  
  printf("삭제 전 : %s", Arr);
  printf("삭제할 문자 : ");
  scanf("%c", &del);
  
  delete_char(Arr, sizeof(Arr) / sizeof(char), del);
  
  printf("삭제 후 : %s", Arr);
}

void delete_char(char* Arr, int Arr_size, char DelChar)
{
  char* CopyArr = (char*)malloc(sizeof(char) * Arr_Size);
  int ArrCount = 0;
  
  for(int i = 0; i < Arr_size; i++)
  {
    if(Arr[i] == DelChar)
    {
      CopyArr[ArrCount] = Arr[i];
      ArrCount++;
    }
  }
  
  for(int i = 0; i < Arr_size; i++)
  {
    if(i < ArrCount)
      Arr[i] = CopyArr[ArrCount];
    else
      Arr[i] = '\0';
  }
}
