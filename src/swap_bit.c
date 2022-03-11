#include "lib.h"

char swap_bit(char test)
{
  return ((test & 0xF0) >> 4) | ((test & 0x0F) << 4);
}
