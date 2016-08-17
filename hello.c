#include <stdio.h>

#define WIDTH 10
#define LENGTH 234
#define SIZE(x) sizeof(x)/sizeof((x)[0])

void reverseArray(int arr[], int start, int end)
{
    int temp;
    while(start < end)
    {
      temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
    }
}

int add(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int balance[3] = {1, 2, 3};
    for(int i = 0; i < 3; i++)
    {
        printf("%i\n", balance[i]);
    }

    int area;
    area = WIDTH * LENGTH;

    printf("The value of the area is: %d", area);

    int num = 5;
    printf("%i \n", num);
    printf("Hello, World! \n");

    return 0;
}
