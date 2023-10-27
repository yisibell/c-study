#include <stdio.h>
#include <stdbool.h>

/* 冒泡排序 */
void bubbleSort(int nums[], int size)
{
  // 外循环：未排序区间为 [0, i]
  for (int i = 0; i < size - 1; i++)
  {
    bool flag = false;

    // 内循环：将未排序区间 [0, i] 中的最大元素交换至该区间的最右端
    for (int j = 0; j < size - 1 - i; j++)
    {
      if (nums[j] > nums[j + 1])
      {
        int temp = nums[j];
        nums[j] = nums[j + 1];
        nums[j + 1] = temp;
        flag = true;
      }
    }

    if (!flag)
      break;
  }
}

void main()
{

  int list[] = {21, 2, 6, 11, 1, 8};

  // 获取数组的长度
  int length = sizeof(list) / sizeof(list[0]);

  printf("数组的长度为：%d \n", length);

  bubbleSort(list, length);

  for (int i = 0; i < length; i++)
  {
    printf("%d\n", list[i]);
  }
}
