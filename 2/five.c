#include <stdio.h>
#include <stdlib.h>

struct point {
	int x,y;
};

struct rect {
	struct point ne,se,sw,nw;
};

int RectArea(struct rect area);

main(){
	struct rect num;
	int area;

	num.ne.x = 6;
	num.se.x = 6;
	num.sw.x = 3;
	num.nw.x = 3;

	num.ne.y = 5;
	num.se.y = 3;
	num.sw.y = 3;
	num.nw.y = 5;

	area = RectArea(num); 	
	printf("Area: %dcm^2\n", area);
}

int RectArea(struct rect area){
	int one, two, new_area;
	one = area.se.x - area.sw.x;
	two = area.nw.y - area.sw.y;
	
	new_area = one * two;
	return new_area;
}
