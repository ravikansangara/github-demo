#include <stdio.h>

void myprintf(const char *message)
{
    printf("message: %s", message);
}

int main(int argc, char **argv)
{
    myprintf("Hello, world!\n");

    return 0;
}
