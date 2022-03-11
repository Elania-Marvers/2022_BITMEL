#include "bitshake.h"
void std_bitshake(char *cnt,
		 size_t len,
		 char *key,
		 bool cipher)
{
  size_t keylen = std_strlen (key);
  size_t bit;
  size_t idx;
  ssize_t i;
  bool a;
  bool b;

  if (cipher)
    for (i = 0; i < (ssize_t)len; ++i)
      {
	bit = key[(i) % keylen] & 0x7;
	idx = (key[(i) % keylen] >> 3) & 0x1F;

	a = (cnt[i] >> bit) & 0x1;
	b = (cnt[(i + idx) % len] >> bit) & 0x1;

	if (b)
	  cnt[i] |= 1 << bit;
	else
	  cnt[i] &= ~(1 << bit);

	if (a)
	  cnt[(i + idx) % len] |= 1 << bit;
	else
	  cnt[(i + idx) % len] &= ~(1 << bit);
      }
  else
    for (i = len - 1; i >= 0; --i)
      {
	bit = key[(i) % keylen] & 0x7;
	idx = (key[(i) % keylen] >> 3) & 0x1F;

	a = (cnt[i] >> bit) & 0x1;
	b = (cnt[(i + idx) % len] >> bit) & 0x1;

	if (b)
	  cnt[i] |= 1 << bit;
	else
	  cnt[i] &= ~(1 << bit);

	if (a)
	  cnt[(i + idx) % len] |= 1 << bit;
	else
	  cnt[(i + idx) % len] &= ~(1 << bit);
      }
}
