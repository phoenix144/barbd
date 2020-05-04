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


#ifndef __DAEMON_H__
#define __DAEMON_H__

/**
 * @public
 *
 * @brief fires up the daemon
 */
extern int startDaemon();

#endif
