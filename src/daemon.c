/**
 * @file daemon.c
 *
 * @brief Initializes the daemon and waits for next job.
 * 
 * The daemon module is initialized by setting up a signal handler and
 * parsing backup jobs from config.
 * for every job, a working thread ist started periodically.
 * job config reload is called upon receiving SIGHUP(7)
 *
 * @author Ferdinand Ellinger
 * 
 */


#include "../include/daemon.h"

#include <stdlib.h>
#include <stdio.h>


extern int startDaemon() {
	printf("[Daemon] harr harr!\n");
	return 0;
}
