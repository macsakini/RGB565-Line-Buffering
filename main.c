#include <sys/resource.h>
#include "stdio.h"

void read_image();
void convert_image();
void store_image();
void process_image();

int main()
{
    struct rlimit rl = {1, 1};

    setrlimit(RLIMIT_AS, &rl);

    unsigned char buffer[324];

    FILE *ptr;

    ptr = fopen("image_sample.bin", "rb");

    fread(buffer, sizeof(buffer), 1, ptr);

    for (int i = 0; i < sizeof(buffer); i++)
        printf("%u ", buffer[i]);

    return 0;
}

// void process_image()
// {
//     FILE *write_ptr;

//     write_ptr = fopen("test.bin", "wb"); // w for write, b for binary

//     fwrite(buffer, sizeof(buffer), 1, write_ptr); // write 10 bytes from our buffer
// }
