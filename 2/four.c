#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct contact{
	char name[30];
	char addr[30];
	int tele;
};

void match(struct contact m1, struct contact m2, char name[]);
void display(struct contact *d);

main(){
	struct contact entry1, entry2;
	char name[30];

	strcpy(entry1.name, "cruze");
	strcpy(entry1.addr, "mandeville");
	entry1.tele == 1234567;

	strcpy(entry2.name, "mcfarlane");
	strcpy(entry2.addr, "newport");
	entry2.tele, 7654321;
	
	printf("Check if name exits already: ");
	scanf("%s", name);

	match(entry1, entry2, name);
}	

void display(struct contact *d){
	printf("Name: %s\n", d->name);
	printf("Addr: %s\n", d->addr);
	printf("Tele: %d\n", d->tele);
}

void match(struct contact m1, struct contact m2, char name[]){
	if(strcmp(m1.name, name) == 0){
		printf("Record already exists\n");
		display(&m1);
	}			
	
	else if(strcmp(m2.name, name) == 0){
		printf("Record already exists\n");
		display(&m2);
	}

	else{
		printf("Record doesn't exists\n");
	}
}
