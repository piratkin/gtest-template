#include <stdio.h>
#include <stddef.h>

#include "storage.h"
#include "stream.h"

int main(int argc, char *argv[])
{
    const storage_config_t storage_conf = { "storage" };
    const stream_config_t stream_conf = { "stream" };

    storage_init(&storage_conf);
    storage_do(NULL);

    printf("storage .. OK\n");

    stream_init(&stream_conf);
    stream_do(NULL);

    printf("stream  .. OK\n");
}
