#include <stdio.h>

// int main(void)
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     printf("����������������\n");
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
//     printf("����������ֵ��\n");
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
//     printf("����������ֵ��\n");
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
//     printf("����������ֵ��\n");
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
//��������һ�����֣�Ȼ�����������Ǽ�λ����Ȼ�������
// int main()
// {
//     int num = 0;
//     printf("������һ��������\n");
//     scanf("%d",&num);
//     int count = 0;//������¼��λ��
//     int sum = 0;//������¼�������
//     int n = num;//��num����
//     while (num)
//     {
//         count++;
//         num = num / 10;
//     }
//     int i = 0;
//     for (i = 0 ; i < count;i++)
//     {
//         sum = sum *10 + n % 10;
//         n = n /10;
//     }
//     printf("%d,%d\n",count,sum);
//     return 0;
// }

//����һ��ѭ������
// int main()
// {
//     // int num = 0;
//     // printf("������һ��������\n");
//     // scanf("%d",&num);
//     // int count = 0;//������¼��λ��
//     // int sum = 0;//������¼�������
//     // while (num)
//     // {
//     //     count++;
//     //     sum = sum *10 + num %10;
//     //     num = num / 10;
//     // }
//     printf("%f\n");
//     return 0;
// }
int main()
{
    int I = 0;
    int money = 0;
    printf("��˾���������Ϊ:\n");
    scanf("%d",&I);
    if( I <= 100000 && I >= 0)
    {
        money = I * 0.1;
    }
    else if( I <= 200000)
    {
        money = 100000 * 0.1 + (I - 100000) * 0.075;
    }
    else if( I <= 400000)
    {
        money = 100000 *  0.1 + (200000 - 100000) *0.075 + (I - 200000) * 0.05;
    }
    else if( I<=600000)
    {
        money = 100000 *  0.1  + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (I - 400000)*  0.03;
    }
    else if( I <=10000000)
    {
        money = 100000 *  0.1  + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (600000 - 400000)*  0.03 + (I - 600000) * 0.015;
    }
    else
    {
        money = 100000 *  0.1  + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (600000 - 400000)*  0.03 + (1000000 - 600000) *  0.015 + (I - 1000000) *0.01;
    }
    printf("����Ϊ%d\n",money);
    return 0;
}

