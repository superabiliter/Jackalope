/*
Developed by ltdzzzz aka nikeceo
*/

#include <string.h>
#include <stdlib.h>
#include "tnefutils.h"

size_t TnefPacker::TnefUnpacking(char *eml, size_t size ,char *tnef){
    if (tnef){
        free(tnef);
    }
    char *src = eml + prefix_l;
    size_t l = size - suffix_l;
    tnef = (char *)malloc(l+1);
    memcpy(tnef,src,l);
    return l - prefix_l;
}


size_t TnefPacker::TnefPacking(char *tnef, size_t size ,char *eml){
    if (eml){
        free(eml);
    }
    size_t l = size + prefix_l + suffix_l;
    eml = (char *)malloc(l+1);
    memcpy(eml,prefix,prefix_l);
    memcpy(eml+prefix_l,tnef,size);
    memcpy(eml+prefix_l+size,suffix,suffix_l);
    return l;
}
