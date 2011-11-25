#include "alisttpl.h"


typedef struct _book{
	int id;
	char isbn[20];
}book;

alisttpl_struct(book)

int main(int argn, char* argv[])
{
	book_alist* b = create_book_alist();	
	printf("capacity=%d\n", b->capacity);
}
