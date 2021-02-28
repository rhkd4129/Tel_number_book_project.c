#include <stdio.h>
#include "헤더.h"


int menu_number = 0;


int main() {
	printf("**********MENU************");
	printf("\n\n");

	printf(" 1. 전화번호부 추가\n");
	printf(" 2. 삭제 (아직 안됨)\n");
	printf(" 3. 검색\n");
	printf(" 4. 전화번호부 출력\n");
	printf(" 5. 종료\n");



	while (1) {
		printf("\n\n번호를 선택하세요 :");
		scanf("%d", &menu_number);
		printf("\n");

		if (menu_number == 1)
		{
			add();
		}
		else if (menu_number == 3)
		{
			//search(book_1.name);
		}
		else if (menu_number == 4) {
			print();
		}
		else if (menu_number == 5) {
			break;
		}
	}



}

