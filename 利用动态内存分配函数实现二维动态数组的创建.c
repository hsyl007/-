#include < stdio.h >
#include < stdlib.h >


 int pwr(int a, int b)
{
    int t = 1, i;
    for (i = 0; i < b; i++)
    t = t * a;
    return t;

}

void main()
{
    int (*iPtr)[10];
    int i, j;
    iPtr = malloc(8 * sizeof(int) * 10);
    if (!iPtr)
    {
        printf("ÄÚ´æ·ÖÅäÊ§°Ü!");
        exit(1);

    }
    for (i = 0; i < 8; i++)
    printf("%5d´ÎÃÝ" ,i + 1);
    printf("\n-----------------------------------------------------------------------------------\n");
    for (j = 0; j < 10; j++)
    for (i = 0; i < 8; i++)
        iPtr[i][j] = pwr(j + 1, i + 1);
    for (j = 0; j < 10; j++)
    {
        for (i = 0; i < 8; i++)
        printf("%10d", iPtr[i][j]);
        printf("\n");
    }
    free(iPtr);
}
