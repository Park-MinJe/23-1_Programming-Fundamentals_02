#include <stdio.h>
#include <ctype.h>

/**
* 7글자 이상
* 하나 이상의 소문자
* 하나 이상의 대문자
* 하나 이상의 숫자
*/

int main() {
	char c;
	int len = 0,
		_isupper = 0, _islower = 0, _isdigit = 0;

	c = getchar();
	while (!isspace(c)) {
		len++;

		if (_isupper == 0 && islower(c)) _islower = 1;
		else if (_isupper == 0 && isupper(c)) _isupper = 1;
		else if (_isdigit == 0 && isdigit(c)) _isdigit = 1;

		c = getchar();
	}

	//printf("Lenght of password = %d\n", len);

	if (len >= 7 && _isupper && _islower && _isdigit)
		printf("유효한 암호입니다.\n");
	else
		printf("유효하지 않은 암호입니다.\n");

	system("Pause");

	return 0;
}