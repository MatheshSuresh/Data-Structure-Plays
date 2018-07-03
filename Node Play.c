/*
 ============================================================================
 Name        : 17csa38.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void create();
void delete();
void insert();
void search();
int b[20],n,pos;


int main(){
	setvbuf(stdout,NULL,_IONBF,0);
	char retry='Y';
	int a;
	do{
		printf("\nEnter the choice you have to do");
		printf("\n1.Create\n2.Delete\n3.Insert\n4.Search\n5.Exit\n");
		printf("\nEnter your choice : ");
		scanf("%d",&a);
		printf("\n");
		switch(a){
			case 1:
				create();
				break;


			case 2:
				delete();
				break;

			case 3:
				insert();
				break;

			case 4:
				search();
				break;


			case 5:
				printf("Do you want to Continue : (Y/n)");
				scanf("%c",&retry);
				if(retry=='N'||retry=='N'){
					printf("*****Exiting*****");
					return 0;
				}
				break;


			default:
				printf("Invalid choice");
				break;
			}

	}while(retry=='Y'|| retry=='y');
	return 0;
}

void create(){
	printf("Enter the total number of nodes :");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);}
	printf("\nHere is your nodes :\n");

	for(int i=0;i<n;i++){
		printf("%d\t",b[i]);
	}
	printf("*********************************************");
}

void delete(){
	printf("\n Enter the number you want to delete : \t");
	scanf("%d",&pos);
	if(pos>n)
		printf("\nInvalid position");


	else{
		for(int i=pos; i<n;i++){
			b[i-1]=b[i];}
		printf("\n");
		printf("Here is your Node");
		for(int i=0;i<n-1;i++)
				printf("%d\t",b[i]);

	}
	printf("*********************************************");
 }

void insert(){
	int num;
	printf("\nWhich position you want to insert :\t");
	scanf("%d",&pos);
	printf("\nWhich number you want to insert :\t");
	scanf ("%d",&num);
	for(int i=0;i<n;i++){
		b[pos+1]=b[pos];
	}
	b[pos]=num;
	printf("Here is your Node");
	for(int i=0;i<n;i++){
			printf("%d\t",b[i]);}
	printf("*********************************************");
}

void search(){
	int search;
	printf("\nEnter the number you want to search :");
	scanf("%d",&search);
	for(int i=0; i<n;i++){
		if(b[i]==search){
			printf("The number is found at the position %d\n",i);
		}
		else{
			continue;
		}
	}
	printf("*********************************************");
}
