#include<stdio.h>
#include <stdlib.h>

int main()
{
    char data[5] ={'a','c','m','p','s'};
	  int link[5]={1,2,3,4,5};
    int head=0;
    int x,i;
    //選擇刪除data陣列0的a
    x=0;
    head=link[head];
    for(i=head;i<5;i++)
    {
        printf("%c",data[i]);
    }
    system("pause");
        
}


產出結果：
cmps
