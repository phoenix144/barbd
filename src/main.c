/**
 * @file main.c
 *
 * @brief A daemon to manage multiple rdiff-backup jobs. It is implemented as
 * 	  new-style daemon according to daemon(7)
 * 	  
 *
 * @author Ferdinand Ellinger
 * 
 */

 #include <stdlib.h>
 #include <stdio.h>

 #include "../include/daemon.h"
 #include "../include/worker.h"
 #include "../include/util.h"

/**
 * @brief sets up a signal handler and calls the daemon function.
 *
 * @return error codes according to LSB init standard.
 */
int main(void) {
	printf("[barbd] initializing...\n");
	startDaemon();
	printf("daemon up\n");
	startWorker();
	parseConf();

	return EXIT_SUCCESS;
}
