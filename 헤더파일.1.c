#include <stdbool.h>
#ifndef _HEAD_
#define _HEAD_
#define MAX_SIZE 10
typedef struct
{
	char name[10];
	char number[15];


}number_book;

number_book book_1[10];


void add(void); // 전화번호추가함수


void print(void);  //전화번호부 출력
bool name_in_book_1(number_book* name);  // name 전화번호부에 있는지 T/F반환	
void search(number_book* name);   //검색기능
void call_Number_Remove(number_book* name);  // 삭제기능
#endif 
