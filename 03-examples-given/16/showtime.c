//
//  showtime.c
//

#include <time.h>
#include <stdio.h>

main()
{
	long int clock;
	
	time(&clock);
	
	printf("%ld\n", clock);
	printf("%s\n", ctime(&clock));
	sleep(5);
	time(&clock);
	printf("%s\n", ctime(&clock));
}
