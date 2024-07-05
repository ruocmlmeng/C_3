/**
  ******************************************************************************
  * @file           : test_7_5_2.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/5
  ******************************************************************************
  */

/*
 *
 * 选择排序
 */
#include<stdio.h>

#include<stdint.h>
#define N 10
int main()
{
    int a[N] = {0};
    printf("请输入十个正整数:\n");
    int i = 0;
    int j = 0;
    for(i = 0;i < N ;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0; i < N - 1; i++)
    {

        int max_index ;
        int max = INT32_MIN;
        for(j = 0; j < N - i;j++)
        {
            if(a[j] > max)
            {
                max = a[j];
                max_index  = j;
            }
        }
        if( max_index != N - 1 -i)
        {
            int temp = a[max_index];
            a[max_index] = a[N - 1 -i];
            a[N -1 - i] = temp;
        }
    }
    for(i = 0;i < N ;i++)
    {
        printf("%d ",a[i]);
    }
  return 0;
}