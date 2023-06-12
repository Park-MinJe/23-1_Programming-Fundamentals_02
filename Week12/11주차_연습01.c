#include <stdio.h>

int global_int = 1;
char global_char = 'a';

void _func(int param_int, char param_char);

int main() {
	int main_local_int = 10;
	char main_local_char = 'A';

	printf("global int : %d\n", global_int);
	printf("global char : %c\n", global_char);

	printf("main local int : %d\n", main_local_int);
	printf("main local char : %c\n", main_local_char);

	_func(main_local_int, main_local_char);

	printf("global int : %d\n", global_int);
	printf("global char : %c\n", global_char);

	printf("main local int : %d\n", main_local_int);
	printf("main local char : %c\n", main_local_char);

	system("pause");

	return 0;
}

void _func(int param_int, char param_char) {
	param_int += 10;
	param_char += 1;

	global_int += 10;
	global_char += 1;

	printf("global int : %d\n", global_int);
	printf("global char : %c\n", global_char);

	printf("param int : %d\n", param_int);
	printf("param char : %c\n", param_char);
}