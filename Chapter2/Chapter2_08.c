#include<stdio.h>

void one_three(void) {
	printf("one\n");
}

void two(void) {
	printf("two\n");
}


void main(void) {
	printf("starting now: \n");
	one_three();
	two();
	printf("three\n");
	printf("done!");
}
