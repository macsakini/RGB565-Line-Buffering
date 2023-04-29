#include <sys/resource.h>
#include "stdio.h"
#include <stdlib.h>
#include "process.h"

FILE *read_image()
{
    FILE *ptr;

    ptr = fopen("../images/image_sample.bin", "rb");

    return ptr;
}

void convert_image()
{
}

void store_image()
{
}

void process_image()
{
}