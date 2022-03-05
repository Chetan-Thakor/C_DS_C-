#include<stdio.h>
#include<string.h>
int i=2;
struct library
{
	int acs;
	char title_book[20];
	char name_author[20];
	int price_book;
	int flag;					//for confirmation of issued book if 1 then book is issue and if 0 then book is not issue
}lib[100];

	void add_bookinfo();
	void disp_bookinfo();
	void book_auth();
	void titlebook();
	void count();
	void book_acs();

	int main()
	{
		int choice;
		lib[0].acs = 10; 
		strcpy(lib[0].title_book,"Clanguage"); 
		strcpy(lib[0].name_author,"Dennis"); 
		lib[0].price_book = 300; 
		lib[0].flag = 1; 
		lib[1].acs = 20; 
		strcpy(lib[1].title_book,"Cadvanced"); 
		strcpy(lib[1].name_author,"cellu"); 
		lib[1].price_book = 400; 
		lib[1].flag = 1; 
		/*printf("Please enter the details of 2 books\n");
		for(i; i<2; i++)
		{
			printf("book details\n");			
			scanf("%d",&lib[i].acs);
			printf(".\n");
			scanf("%s",lib[i].title_book);
			printf(".\n");
			scanf("%s",lib[i].name_author);
			printf(".\n");
			scanf("%d",&lib[i].price_book);
			printf(".\n");
			scanf("%d",&lib[i].flag);
			printf("book added perfectly\n");
		}
		*/
		printf("Welcome to the our library\n");
		printf("Press:1 for Add book information\n");
		printf("Press:2 for Display book information\n");
		printf("Press:3 for List all books of given author\n");
		printf("Press:4 for List the title of specified book\n");
		printf("Press:5 for List the count of books in the library\n");
		printf("Press:6 for List the books in the order of accession number\n");
		printf("Press:7 for Exit\n");
		while(1)
		{
		printf("Enter the choice, whatever you want\n");
		scanf("%d",&choice);
	
			switch(choice)
			{
				case 1:
				add_bookinfo();
				break;
		
				case 2:
				disp_bookinfo();
				break;
		
				case 3:
				book_auth();
				break;	

				case 4:
				titlebook();
				break;
		
				case 5:
				count();
				break;

				case 6:
				book_acs();
				break;
		
				case 7:	
				break;
		
				default:
				printf("You do not want to do something\n");
				break;
			
			}
			if(choice >= 7)
			{
				break;		
			}
		}
		return 0;
	}

	void add_bookinfo()
	{
		int n;
		printf("How many number of books,you want to add\n");
		scanf("%d",&n);
		for(i; i<2+n; i++)
		{
			scanf("%d",&lib[i].acs);
			printf(".\n");
			scanf("%s",lib[i].title_book);
			printf(".\n");
			scanf("%s",lib[i].name_author);
			printf(".\n");
			scanf("%d",&lib[i].price_book);
			printf(".\n");
			scanf("%d",&lib[i].flag);
			printf(".\n");		
		}
	}
	
	void disp_bookinfo()
	{
		for(int j=0; j<i; j++)
		{
			printf("Accession number of book is:%d\n",lib[j].acs);
			printf("Title of book is:%s\n",lib[j].title_book);
			printf("Author name of book:%s\n",lib[j].name_author);
			printf("Price of book:%d\n",lib[j].price_book);
			printf("Book issue or not:%d\n",lib[j].flag);		
		}
	}

		
	void book_auth()
	{
		char name[20];
		printf("Enter the author's name\n");
		scanf("%s",name);
		for(int k=0; k<i; k++)
		{
			if(strcmp(name,lib[k].name_author) == 0)
			{
				printf("Accession number of book is:%d\n",lib[k].acs);
				printf("Title of book is:%s\n",lib[k].title_book);
				printf("Author name of book:%s\n",lib[k].name_author);
				printf("Price of book:%d\n",lib[k].price_book);
				printf("Book issue or not:%d\n",lib[k].flag);
			}
		}
	}

	
	void titlebook()
	{	
		int index;
		printf("Enter the index number of book, which the title you want to see\n");
		scanf("%d",&index);
		printf("Title of book is:%s\n",lib[index].title_book);
	}

	void count()
	{
		printf("Total number of books in the library is:%d\n",i);
	}

	void book_acs()
	{
		int acce;	
		printf("Enter the accession number of book,which detail you want to see\n");
		scanf("%d",&acce);
		for(int k=0; k<i; k++)
		{
			if(acce == lib[k].acs)
			{
				printf("Accession number of book is:%d\n",lib[k].acs);
				printf("Title of book is:%s\n",lib[k].title_book);
				printf("Author name of book:%s\n",lib[k].name_author);
				printf("Price of book:%d\n",lib[k].price_book);
				printf("Book issue or not:%d\n",lib[k].flag);	
			}
		}

	}




