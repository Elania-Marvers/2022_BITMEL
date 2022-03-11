#include "memset.h"
void *std_memset (void *dest,
		 const char c,
		 const size_t size)
{
  char *d;
  d = (char *) dest;
  for (int i = 0; i < (int) size; ++i)
    d[i] = c;
  return dest;
}
