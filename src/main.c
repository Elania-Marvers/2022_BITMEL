#include "lib.h"



int main ()
{
  char test = 0xA1;

  set_bit(&test, 1);
  remove_bit(&test, 1);


  char t3 = swap_bit(test);
  
  
  for (int i = 7; i >= 0; --i)
    printf("%d", getbit(test, i));
  printf("\n");

  for (int i = 7; i >= 0; --i)
    printf("%d", getbit(t3, i));
  printf("\n"); 
}
