#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
/* 동적 할당받을 크기를 입력받고 원소를 저장하여 출력하시오. */
/* c 언어 방식 */
int main(void) {
	int size;
	int* p;

	printf("크기 >> ");
	scanf("%d", &size);
	p = (int*)malloc(size * sizeof(int));
	if (p == NULL) {
		printf("메모리 할당 실패! \n");
		return 1;
	}
	printf("%d개의 원소 입력 \n", size);

	for (int i = 0; i < size; i++) {
		printf("%d번째 원소 >> ", i+1);
		scanf_s("%d", &p[i]);
	}
	for (int j = 0; j < size; j++) {
		printf("%d\t", p[j]);
	}
	
	free(p);
	return 0;
}