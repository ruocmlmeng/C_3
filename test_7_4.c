/**
  ******************************************************************************
  * @file           : test_7_4.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/4
  ******************************************************************************
  */
#include<stdio.h>
/*
 *   1024��655�η��������λ���Ƕ���?
 */
// int main()
// {
//   int num = 0;
//   scanf("%d",&num);
//   int i = 0;
//   int p = 1;
//   for(i = 1 ; i <= 655; i++)
//   {
//     p  =  p * num  % 1000;
//   }
//   printf("%d\n",p);
//   return 0;
// }


/*
 *
 *   ��100000000!(һ��)ĩβ�ж��ٸ�0?
 */
// int main()
// {
//     int count = 0;//������¼5�ĸ���
//     int i = 0;
//     for(i = 5; i <=10000000 ;i++)
//     {
//         int m = i;
//         while(m % 5 == 0)//������һ��5
//         {
//             count++;
//             m = m / 5;//�ҵ���һ��5�������������ظ�
//         }
//     }
//     printf("һ����%d��0\n",count);
//     return 0;
// }
/*
 *
*  ����������֮��
  һ���������п��ܿ��Ա���ʾΪn(n>=2)��������������֮��
  ��:
	15  == 1 + 2 + 3 + 5
        == 4 + 5 + 6
        == 7 + 8
 *
 */

// int main()
// {
//     int n = 0;//�û�Ҫ�����ֵ
//     printf("������һ����������\n");
//     scanf("%d",&n);
//     int sum = 1;//������¼����ĺͣ���n��Ƚ�
//     int i = 0;
//     int right = 1;
//     int left = 1;
//     printf("%d = ",n);
//     for(i = 0; i <= n / 2 ; i++)
//     {
//         if(sum < n)
//         {
//             right++;
//             sum = sum + right;
//         }
//         else if(sum > n)
//         {
//             sum = sum - left;
//             left++;
//         }
//         else
//         {
//             //���־����ҵ���
//             printf("%d,%d\n",left,right);
//             sum = sum - left;
//             left++;
//         }
//     }
//     return 0;
// }

int main()
{
 // int a[7] = {2, 4, -3, 5, -4, 8, -2};
 int a[7] = {-2, 4, 3, 5, -4, 8, -2};
 int left = 0;
 int right = sizeof(a) / sizeof(a[0]) - 1;
 int i = 0;
 while (left < right)
 {
  if( a[left] >0 && a[left] * a[right] < 0   )
  {
    int temp = a[left];
    a[left] = a[right];
    a[right] = temp;
  }
  else if(a[left] >0 && a[left] * a[right] > 0)
  {
   right--;
   continue;
  }
  else if(a[right] <0 && a[left] * a[right] > 0)
  {
   left++;
   continue;
  }
  left++;
  right--;
 }
 for(i = 0 ; i < sizeof(a) / sizeof(a[0]) ; i++)
 {
  printf("%d ",a[i]);
 }
 printf("\n");
 return 0;
}
