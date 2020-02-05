#include<stdio.h>
#include<string.h>
int change1(char num1[10])
{
	if(strcmp(num1,"零")==0)return 0;
    if(strcmp(num1,"一")==0)return 1;
    if(strcmp(num1,"二")==0)return 2;
    if(strcmp(num1,"三")==0)return 3;
    if(strcmp(num1,"四")==0)return 4;
    if(strcmp(num1,"五")==0)return 5;
    if(strcmp(num1,"六")==0)return 6;
    if(strcmp(num1,"七")==0)return 7;
    if(strcmp(num1,"八")==0)return 8;
    if(strcmp(num1,"九")==0)return 9;
}
void change2(int num)
{
	if(num==0); 

    else if(num==1)
	printf("十") ;
	else if(num==2)
	printf("二十");
	else if(num==3)
	printf("三十") ;
	else if(num==4)
	printf("四十");
	else if(num==5)
	printf("五十") ;
	else if(num==6)
	printf("六十");
	else if(num==7)
	printf("七十") ;
	else if(num==8)
	printf("八十"); 
	else if(num==9)
	printf("九十") ;

}
void change3(int num)
{
	{
	if(num==0); 

    else if(num==1)
	printf("一") ;
	else if(num==2)
	printf("二");
	else if(num==3)
	printf("三") ;
	else if(num==4)
	printf("四");
	else if(num==5)
	printf("五") ;
	else if(num==6)
	printf("六");
	else if(num==7)
	printf("七") ;
	else if(num==8)
	printf("八"); 
	else if(num==9)
	printf("九") ;

}
}


int main()
{
	int num;
	int q,i;
	int m[100];
	num=0;
	char a[10],b[10],c[10],num1[10];
	char d[10],yunsuan[10],num2[10];
	scanf("%s %s %s %s",a,b,c,num1);
	num=change1(num1);
	scanf("%s %s",d,yunsuan);
	while(strcmp(d,"钱包")==0) 
	{
		scanf(" %s",num2);
		if(strcmp(yunsuan,"增加")==0)
		num=num+change1(num2);
		if(strcmp(yunsuan,"减少")==0)
		num=num-change1(num2);
		scanf("%s %s",d,yunsuan);
		
		
	}
	
	if(num<10)
	change3(num);
	else
	{
		while(num!=0)
		{
			q=num%10;
			m[i++]=q;
			num=num/10;
				
		}

		for(i=i-1;i>=0;i--)
		{
			if(i==1);
			change2(m[i]);
			if(i==0);
			change3(m[i]);
		}
	}
	return 0;
	
	
}


