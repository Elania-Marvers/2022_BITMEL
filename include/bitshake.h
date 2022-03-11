#ifndef ___BITSHAKE_H___
#define ___BITSHAKE_H___
#include <stdio.h>
#include <stdbool.h>
#include <sys/types.h>
size_t std_strlen (const char* str);

void std_bitshake(char *cnt,
		 size_t len,
		 char *key,
		 bool cipher);

#endif //___BITSHAKE_H___
