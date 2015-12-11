#include <stdio.h>
#include <stdlib.h>

main(){
	float a[2][3] = {
		{1.0, 2.0, 3.0}, 
		{4.0, 5.0, 6.0}
	};
 
	float b[3][2] = {
		{1.0, 2.0},
		{3.0, 4.0},
		{5.0, 6.0}
	};

	float c[2][2] = {0.0};
		
	int i, j;
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			c[i][i] += a[i][j] * b[j][i];
		}
	}
	
	for(j=0; j<3; j++){
		c[1][0] += a[1][j]*b[j][0];
		c[0][1] += a[0][j]*b[j][1];
	}

	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("c[%d][%d] = %.1f\n", (int)i, (int)j, c[i][j]);
		}
	}
}
