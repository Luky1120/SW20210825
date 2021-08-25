#include<stdio.h>
#include<string.h>

void ex1() {
	int a[100];
	int search;
	printf("찾을 숫자 : ");
	scanf("%d", &search);
	for (int i = 0; i < 100; i++) {
		a[i] = i * 2;

	}
	for (int i = 0; i < 100; i++) {
		if (a[i]==search) {
			printf("검색한 숫자의 인덱스 번호 : %d\n", i);
			break;
		}
	}
}

void ex2() {
	char ch[10] = {'a','h','e'};
	char aa[3];
	strcpy(aa, ch);
	int size = strlen(ch);
	printf("%d\n", size);
	printf("%s\n", aa);
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			break;
		}
		scanf("%s", &ch[i]);	
	}
	for (int i = 0; i < 10; i++) {
		printf("%c", ch[i]);
	}
}


int main(void) {
	int exnum;
	printf("예제 번호 : ");
	scanf("%d", &exnum);
	
	switch (exnum)
	{
	case 1:
		ex1();
		break;
	case 2:
		ex2();
		break;
	}
}