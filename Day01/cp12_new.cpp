#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
/* ���� �Ҵ���� ũ�⸦ �Է¹ް� ���Ҹ� �����Ͽ� ����Ͻÿ�. */
/* c ��� ��� */
int main(void) {
	int size;
	int* p;

	printf("ũ�� >> ");
	scanf("%d", &size);
	p = (int*)malloc(size * sizeof(int));
	if (p == NULL) {
		printf("�޸� �Ҵ� ����! \n");
		return 1;
	}
	printf("%d���� ���� �Է� \n", size);

	for (int i = 0; i < size; i++) {
		printf("%d��° ���� >> ", i+1);
		scanf_s("%d", &p[i]);
	}
	for (int j = 0; j < size; j++) {
		printf("%d\t", p[j]);
	}
	
	free(p);
	return 0;
}