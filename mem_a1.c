#include <stdio.h>

int main(int argc, char* argv[])
{
    int  first = 0;
    int* p0 = malloc(1024);
    int* p1 = malloc(1024 * 1024);
    int* p2 = malloc(512 * 1024 * 1024 );
    int* p3 = malloc(1024 * 1024 * 1024 );
    printf("main=%p print=%p\n", main, printf);
    printf("first=%p\n", &first);
    printf("p0=%p p1=%p p2=%p p3=%p\n", p0, p1, p2, p3);
    getchar();

    return 0;
}
