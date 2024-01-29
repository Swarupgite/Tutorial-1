#include<stdio.h>

 int Addition(int No1, int No2)
 {
     int Sum = 0;
     Sum = No1 + No2;
     return Sum;
 }

int Subtraction(int No1,int No2)
{

    int Sub = 0;
    Sub = No1 - No2;
    return Sub;
}

int Multiplication(int No1,int No2)
{

    int Mul = 0;
    Mul = No1 * No2;
    return Mul;
}


int main()
{ 
    int Value1 = 10;
    int Value2 = 11;
    int Ans = 0;

     Ans = Addition(Value1,Value2);
     
     printf("Addition is : %d\n",Ans);

         Ans = Subtraction(Value1,Value2);
     
     printf("Subtraction is : %d\n",Ans);

     Ans = Multiplication(Value1,Value2);
     
     printf("MUL is : %d\n",Ans);


    return 0;
}