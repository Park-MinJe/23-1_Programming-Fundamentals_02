#include <stdio.h>
#include <ctype.h>

/**
* 7���� �̻�
* �ϳ� �̻��� �ҹ���
* �ϳ� �̻��� �빮��
* �ϳ� �̻��� ����
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
		printf("��ȿ�� ��ȣ�Դϴ�.\n");
	else
		printf("��ȿ���� ���� ��ȣ�Դϴ�.\n");

	system("Pause");

	return 0;
}