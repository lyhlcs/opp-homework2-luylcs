#include<stdio.h>
#include<string.h>
int change1(char num1[10])
{
	if(strcmp(num1,"��")==0)return 0;
    if(strcmp(num1,"һ")==0)return 1;
    if(strcmp(num1,"��")==0)return 2;
    if(strcmp(num1,"��")==0)return 3;
    if(strcmp(num1,"��")==0)return 4;
    if(strcmp(num1,"��")==0)return 5;
    if(strcmp(num1,"��")==0)return 6;
    if(strcmp(num1,"��")==0)return 7;
    if(strcmp(num1,"��")==0)return 8;
    if(strcmp(num1,"��")==0)return 9;
}
void change2(int num)
{
	if(num==0); 

    else if(num==1)
	printf("ʮ") ;
	else if(num==2)
	printf("��ʮ");
	else if(num==3)
	printf("��ʮ") ;
	else if(num==4)
	printf("��ʮ");
	else if(num==5)
	printf("��ʮ") ;
	else if(num==6)
	printf("��ʮ");
	else if(num==7)
	printf("��ʮ") ;
	else if(num==8)
	printf("��ʮ"); 
	else if(num==9)
	printf("��ʮ") ;

}
void change3(int num)
{
	{
	if(num==0); 

    else if(num==1)
	printf("һ") ;
	else if(num==2)
	printf("��");
	else if(num==3)
	printf("��") ;
	else if(num==4)
	printf("��");
	else if(num==5)
	printf("��") ;
	else if(num==6)
	printf("��");
	else if(num==7)
	printf("��") ;
	else if(num==8)
	printf("��"); 
	else if(num==9)
	printf("��") ;

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
	while(strcmp(d,"Ǯ��")==0) 
	{
		scanf(" %s",num2);
		if(strcmp(yunsuan,"����")==0)
		num=num+change1(num2);
		if(strcmp(yunsuan,"����")==0)
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


