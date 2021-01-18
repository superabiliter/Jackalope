/*
Developed by ltdzzzz aka nikeceo
*/
#pragma once

#include <stdio.h>
#include <stdlib.h>

#include <inttypes.h>

class TnefPacker{
public:
  size_t TnefPacking(char * tnef,char *eml);
  size_t TnefUnpacking(char *eml, char *tnef);
};

