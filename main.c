#include <sys/resource.h>
#include "stdio.h"

void read_image();
void convert_image();
void store_image();
void process_image();

int main()
{
    struct rlimit rl = {32000, 32000};
    setrlimit(RLIMIT_AS, &rl);

    return 0;
}