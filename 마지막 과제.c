#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Books {
	char name[60];
	int ID;
	char date[40];
	char author[60];
	char address[100];
	char publisher[60];
	char p_num[40];
};

void displayBooks(struct Books bk);

struct Books bk[20];
int idx = 0;

void addBooks() {

	int next = 1, temp, flag = 0;

	while (1) {

		flag = 0;

		printf("\nEnter Book ID : ");
		scanf_s("%d", &temp);

		for (int i = 0; i < idx; i++) {
			if (temp == bk[i].ID) {
				flag = 1;
			}
		}
		if (!flag && temp > 0) {
			bk[idx].ID = temp;
		}
		else if (flag == 1) {
			printf("\nID already exists\n");
			break;
		}
		else if (temp < 0) {
			printf("\nID is invalid\n");
			break;
		}

		int ret = getchar();

		printf("\nEnter Book Name : ");
		gets(bk[idx].name);

		printf("\nEnter Publisher Name : ");
		gets(bk[idx].publisher);

		printf("\nEnter Publication Date : ");
		gets(bk[idx].date);

		printf("\nEnter Author Name : ");
		gets(bk[idx].author);

		printf("\nEnter Author E-mail Address : ");
		gets(bk[idx].address);

		printf("\nEnter Publisher Phone Number : ");
		gets(bk[idx].p_num);

		idx++;

		printf("\nRecord saved\n");
		printf("\nWould you like to add another record? \n<< Enter 1 to continue and 0 to exit >> ");
		scanf_s("%d", &next);
		ret = getchar();
		if (next == 0) break;
	}
}

void updateBook() {

	int flag = 0, temp, bk_up_id, bk_idx;

	printf("\nEnter Book ID: ");
	scanf_s("%d", &temp);

	for (int i = 0; i < idx; i++) {
		if (bk[i].ID == temp) {
			flag = 1;
			displayBooks(bk[i]);
			bk_idx = i;
			break;
		}
	}
	if (!flag) {
		printf("\nID does not exist\n");
	}
	else if (flag == 1) {
		flag = 0;
		printf("\nEnter Book ID to update : ");
		scanf_s("%d", &temp);

		for (int i = 0; i < idx; i++) {
			if (bk[i].ID == temp) {
				flag = 1;
			}
		}
		if (!flag && temp > 0) {
			bk[bk_idx].ID = temp;

			int ret = getchar();

			printf("\nEnter Book name : ");
			gets(bk[bk_idx].name);

			printf("\nEnter Publisher name : ");
			gets(bk[bk_idx].publisher);

			printf("\nEnter Publisher Date : ");
			gets(bk[bk_idx].date);

			printf("\nEnter Author name : ");
			gets(bk[bk_idx].author);

			printf("\nEnter Author e-mail address : ");
			gets(bk[bk_idx].address);

			printf("\nEnter Publisher Phone Number : ");
			gets(bk[bk_idx].p_num);

			printf("\nRecord saved\n");
		}
		else if (flag == 1) {
			printf("\nID already exists\n");
		}
		else if (temp < 0) {
			printf("\nID is invalid\n");
		}
	}
}

void deleteBook() {

	int bk_id, del_id = 0, flag = 0;
	printf("\nEnter Book ID to delete : ");
	int ret = getchar();
	scanf_s("%d", &bk_id);
	int i;
	for (i = 0; i < idx; i++) {
		if (bk_id == bk[i].ID) {
			del_id = i;
			flag = 1;
			break;
		}
	}
	if (flag) {
		for (i = del_id; i < idx; i++) {
			bk[i] = bk[i + 1];
		}
		idx--;
	}
	else if (!flag) {
		printf("\nID does not exist.\n");
	}

}

void displayBooks(struct Books bk) {

	printf("\n\nID: %d", bk.ID);
	printf("\nName: %s", bk.name);
	printf("\nPublication date: %s", bk.date);
	printf("\nAuthor name: %s", bk.author);
	printf("\nAuthor email address: %s", bk.address);
	printf("\nPublisher: %s", bk.publisher);
	printf("\nPublisher phone number: %s", bk.p_num);
}

void searchByName() {

	struct Books tBook;

	int ret = getchar();

	printf("\nEnter book name: ");
	gets(tBook.name);

	bool searchFlag = false;

	int i;
	for (i = 0; i < idx; i++) {
		if (strcmp(tBook.name, bk[i].name) == 0) {
			displayBooks(bk[i]);
			searchFlag = true;
		}
	}
	if (searchFlag == false) {
		printf("\nBook not found\n");
	}
}

void searchByAuthor() {

	struct Books tBook;

	int ret = getchar();
	printf("\nEnter author name: ");
	gets(tBook.author);

	bool searchFlag = false;

	int i;
	for (i = 0; i < idx; i++) {
		if (strcmp(tBook.author, bk[i].author) == 0) {
			displayBooks(bk[i]);
			searchFlag = true;
		}
	}
	if (searchFlag == false) {
		printf("\nBook not found\n");
	}
}

void searchByPublisher() {

	int ret = getchar();

	struct Books tBook;

	printf("\nEnter Publisher Name: ");
	gets(tBook.publisher);

	bool searchFlag = false;

	int i;
	for (i = 0; i < idx; i++) {
		if (strcmp(tBook.publisher, bk[i].publisher) == 0) {
			displayBooks(bk[i]);
			searchFlag = true;
		}
	}

	if (searchFlag == false) {
		printf("\nBook not found\n");
	}
}


int main(void) {

	int cmd;

	do {

		printf("\n\n<< Book Management System >>\n");
		printf("1. Add Book Information\n");
		printf("2. Delete Book Information\n");
		printf("3. Update Book Information\n");
		printf("4. Search by Book Name\n");
		printf("5. Display a list of books published by an author a\n");
		printf("6. Display a list of books published by a publisher p\n");
		printf("7. Display a list of all book\n");
		printf("8. Exit\n\n");
		scanf_s("%d", &cmd);

		switch (cmd) {
		case 1:
			addBooks();
			break;

		case 2:
			deleteBook();
			break;

		case 3:
			updateBook();
			break;

		case 4:
			searchByName();
			break;

		case 5:
			searchByAuthor();
			break;

		case 6:
			searchByPublisher();
			break;

		case 7:
			for (int i = 0; i < idx; i++) {
				displayBooks(bk[i]);
			}
			break;

		default:
			printf("Invalid Menu Number\n");
			break;

		}
	} while (cmd != 8);

	return 0;
}
