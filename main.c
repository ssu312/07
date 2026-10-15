#include <stdio.h>

// int counter;

// void set_counter()
// {
//     counter = 20;
// }
// int main(void)
// {
//     printf("counter=%d\n",counter);
//     set_counter();
//     printf("counter=%d\n",counter);
//     return 0;
// }

void f(void);

//int i; (전역변수를 막 사용했을 때의 문제점), 아래는 의도대로 #50개가 찍히는 수정된 코드임. 
int main(void)
{
    int i;
    for (i=0;i<5;i++)
    {
        f();
    }
    return 0;
}

void f(void)
{
    int i;
    for (i=0;i<10;i++)
        printf("#");
}
//결과: ##########

