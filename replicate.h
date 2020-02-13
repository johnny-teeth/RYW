//
//  replicate.h
//  
//
//  Created by admin on 3/19/18.
//

#ifndef replicate_h
#define replicate_h

#define INITIAL_CLIENTS 10
int serve;
int rem_sock;
pthread_cond_t waiter;

void* cli_select(void * cli);
void* gather_cli();

#endif /* replicate_h */
