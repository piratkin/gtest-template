#ifndef TYPES_H
#define TYPES_H

#include <stdint.h>  /* uintX_t */
#include <stddef.h>  /* size_t */
#include <stdbool.h> /* bool */

#ifdef UNIT_TEST
    #define STATIC
#else
    #define STATIC static
#endif

#endif // TYPES_H
