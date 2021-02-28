#include <stdio.h>
#include "헤더.h"
#include <stdbool.h>

void add(void) {
	int i = 0;
	if (i == 10 && book_1[i].name == '0\n') {
		printf("전화번호부가 꽉찼습니다");
		return;
	}
	else {
		printf("[ INSERT ]\n");
		printf("추가할 이름 :");
		scanf("%s", &book_1[i].name);
		printf("추가할 전화번호");
		scanf("%s", &book_1[i].number);
		i++;
		printf("추가되었습니다");
	}
	return;
}


void print(void) {
	for (int i = 0; i < MAX_SIZE; i++)
	{
		if (book_1[i].name != '\0') {
			printf("Name :%s\n", book_1[i].name);
			printf("Tel Number:%s\n", book_1[i].number);
		}

		else return;

	}
}


bool name_in_book_1(number_book* name) //name 이 전화번호부에 있는지 T/F반환
{
	char search_name;
	printf("알아볼 이름을 입력하세요");
	scanf("%s", &search_name);

	for(int i = 0; i < MAX_SIZE; i++) {
		if (book_1[i].name == search_name)
		{
			return true;
		}
		else
		{
			return false;
		}
	}


}

void search(void)//검색기능
{
	char name = 0;
	printf("찾을 이름을 입력하세요:");
	scanf("%s", &name);	
	if (!name_in_book_1(name))
	{
		printf("%c 은 목록에 없음!!", name);
		return;
	}

	else {
		for (int i = 0; i < MAX_SIZE; i++) {
			if (book_1[i].name == name);
			{
				printf("이름 :%c \n 번호:%c\n", book_1[i].name, book_1[i].number);
				return;
			}
		}
	}
}



