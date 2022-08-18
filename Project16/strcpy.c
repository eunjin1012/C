#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[20];
	char s2[20];
	char s3[40];
	gets(s1);
	gets(s2);

	printf("length of s1:%d\t text:%s\n", strlen(s1), s1);
	printf("length of s2:%d\t text:%s\n", strlen(s2), s2);

	strcpy(s3, s1);
	puts("strcpy str(copy)");
	printf("s3 text:%s\n s1 text:%s\n", s3, s1);

	strcat(s3, s2);
	puts("strcat test(concatenate)");
	printf("s3 text:%s\n s2 text:%s\n", s3, s2);

	puts("strcmp test(compare)");
	printf("s3,s2:%d\n", strcmp(s3, s2));
	return 0;
}
