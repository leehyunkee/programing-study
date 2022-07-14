#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int a;
	int b;
	
	scanf("%d %d", &a, &b);

	if (a == 1 && b==1)
	{
		printf("%d와 %d는 같습니다.",a, b);
	}
	else if (a ==1 || b==2)
	{
		printf("%d는 %d와 다릅니다.", a, b);

	}
	else
	{
		printf("몰라잉");
	}


	return 0;
	//int a, b;
	//int result;   //몫
	//int leftover; //나머지

	///*result = a / b;
	//leftover = a % b;*/
	//printf("숫자 a와 b를 입력하세요 :");
	//scanf("%d %d", &a, &b);

	//result = a / b;
	//leftover = a % b;

	//printf("\na 나누기 b의 몫은 %d 입니다.\n", result);
	//printf("a나누기 b의 나머지는 %d 입니다.", leftover);

}
//int main()
//{
//	int a, b;
//	char c;
//	char d[10];
//	scanf("%d %d %c %s", &a, &b, &c, &d);
//	printf("%d %d %c %s", a, b, c, d);
//	return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//int main()
//{
//	float a;
//	int namchichigae;
//	char goguma[10];
//
//	scanf("%s", &goguma);
//	printf("내 학점은 %s 입니다.", goguma);
//
//
//	/*scanf("%d %f", &namchichigae, &a);
//	printf("%d %.1f", namchichigae, a);*/
//
//	return 0;
//}
//
























