/*H****************************************************************************
 * FILENAME: daemon.c					PROJECT: barbd
 *
 * DESCRIPTION:
 * 	the daemon module is initialized by setting up a signal handler and
 * 	parsing backup jobs from config.
 * 	for every job, a working thread ist started periodically.
 * 	job config reload is called upon receiving SIGHUP(7)
 * 	
 *
 * PUBLIC FUNCTIONS:
 * 	int startDaemon()
 *
 * AUTHOR: Ferdinand Ellinger
 * 
 *H*/


#ifndef __DAEMON_H__
#define __DAEMON_H__


extern int startDaemon();

#endif
