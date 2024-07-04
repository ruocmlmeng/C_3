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
 *   1024的655次方的最后三位数是多少?
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
 *   求100000000!(一亿)末尾有多少个0?
 */
// int main()
// {
//     int count = 0;//用来记录5的个数
//     int i = 0;
//     for(i = 5; i <=10000000 ;i++)
//     {
//         int m = i;
//         while(m % 5 == 0)//至少有一个5
//         {
//             count++;
//             m = m / 5;//找到了一个5就消除，以免重复
//         }
//     }
//     printf("一共有%d个0\n",count);
//     return 0;
// }
/*
 *
*  连续正整数之和
  一个正整数有可能可以被表示为n(n>=2)个连续的正整数之和
  如:
	15  == 1 + 2 + 3 + 5
        == 4 + 5 + 6
        == 7 + 8
 *
 */

// int main()
// {
//     int n = 0;//用户要输入的值
//     printf("请输入一个正整数：\n");
//     scanf("%d",&n);
//     int sum = 1;//用来记录区间的和，与n相比较
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
//             //这种就是找到了
//             printf("%d,%d\n",left,right);
//             sum = sum - left;
//             left++;
//         }
//     }
//     return 0;
// }

// int main()
// {
//  // int a[7] = {2, 4, -3, 5, -4, 8, -2};
//  int a[7] = {-2, 4, 3, 5, -4, 8, -2};
//  int left = 0;
//  int right = sizeof(a) / sizeof(a[0]) - 1;
//  int i = 0;
//  while (left < right)
//  {
//   if( a[left] >0 && a[left] * a[right] < 0   )
//   {
//     int temp = a[left];
//     a[left] = a[right];
//     a[right] = temp;
//   }
//   else if(a[left] >0 && a[left] * a[right] > 0)
//   {
//    right--;
//    continue;
//   }
//   else if(a[right] <0 && a[left] * a[right] > 0)
//   {
//    left++;
//    continue;
//   }
//   left++;
//   right--;
//  }
//  for(i = 0 ; i < sizeof(a) / sizeof(a[0]) ; i++)
//  {
//   printf("%d ",a[i]);
//  }
//  printf("\n");
//  return 0;
// }
// int main()
// {
//  int a[10] = {2,4,1,6,7,9,10,3,5,1};
//  int max = a[0];
//  int i = 0;
//  for(i = 1; i < sizeof(a) / sizeof(a[0]);i++)
//  {
//   if(a[i]>max)
//   {
//    max = a[i];
//   }
//  }
//  printf("max == %d\n",max);
//  return 0;
// }
// int main()
// {
//  int a[10] = {2,4,1,6,7,9,10,3,5,1};
//  int mul = 1;
//  int max = a[0];
//  int i = 0;
//  for(i = 1; i < sizeof(a) / sizeof(a[0]) ;i++)
//  {
//   if(a[i]>max)
//   {
//    max = a[i];
//   }
//  }
//  printf("max == %d\n",max);
//  for(i = 0; i < sizeof(a) / sizeof(a[0])-1 ;i++)
//  {
//   int j = 0;
//   for(j = i+1; j <sizeof(a) / sizeof(a[0]) ; j++ )
//   {
//    if(a[i]*a[j] > mul)
//    {
//     mul = a[i]*a[j];
//    }
//   }
//  }
//  printf("第二大的数 == %d\n",mul / max);
//  return 0;
// }
#include <stdint.h>
// int main()
// {
//  int a[10] = {1,2,3,-4,-6,7,5,-100,10,-99};
//  int sum = 0;
//  int i = 0;
//  int sum_max = INT32_MIN ;
//  int j = 0;
//  int res = 0;
//  for(i = 0;i < sizeof(a)/sizeof(a[0])-1 ; i++)
//  {
//   sum = 0;
//   for(j = i+1; j < sizeof(a) / sizeof(a[0]); j++)
//   {
//    sum =  sum + (a[i] + a[j]);
//    if(sum > sum_max)
//    {
//     sum_max = sum;
//    }
//   }
//
//  }
//  printf("%d\n",sum_max);
//  return 0;
// }

// int maxSubArray(int* nums, int numsSize) {
//  if (numsSize < 2) return 0; // 如果数组元素少于两个，返回0
//
//  int max_sum = INT32_MIN;
//  int current_sum = nums[0] + nums[1];
//
//  for (int i = 2; i < numsSize; i++) {
//   if (current_sum < nums[i - 1]) {
//    current_sum = nums[i - 1] + nums[i];
//   } else {
//    current_sum += nums[i];
//   }
//
//   if (current_sum > max_sum) {
//    max_sum = current_sum;
//   }
//  }
//
//  return max_sum;
// }
//
// int main() {
//  int nums[] = {1, 2, 3, -4, -6, 7, 5, -100, 101, -99};
//  int numsSize = sizeof(nums) / sizeof(nums[0]);
//  int max_sum = maxSubArray(nums, numsSize);
//  printf("最大子数组之和为：%d\n", max_sum);
//  return 0;
// }

#include<stdint.h>
int maxSubArray(int arr[],int arrSize)
{

 if(arrSize < 2)
  return 0;
 int max_sum = INT32_MIN;
 int current_sum = arr[0] + arr[1];
 int i = 0;
 for(i = 2; i < arrSize ;i++)
 {
  if(current_sum < arr[i - 1])
  {
   current_sum = arr[i - 1] + arr[i];
  }
  else
  {
   current_sum +=arr[i];
  }
  if(current_sum > max_sum)
  {
   max_sum = current_sum;
  }
 }
 return max_sum;
}

int main()
{
 int arr[10] = {1,2,3,-4,-6,7,5,-100,101,-99};
 int arrSize = sizeof(arr) / sizeof(arr[0]);
 int max_sum = maxSubArray(arr,arrSize);
 printf("最大子数组之和为:%d\n",max_sum);
 return 0;
}
