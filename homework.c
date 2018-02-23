#include <stdio.h>
#include <stdlib.h>

//作业1
//一个整形数字有10个元素，输入这10个元素，再用指针形式输出
void work_one()
{

int int_array[10];
int i,j;

//输入
for(i=0;i<10;i++ )
{
   scanf("%d",int_array + i);
}   

//输出
for(j=0;j<10;j++)
{
    printf("%d\n",*(int_array + j));
}

}

//作业2
//用数组接受一个字符串，算出这个字符串的长度并输出（不计算\0）
void MyStrLen()
{
    char str_array[100];
    printf("请输入一个字符串:");
    scanf("%s",str_array);
    printf("输入的字符串为：%s\n",str_array);

    //计算字符串长度
    int i;
    for(i=0;i<100;i++)
    {
        if(*(str_array + i) == '\0')
	{
            printf("字符串的长度为%d\n",i);
	    break;
	}
    }

}

//拓展1
//用数组接受两个字符串，把第二个字符串复制到第一个字符串中，（实习strcpy函数功能）
void MyStrCpy(char* pStr1,char* pStr2)
{
    int i = 0;
    while(1)
    {
	if(*(pStr2 + i) == '\0') break;
        *(pStr1 + i)  = *(pStr2 + i);
	i++;
    }
    printf("%s\n",pStr1);
}


//作业3
//定一个整数型指针，动态分配100字节的内容，输入10个数放到分配的内存中，再输出你输入的这10个数，（不能内存泄漏）
void AlloctMemery()
{

    //动态分配内存
    int* pInt = (int*)malloc(sizeof(int) * 25);
    int i;
    for(i=0;i<10;i++)  //用户输入数字
    {
	printf("请输入第%d个整数:",i + 1);
        scanf("%d",pInt + i);
	fflush(stdin);
    }

    //输出用户输入结果
    for(i=0;i<10;i++)
    {
        printf("结果为%d\n",*(pInt + i));
    }

    //释放内存
    free(pInt);

}


//拓展2
//统计一个字符串在另一个字符串中出现的次数
void CalcStrCount(char* str1,char* str2)
{
    int i = 0;
    int count = 0;
    while(*(str1 + i))
    {
        int j = 0;
	while(1)
	{
            if(*(str2 +j) == '\0')
	    {
	        count++;
		break;
	    }
            if( *(str1 + i) == *(str2 + j))
	    {
	        i++;
	        j++;
	    }
	    else
	    {
	        break;
	    }
	}
	i++;
    }
    printf("总共出现了%d次数\n",count);
}


//作业四 写一个排序函数，实现将num整数从小到大排序
void MyNumSort(int* p,int num)
{
    int i;
    int j;
    int temp;
    for(i=0;i<num-1;i++)
    {
	for(j=i+1;j<num;j++)
	{
            if( *(p+i) > *(p+j))
	    {
                temp = *(p + i);
	        *(p + i) = *(p + j);
	        *(p + j) = temp;
	    }
	}
    }

    //测试输出结果
    for(i=0;i<num;i++)
    {
        printf("%d\n",*(p + i));
    }
}


int main()
{
    //work_one();
    //MyStrLen();
    /*
    char myStr1[100];
    char myStr2[100];

    printf("请输入第一个字符串:");
    scanf("%s",myStr1);
    fflush(stdin);
    printf("请输入第二个字符串:");
    scanf("%s",myStr2);
    //printf("输入的结果为：%s和%s\n",myStr1,myStr2);
    MyStrCpy(myStr1,myStr2);
    AlloctMemery();
    */

    /*
    char myStr1[100];
    char myStr2[100];

    printf("请输入第一个字符串:");
    scanf("%s",myStr1);
    fflush(stdin);
    printf("请输入第二个字符串:");
    scanf("%s",myStr2);

    CalcStrCount(myStr1,myStr2);
    */

    int int_array[5] = {4,5,3,2,1};
    MyNumSort(int_array,5);
    return 0;

}
