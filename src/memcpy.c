#include "memcpy.h"
void *std_memcpy (void *dest,
		 const void *src,
		 const size_t ns)
{
  char *d, *s;
  d = (char *) dest;
  s = (char *) src;
  for (int i = 0; i < (int) ns; ++i)
    d[i] = s[i];
  return dest;
}
