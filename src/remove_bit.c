#include "lib.h"

void remove_bit(char *test, int i)
{
  (*test) &= ~(1 << i);  
}
