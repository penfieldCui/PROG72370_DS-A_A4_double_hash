#include "Hash.h"
#include <stdio.h>

#define M 11
#define R 7

int main(void) {

	int input[M] = {764, 35954, 8683, 41, 11004, 1362, 77, 1, 448, 118, 5507};
	int hashTable[M];

	hashInit(hashTable,input,M,R);



	/* display */
	printf("content in hashTable:{");
	for (int i = 0; i < M; i ++) {
		printf("%d", hashTable[i]);
		if (i != M-1)
			printf(", ");
	}

	printf("}");

	return 0;
}