#include "lib.h"


void set_bit(char *test, int i)
{
  (*test) |= 1 << i;  
}
