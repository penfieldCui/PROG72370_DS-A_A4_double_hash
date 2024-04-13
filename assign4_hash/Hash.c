
#include "Hash.h"

//hash
static int h1(int k, int M) {
	return k % M;
}

//double hash
static int h2(int k, int R) {
	return R - (k % R);
}

void hashInit(int* hashTable, int* input, int M, int R) {

	for (int i = 0; i < M; i++) {
		hashTable[i] = NULL;
	}
	
	for (int i = 0; i < M; i++) {
		int key = input[i];

		//int h1 = key % M; //h1
		//int h2 = R - (key % R);

		int index;
		int j = 0;
		for (j = 0; j < M; j++) {
			index = (h1(key, M) + h2(key, R) * j) % M;   //j = 0:M
			if (hashTable[index] == NULL) {
				hashTable[index] = key;
				break;
			}
			else if(j == M-1){
				printf("Failed to insert %d\n", key);
			}
		}
	}

}