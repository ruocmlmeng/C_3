#include <stdio.h>

// int main(void)
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     printf("请输入三个整数：\n");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a > b)
//     {
//         int temp = a;
//         a = b;
//         b = temp;
//     }
//     if(a > c)
//     {
//         int temp = a;
//         a = c;
//         c = temp;
//     }
//     if(b > c)
//     {
//         int temp = b;
//         b  = c;
//         c = temp;
//     }
//     printf("%d,%d,%d\n",a,b,c);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int num1 = 0;
//     int num2 = 0;
//     printf("请输入两个值：\n");
//     scanf("%d%d",&num1,&num2);
//     num1 = num1 ^ num2;
//     num2 = num2 ^ num1;
//     num1 = num1 ^ num2;
//     printf("%d,%d",num1,num2);
//     return 0;
// }
// int main()
// {
//     int num1 = 0;
//     int num2 = 0;
//     printf("请输入两个值：\n");
//     scanf("%d%d",&num1,&num2);
//     num1 = num1 + num2;
//     num2 = num1 -num2;
//     num1 = num1 - num2;
//     printf("%d,%d",num1,num2);
//     return 0;
// }
// int main()
// {
//     int num1 = 0;
//     int num2 = 0;
//     printf("请输入两个值：\n");
//     scanf("%d%d",&num1,&num2);
//     num1 = num1 * num2;
//     num2 = num1 / num2;
//     num1 = num1 / num2;
//     printf("%d,%d",num1,num2);
//     return 0;
// }
// int main()
// {
//     // char a = -1;
//     // int b = a >> 31;
//     // printf("%d\n",b);//-1
//     // printf("%u\n",b);//2^32-1
//
//     // unsigned char a = -1;
//     // int b = a >> 31;
//     // printf("%d\n",b);//0
//     // printf("%u\n",b);//0
//
//     // int a = -1;
//     // a = a >> 31;
//     // printf("%d\n",a);//-1
//     // printf("%u\n",a);//2^32-1
//     // -------------------------
//     //    unsigned int a = -1;
//     // a = a >> 31;
//     // printf("%d\n",a);//1
//     // printf("%u\n",a);//1
//     // char c = -56 >> 30;
//     // printf("%d\n",c);//-1
//     // printf("%u\n",c);//2^32-1
//     char c = -56u >> 30;
//     printf("%d\n",c);//1
//     printf("%u\n",c);//1
//     return 0;
// }
//键盘输入一个数字，然后求出这个数是几位数，然后倒叙输出
int main()
{
    int num = 0;
    printf("请输入一个整数：\n");
    scanf("%d",&num);
    int count = 0;//用来记录几位数
    int sum = 0;//用来记录倒叙输出
    int n = num;//将num备份
    while (num)
    {
        count++;
        num = num / 10;
    }
    int i = 0;
    for (i = 0 ; i < count;i++)
    {
        sum = sum *10 + n % 10;
        n = n /10;
    }
    printf("%d,%d\n",count,sum);
    return 0;
}


