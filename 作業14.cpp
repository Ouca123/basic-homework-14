#include<stdio.h> 
#include<stdlib.h>
int main()
{
	int a,b,c;
	printf("�п�J�T���ΤT���:\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("a=%d,b=%d,c=%d\n",a,b,c);
	
	if ((a+b)>c&&(b+c)>a&&(a+c)>b)
	printf("�T���Φ��߳�\n");
	 
	else
	printf("�T���Τ��ন�߳�\n");
	system("PAUSE");
	return 0;
  
}
