#include "strlen.h"
size_t std_strlen (const char *str)
{
  return (str[0] == 0) ? 0 : 1 + std_strlen (&str[1]);
}
