#include <sys/resource.h>
#include "stdio.h"
// #include "process/process.h"

int main()
{
    // struct rlimit rl = {1, 1};

    // setrlimit(RLIMIT_AS, &rl);
    FILE *ptr;

    ptr = fopen("images/image_sample.bin", "rb");

    unsigned char buffer[225];

    unsigned char graybuffer[225];

    fread(buffer, sizeof(buffer), 1, ptr);
    // buffer_image(buffer, ptr);

    for (int i = 0; i < sizeof(buffer); i++)
        printf("%x ", buffer[i]);

    printf("\n");
    for (int i = 0; i < sizeof(buffer); i++)
    {
        uint16_t rgb565 = (buffer[i] << 8) + buffer[i + 1];

        // extract red component (5 bits)
        uint8_t red = (rgb565 >> 11) & 0x1F;

        // extract green component (6 bits)
        uint8_t green = (rgb565 >> 5) & 0x3F;

        // extract blue component (5 bits)
        uint8_t blue = rgb565 & 0x1F;

        // compute average brightness
        uint8_t brightness = (red + green + blue) / 3;

        graybuffer[i] = brightness;
    }

    for (int i = 0; i < sizeof(buffer); i++)
        printf("%x ", graybuffer[i]);

    printf("\n");
    printf("%u", sizeof(buffer));

    return 0;
}