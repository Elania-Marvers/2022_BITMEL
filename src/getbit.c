#include "lib.h"

size_t getbit(char c, int i)
{
  return ((c >> i) & 1);
}
