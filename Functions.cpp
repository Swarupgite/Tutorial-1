#include<stdio.h>

void Fun_Value(int No)
{
    No++;
}
void Fun_Address(int *ptr)
{
    (*ptr)++;
}
void Fun_Reference(int &ref)
{
    ref++;
}

int main()
{
    int i = 10, j = 10, k =10;

    Fun_Value(10);
    Fun_Address(&j);
    Fun_Reference(k);

    printf("call by value : i %d\n",i);
    printf("call by adsress : j %d\n",j);
    printf("call by reference : k %d\n",k);
    return 0;
}