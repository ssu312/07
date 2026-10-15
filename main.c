#include <stdio.h>

int all_files; //static int all_files => 링킹에러

extern void sub();

int main(void)
{
    sub();
    printf("%d\n", all_files);
    return 0;
}

