/**
 * @file worker.c
 *
 * @brief Starts a given rdiff-backup job and logs result.
 * 	
 *
 * @author Ferdinand Ellinger
 * 
 */


#ifndef __WORKER_H__
#define __WORKER_H__


/**
 * @public
 *
 * @brief Forks worker thread.
 */
extern int startWorker();

#endif
