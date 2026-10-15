#include <stdio.h>

int inc(int counter);

int main(void)
{
    int i = 10;
    printf("함수 호출전 i=%d\n",i);
    i = inc(i);   //inc(i)
    printf("함수 호출후 i=%d\n",i);
    return 0;
}

int inc(int counter)
{
    counter++;
    return counter; //반환의 결과를 return -> 변수에 저장
}

//결과 (9번 줄 주석 부분으로 썼을 때의 결과)
//함수 호출전 i=10
//함수 호출후 i=10