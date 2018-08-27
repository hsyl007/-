#include<stdio.h>
void main()
{
    char *pseason[4] = { "Spring", "Summer", "Autumn", "Winter" };
    int month;
    printf("请输入月份(1~12)：\n");
    scanf("%d", &month);
    switch (month)
    {
    case 12:
    case 1:
    case 2:
        printf("%s\n", pseason[0]);
        break;
    case 3:
    case 4:
    case 5:
        printf("%s\n", pseason[1]);
        break;
    case 6:
    case 7:
    case 8:
        printf("%s\n", pseason[2]);
        break;
    case 9:
    case 10:
    case 11:
        printf("%s\n", pseason[3]);
        break;
    default:
        printf("输入错误!\n");
    }
}
