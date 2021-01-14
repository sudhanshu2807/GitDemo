

// micro with arguments

#include <stdio.h>
#define AREA(x) (3.14*x*x)  // area=3.14*radius*radius

int main()
{float r1 = 1.0,r2 = 2.0, a ;
a = AREA (r1);
printf("area of circle = %f\n",a);
a = AREA (r2);
printf("are of circle = %f\n",a);
	
return 0;	
	
	
	
}
