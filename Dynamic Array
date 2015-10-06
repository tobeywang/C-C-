#include <stdio.h>

#include <stdlib.h>

int n;

void calculate(int*,int=0);

int main()

{

    printf("輸入 n，列出 {1, 2, 3, . . . , n} 的所有子集");

    scanf("%d",&n);

    int *data=(int*)malloc(sizeof(int)*n);//動態宣告陣列

    calculate(data);

    system("pause");

    return 0;

}

void calculate(int* data,int num)

{

    if(num<n)

    {

         for(int i=0;i<=1;i++)//0:不印出; 1:印出

         {

             data[num]=i;

             calculate(data,num+1);

          }

    }

    else

    {

        printf("{");

        for(int i=0;i<n;i++)

        if(data[i])printf("%d,",i+1);//如果是1印出元素

        else printf("");//反之不印出元素

        printf("}");

    }

}

//產出結果：
//n=2
//{}{2,}{1,}{1,2,}
