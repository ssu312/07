#include <stdio.h>

// int main(void)
// {
//     int i;

//     for(i=0;i<5;i++)
//     {
//         int temp = 1;
//         printf("temp = %d\n",temp);
//         temp++;
//     }

//     return 0;
// }
//=>결과 temp = 1
        // temp = 1
        // temp = 1
        // temp = 1
        // temp = 1

int main(void)
{
    int i;
    int temp = 1;
    for(i=0;i<5;i++)
    {
//방법 2
    //  static temp = 1;
        printf("temp = %d\n",temp);
        temp++;
    }

    return 0;
}

//결과
// temp = 1
// temp = 2
// temp = 3
// temp = 4
// temp = 5