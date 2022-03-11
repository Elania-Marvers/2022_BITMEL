#include "switch.h"
void        std_switch(char*cnt,
		       size_t len,
		       const char*key,
		       bool cipher)
{
  size_t blen = len * 8;
  size_t i;
  bool previous_bit;

  (void) key;
  if (len == 0)
    return ;
  previous_bit = bunny_bitfield_get(cnt, 0);
  if (cipher)
    for (i = 1; i < blen; ++i)
      if (previous_bit != bunny_bitfield_get(cnt, i))
	{
	  previous_bit = bunny_bitfield_get(cnt, i);
	  bunny_bitfield_set(cnt, i);
	}
      else
	bunny_bitfield_clr(cnt, i);
  else
    for (i = 1; i < blen; ++i)
      {
	if (bunny_bitfield_get(cnt, i) == 1)
	  previous_bit = !previous_bit;
	if (previous_bit)
	  bunny_bitfield_set(cnt, i);
	else
	  bunny_bitfield_clr(cnt, i);
      }
}
