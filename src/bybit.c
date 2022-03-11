#include "bybit.h"

void std_bybit(char*cnt,
	      size_t len)
{
  uint8_t buf[8];
  size_t dit;
  size_t tarbyt;
  size_t oribyt;

  for (dit = 0; dit + 8 < len; dit += 8)
    {
      std_memset(&buf[0], 0, sizeof(buf));
      for (tarbyt = 0; tarbyt < 8; ++tarbyt)
	for (oribyt = 0; oribyt < 8; ++oribyt)
	  buf[tarbyt] |= (cnt[oribyt + dit] & (1 << tarbyt)) ? 1 << oribyt : 0;
      std_memcpy(&cnt[dit], &buf[0], sizeof(buf));
    }
}
