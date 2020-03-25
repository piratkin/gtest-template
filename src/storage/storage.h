#ifndef STORAGE_H
#define STORAGE_H

#include <stdbool.h>

typedef struct
{
    char name[80];
} storage_config_t;

bool storage_init(const storage_config_t* const conf);
bool storage_do(const void* const params);

#endif // STORAGE_H
