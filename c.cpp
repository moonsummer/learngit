#include<stdio.h>

int main()
{
    char c='a';
    char *p=&c;
    char **pp=&p;
    printf("字符c的地址%d\n",&c);
    printf("一级指针p指向的地址%d\n",p);
    printf("二级指针pp指向的地址%d\n",p);
    printf("-----------------------\n");

    printf("一级指针p本身的地址%d\n",&p);
    printf("二级指针pp本身的地址%d\n",&pp);
    printf("-----------------------\n");

    printf("一级指针存储的值%d\n",p);
    printf("二级指针存储的值%d\n",*pp);

    printf("-----------------------\n");
    printf("一级指针修改一级指针的指向的值");
    *p='d';

    printf("-----------------------\n");
    printf("字符c的值%c\n",c);

    printf("-----------------------\n");
    printf("二级指针修改一级指针的指向的值");
    **pp='e';
    printf("-----------------------\n");
    printf("字符c的值%c\n",c);

    
    return 0;
}