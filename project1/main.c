#include "test.h"
#include <stdio.h>
#include <stdlib.h> // 使用弹出窗口时，要加上此头调用 system命令
int main()
{
    int n1, n2;
    printf("请输入两个数字，中间用空格分开：");
    scanf("%d\n%d", &n1, &n2);
    test(n1, n2);
    system("pause"); // 使用弹出窗口时，要加上此行命令，防止闪退。

    return 0;
}