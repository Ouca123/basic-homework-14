#include<stdio.h> 
#include<stdlib.h>
int main()
{
	int a,b,c;
	printf("請輸入三角形三邊長:\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("a=%d,b=%d,c=%d\n",a,b,c);
	
	if ((a+b)>c&&(b+c)>a&&(a+c)>b)
	printf("三角形成立喔\n");
	 
	else
	printf("三角形不能成立喔\n");
	system("PAUSE");
	return 0;
  
}
