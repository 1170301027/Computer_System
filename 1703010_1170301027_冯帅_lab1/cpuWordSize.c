#include <stdio.h>
#include <stdlib.h>

int cpuWordSize()
{
    char *p;
    printf("cpu�ֳ�Ϊ%d\n",8*sizeof(p));
    return 0;
}

int main()
{
    cpuWordSize();
    return 0;
}
