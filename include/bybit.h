#ifndef ___BYBIT_H___
#define ___BYBIT_H___
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <sys/types.h>
size_t std_strlen (const char *str);

void *std_memset (void *dest,
		  const char c,
		  const size_t size);

void *std_memcpy(void *dest,
		 const void *src,
		 const size_t ns);

void std_bybit(char *cnt,
	       size_t len);

#endif //___BYBIT_H___
