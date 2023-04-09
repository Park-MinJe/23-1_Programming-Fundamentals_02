#include <stdio.h>

int main() {
	int dice1, dice2, dice3, 
		price;

	scanf_s("%d %d %d", &dice1, &dice2, &dice3);

	if (dice1 == dice2 && dice2 == dice3) {
		price = 10000 + dice1 * 1000;
	}
	else if (dice1 == dice2 && dice2 != dice3) {
		price = 1000 + 100 * dice1;
	}
	else if (dice1 != dice2 && dice2 == dice3) {
		price = 1000 + 100 * dice2;
	}
	else {
        if (dice1 > dice2) {
            if (dice2 > dice3) {
                price = dice1 * 100;
            }
            else {
                if (dice1 > dice3) {
                    price = dice1 * 100;
                }
                else {
                    price = dice3 * 100;
                }
            }
        }
        else {
            if (dice2 < dice3) {
                price = dice3 * 100;
            }
            else {
                price = dice2 * 100;
            }
        }
	}

    printf("»ó±Ý: %d", price);

	return 0;
}