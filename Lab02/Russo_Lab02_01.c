#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	float speed, filesize;

	printf("Enter your connection speed (Mb/s): ");
	scanf("%f", &speed);

	printf("Enter the filesize (MB): ");
	scanf("%f", &filesize);

	float downSeconds = filesize * 8.0 / speed;

	float downtime;

	char* time;

	if (downSeconds < 120){
		downtime = downSeconds;
		time = "seconds";
	} else if (downSeconds < 3600) {
		downtime = downSeconds / 60;
		time = "minutes";
	} else {
		downtime = downSeconds / 3600;
		time = "hours";
	}

	printf("At %.2f megabits per second, a file of %.2f megabytes will take %.2f %s to download.\n", speed, filesize, downtime, time);

	return EXIT_SUCCESS;
}
