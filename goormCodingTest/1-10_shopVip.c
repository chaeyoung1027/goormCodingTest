#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price, char* grade) {
	int answer = 0;
	double sale;
	if (grade == "S") {
		sale = 0.05;
	}
	else if (grade == "G") {
		sale = 0.1;
	}
	else if (grade == "V") {
		sale = 0.15;
	}
	answer = price - price * sale;
	return answer;
}

int main() {
	int price1 = 2500;
	char* grade1 = "V";
	int ret1 = solution(price1, grade1);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	int price2 = 96900;
	char* grade2 = "S";
	int ret2 = solution(price2, grade2);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}

