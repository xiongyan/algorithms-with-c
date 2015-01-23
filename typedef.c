#include <stdio.h>
#include <string.h>


typedef struct Book_
{
	char title[50];
	char author[50];
	char subject[50];
	int book_id;
}Book;



int main(int argc, char const *argv[])
{
	Book book;

	strcpy(book.title, "typedef");
	strcpy(book.author, "andy,xiong");
	strcpy(book.subject, "c tutorial");
	book.book_id = 2341;

	printf("Book Title : %s\n", book.title);
	printf("Book author: %s\n", book.author);
	printf("Book subject: %s\n", book.subject);
	printf("Book book_id: %d\n", book.book_id);

	return 0;
}