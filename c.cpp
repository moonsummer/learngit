#include<stdio.h>

int main()
{
    char c='a';
    char *p=&c;
    char **pp=&p;
    printf("�ַ�c�ĵ�ַ%d\n",&c);
    printf("һ��ָ��pָ��ĵ�ַ%d\n",p);
    printf("����ָ��ppָ��ĵ�ַ%d\n",p);
    printf("-----------------------\n");

    printf("һ��ָ��p����ĵ�ַ%d\n",&p);
    printf("����ָ��pp����ĵ�ַ%d\n",&pp);
    printf("-----------------------\n");

    printf("һ��ָ��洢��ֵ%d\n",p);
    printf("����ָ��洢��ֵ%d\n",*pp);

    printf("-----------------------\n");
    printf("һ��ָ���޸�һ��ָ���ָ���ֵ");
    *p='d';

    printf("-----------------------\n");
    printf("�ַ�c��ֵ%c\n",c);

    printf("-----------------------\n");
    printf("����ָ���޸�һ��ָ���ָ���ֵ");
    **pp='e';
    printf("-----------------------\n");
    printf("�ַ�c��ֵ%c\n",c);

    
    return 0;
}