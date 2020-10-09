#include <stdio.h>
#include <stdint.h>


int main(void){

	int8_t  a = -10;
	int16_t b = -10;
	int16_t c = -1 & a;

	uint32_t t = 1<<7;
	for (int i=0; i < 8; i++){

		if (a&t) printf("1");
		else     printf("0");

		t >>= 1;
	}
	printf("\n");

	t = 1<<15;
	for (int i=0; i < 16; i++){

		if (b&t) printf("1");
		else     printf("0");

		t >>= 1;
	}
	printf("\n");

	t = 1<<15;
	for (int i=0; i < 16; i++){

		if (c&t) printf("1");
		else     printf("0");

		t >>= 1;
	}
	printf("\n");

	printf("%d %d %d\n", a, b, c);

	return 0;

}
