#ifndef ___SWITCH_H___
#define ___SWITCH_H___
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

# define bunny_bitfield_set(bf, bit)\
  (((char*)bf)[(size_t)(bit) / 8] |= (1 << ((size_t)(bit) % 8)))
# define bunny_bitfield_clr(bf, bit)\
  (((char*)bf)[(size_t)(bit) / 8] &= ~(1 << ((size_t)(bit) % 8)))
# define bunny_bitfield_get(bf, bit)\
  !!(((char*)bf)[(size_t)(bit) / 8] & (1 << ((size_t)(bit) % 8)))

size_t std_strlen (const char *str);

void        std_switch(char *cnt,
		       size_t len,
		       const char *key,
		       bool cipher);


#endif //___SWITCH_H___
