/**
 * @file worker.h
 *
 * @brief Starts a given rdiff-backup job and logs result.
 * 	
 *
 * @author Ferdinand Ellinger
 * 
 */


#include "../include/worker.h"

#include <stdlib.h>
#include <stdio.h>


extern int startWorker() {
	printf("[Worker] starting ...\n");
	return 0;
}
