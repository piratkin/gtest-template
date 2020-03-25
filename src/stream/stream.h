#ifndef STREAM_H
#define STREAM_H

#include <stdbool.h>

typedef struct
{
    char name[80];
} stream_config_t;

bool stream_init(const stream_config_t* const conf);
bool stream_do(const void* const params);

#endif // STREAM_H
