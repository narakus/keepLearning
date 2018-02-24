#include <stdio.h>
#include <string.h>

//求一个字符串“jeosfsd23_54_sdf_$#@!dfs3”中字符串"_"包含的值
//没实现
void SplitMyStr(char* a)
{
    int str_point[10] = {0};
    int flag_begin = 0;
    int flag_end = 0;
    for(int i=0;i<strlen(a);i++)
    {
        //打印结果
	if( flag_begin && flag_end )
	{
	    //printf("in to here\n");
	    for(int j=flag_begin;j<flag_end-flag_begin;j++)
	    {
                printf("%d", *(a + j));	
	    }
	}

        if(a[i] == '_')
	{
	    //printf("%d\n",i);
	    if(flag_begin>flag_end)
	    {
	        flag_end = i; 
	    }
	    else
	    {
	        flag_begin = i;
	    }
	    //flag_begin>flag_end?flag_begin=i:flag_end=i;
	    //printf("flag_begin=%d flag_end=%d",flag_begin,flag_end);
	}
    }
}


//将一个正整数分解，例如：90,打印2*3*3*5
//疑问，如何每次将输出保存至数组中
int DecIntNumber()
{
    int a;
    printf("请输入一个数字：");
    scanf("%d",&a);
    int i = 2;
    while(1)
    {
	int temp = a%i;
        if (temp == 0)
	{
	    printf("%d\n",i);
	    a = a/i;
	    i = 2;
	}
	else
	{
	    if( i >= a) break;
	    i++;
	    continue;
	}
    }
}

int main()
{
    //char a[] = "jeosfsd23_54_sdf_$#@!dfs3";
    //SplitMyStr(a);
    DecIntNumber();
    return 0;
}
