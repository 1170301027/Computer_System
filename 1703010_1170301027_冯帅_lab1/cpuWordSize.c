#include <stdio.h>
#include <stdlib.h>

int cpuWordSize()
{
    char *p;
    printf("cpu×Ö³¤Îª%d\n",8*sizeof(p));
    return 0;
}

int main()
{
    cpuWordSize();
    return 0;
}
