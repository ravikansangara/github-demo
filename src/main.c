#include <stdio.h>

void myprintf(const char *message)
{
    printf("%s", message);
}

void myprintf_v2(const char *message)
{
    printf("%s", message);
}

int main(int argc, char **argv)
{
    myprintf("Hello, world!\n");

    return 0;
}
