/* KallistiOS ##version##

   kernel/net/net_thd.h
   Copyright (C) 2009 Lawrence Sebald

*/

#ifndef __LOCAL_NET_THD_H
#define __LOCAL_NET_THD_H

#include <sys/cdefs.h>

__BEGIN_DECLS

#include <arch/types.h>

int net_thd_add_callback(void (*cb)(void *), void *data, uint64 timeout);
int net_thd_del_callback(int cbid);

int net_thd_is_current();

int net_thd_init();
void net_thd_shutdown();

__END_DECLS

#endif /* !__LOCAL_NET_THD_H */
