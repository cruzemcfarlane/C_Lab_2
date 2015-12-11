#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	char word[30] = {""};
	char temp = ' ';
	int i, j, k;

	printf("Enter word: ");
	scanf("%s", word);


	for(i=0; i < strlen(word); i++){
		k = i;
		for(j=i+1; j< strlen(word); j++){
			if(word[k] >  word[j]){
				k = j;
			}
		}
		temp = word[i];
		word[i] = word[k];
		word[k] = temp;
	}
	
	printf("\n%s\n", word);
}
