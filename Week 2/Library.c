#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

struct book {
    int accession_number;
    char title[50];
    int author_name;
    float price;
    int is_issued;
};

struct library {
    struct book books[MAX_BOOKS];
    int count;
};

void add_book(struct library *lib) {
    if (lib->count == MAX_BOOKS) {
        printf("Sorry, the library is full.\n");
        return;
    }
    struct book new_book;
    printf("Enter the accession number: ");
    scanf("%d", &new_book.accession_number);
    printf("Enter the title: ");
    scanf("%s", new_book.title);
    printf("Enter the author name: ");
    scanf("%d", &new_book.author_name);
    printf("Enter the price: ");
    scanf("%f", &new_book.price);
    printf("Is the book issued? (1 for yes, 0 for no): ");
    scanf("%d", &new_book.is_issued);
    lib->books[lib->count] = new_book;
    lib->count++;
    printf("Book added successfully!\n");
}

void display_book(struct book book) {
    printf("Accession number: %d\n", book.accession_number);
    printf("Title: %s\n", book.title);
    printf("Author name: %d\n", book.author_name);
    printf("Price: %.2f\n", book.price);
    printf("Issued: %s\n", book.is_issued ? "Yes" : "No");
}

void display_library(struct library lib) {
    for (int i = 0; i < lib.count; i++) {
        printf("Book %d:\n", i + 1);
        display_book(lib.books[i]);
        printf("\n");
    }
}

void list_count(struct library lib) {
    printf("Number of books in the library: %d\n", lib.count);
}

int main() {
    struct library lib = {0};
    int choice;
    while (1) {
        printf("1. Add a book\n");
        printf("2. Display all books\n");
        printf("3. List the count of books in library\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add_book(&lib);
                break;
            case 2:
                display_library(lib);
                break;
            case 3:
                list_count(lib);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
                break;
        }
    }
}
