

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[100];
//	int i,num=0;
//	gets_s(a);
//	int c = strlen(a);
//	for (i = 0; i < c; i++)
//	{
//		if (a[i] >= '0' && a[i] <= '9')
//		{
//			num++;
//		}
//	}
//	printf("%d", num);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[100];
//	gets_s(a);
//	int i, c = strlen(a),j,index=0;
//	for (i = 0; i < c; i++)
//	{
//		index = 0;
//		for (j = i+1; j < c; j++)
//		{
//			if (a[i] == a[j])
//			{
//				index = 1;
//				break;
//			}
//				
//		}
//		if (index == 0)
//		{
//			printf("%c", a[i]);
//			break;
//		}
//	}
//
//
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	double z,num=0;
//	char a[100], b[100];
//	scanf_s("%lf\n", &z);
//	gets_s(a);
//	gets_s(b);
//	double c = strlen(a);
//	int i,j;
//	for (i = 0; i < c; i++)
//	{
//		if (a[i] == b[i])
//		{
//			num++;
//		}
//	}
//	double s = num / c;
//	if (s >= z) printf("yes");
//	else printf("no");
//	
//
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//
////编写一个石头剪刀布的函数
//int fun(char a, char b)
//{
//	if (a == 'R' && b == 'S') return 1;
//	else if (a == 'S' && b == 'R') return 2;
//	else if (a == 'S' && b == 'P') return 1;
//	else if (a == 'P' && b == 'S')  return 2;
//	else if (a == 'R' && b == 'P') return 2;
//	else if (a == 'P' && b == 'R') return 1;
//	else return 0;
//}
//int main()
//{
//	int n;
//	scanf_s("%d\n", &n);
//	char a[100] = { '\0' };
//	int i = 0, j;
//	while (i < n)
//	{
//		gets_s(a);
//		int c = strlen(a);
//		for (j = 0; j < c; j++)
//		{
//			if (a[j] == ' ')
//			{
//				if (fun(a[0], a[j + 1]) == 1) printf("Player1\n");
//				else if (fun(a[0], a[j + 1]) == 2) printf("Player2\n");
//				else printf("Tie\n");
//			}
//		}
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[100],b[100]={'\0'};
//	gets_s(a);
//	int c = strlen(a);
//	int i, j,k=0;
//	for (i = 0; i <=c-2; i++)
//	{
//		b[k] = a[i] + a[i + 1];
//		k++;
//	}
//	b[k] = a[c - 1] + a[0];
//	puts(b);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int fun(char b)
//{
//
//	int index = 0;
//	if (b >= '0' && b <= '9') index = 0;
//	else if (b >= 'a' && b < 'z') index = 0;
//	else if (b >= 'A' && b <= 'Z') index = 0;
//	else if (b == '_') index = 0;
//	else index = -1;
//	return index;
//}
//int main()
//{
//	char a[100];
//	gets_s(a);
//	int c = strlen(a);
//	int i,index2=1;
//	int  w = 0, e = 0;
//	for (i = 0; i < c; i++)
//	{
//		
//		 if (fun(a[i]) == -1) {
//			index2 = -1;
//			printf("no");
//			break;
//		     }
//		 else
//		 {
//			 if (a[0] >= '0' && a[0] <= '9')
//			 {
//				 printf("no");
//				 index2 = -1;
//				 break;
//			 }
//			 else index2 = 1;
//		 }
//
//	}
//	if (index2 == 1)
//		printf("yes");
//
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[100];
//	gets_s(a);
//	int i, c = strlen(a);
//	for (i = 0; i < c; i++)
//	{
//		if (a[i] == 'A') a[i] = 'T';
//		else if (a[i] == 'T') a[i] = 'A';
//		else if (a[i] == 'C')  a[i] = 'G';
//		else a[i] = 'C';
//	}
//	puts(a);
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[35]={'\0'};
//	gets_s(a);
//	int i, c = strlen(a);
//	char m, b;
//	m = a[c - 3], b = a[c - 1];
//		for (i = 0; i < c-4; i++)
//		{
//			if (a[i] == m) a[i] = b;
//			printf("%c", a[i]);
//		}
//		
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[80]={'\0'};
//	gets_s(a);
//	int i, c = strlen(a);
//	for (i = 0; i < c; i++)
//	{
//		if (a[i] >= 'a' && a[i] < 'z') a[i] = a[i] + 1;
//		else if (a[i] >= 'A' && a[i] < 'Z')  a[i] = a[i] + 1;
//		else if (a[i] == 'z')  a[i] = 'a';
//		else if (a[i] == 'Z') a[i] = 'A';
//		else a[i] = a[i];
//	}
//	puts(a);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[201]={'\0'};
//	gets_s(a);
//	int i,c=strlen(a);
//	for (i = 0; i < c; i++)
//	{
//		if (a[i] >= 'A' && a[i] <= 'Z')
//		{
//			if (a[i] <= 69 && a[i] >= 65)
//			{
//				switch (a[i])
//				{
//				case 65: a[i] = 'V'; break;
//				case 66: a[i] = 'W'; break;
//				case 67: a[i] = 'X'; break;
//				case 68: a[i] = 'Y'; break;
//				case 69: a[i] = 'Z'; break;
//				}
//			}
//			else a[i] = a[i] - 5;
//		}
//	}
//	puts(a);
//	return 0;
//}

#include<stdio.h>
#include<string.h>
int main()
{


	return 0;
}





