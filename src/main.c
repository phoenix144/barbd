/*H****************************************************************************
 * FILENAME: main.c					PROJECT: barbd
 *
 * DESCRIPTION:
 * 	A posix-compatible daemon to manage multiple rdiff-backup jobs.
 *
 * NOTES:
 * 	Forks a the daemon instance and detaches it from it's (C)TTY
 *
 * AUTHOR: Ferdinand Ellinger
 * 
 *H*/

 #include <stdlib.h>
 #include <stdio.h>

 #include "../include/daemon.h"
 #include "../include/worker.h"
 #include "../include/util.h"

int main(void) {
	printf("[barbd] initializing...\n");
	return 0;
}
