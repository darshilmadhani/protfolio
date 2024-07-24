#include<stdio.h>
#include<conio.h>

void main(){

	char name[100], name_copy[100];
	int isPalindrome;

	clrscr();

	puts("Enter the string: ");
	scanf("%s", name);

	strcpy(name_copy, name);
	strrev(name_copy);
	//printf("%s\n", name_copy);

	isPalindrome = strcmp(name, name_copy);
	//printf("%d", isPalindrome);

	if(isPalindrome == 0)
		puts("It is a palindrome string");
	else
		puts("It is not a palindrome string");

	getch();
}