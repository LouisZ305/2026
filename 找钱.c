#include <stdio.h>

int main()
{
    int price = 0;
    
	printf("你有100元\n");

    printf("请输入花费金额（元）：");
    scanf("%d", &price);

    int change = 100 - price;

    printf("找您%d元。\n", change);

    return 0;
}
