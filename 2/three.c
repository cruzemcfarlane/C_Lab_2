#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(int argc, char *argv[]){
	int i, j;
	if(argc > 2){
		for(i=0; i<argc; i++){
			for(j=i+1; j<argc; j++){
				if(strcmp(argv[i], argv[j]) == 0){
					printf("%s: %d & %d\n", argv[i], i, j);
				}
			}
		}
	}

	else{
		if(strcmp(argv[0], argv[1]) == 0){
			printf("%s: 1 & 2\n", argv[1]);
		}
		
		else{
			printf("No simular matching\n");
		}
	}
}
