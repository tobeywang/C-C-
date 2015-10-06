#include <stdio.h>
#include <stdlib.h>
//費式 C++
int Fib(int n);
int main()
{
    
    int n, i;
     // Input a positive number
     printf("Input a positive integer:", n);
     scanf("%d",&n);
     // output Fibnacci number from 0 to n
     for (i=0; i<=n; i++)
        printf("Fib(%d)= %d \n", i, Fib(i));
     // pause
     system("pause");
}
#define ERROR -1

int Fib(int n)
{
     if (n<0) return ERROR;
    // n=0
       if (n==0) return 0;
    // n=1
       if (n==1) return 1;
    // n>=2
       return Fib(n-1)+Fib(n-2);
}

//產出結果：
//n=5
//Fib(0)= 0
//Fib(1)= 1
//Fib(2)= 1
//Fib(3)= 2
//Fib(4)= 3
//Fib(5)= 5
