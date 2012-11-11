/// Michael Landes
/// GaTech : GOS : Project 1
/// ////////////////////////

#ifndef ML_CLIENT
#define ML_CLIENT

typedef enum {
	SOCKET_ERROR = -1,
	SUCCESS = 0,
	FAILURE = -1,
	CMD_INPUTS_ERROR = -2,
} ml_error_t;

typedef struct {
	unsigned int tid;
	unsigned int numberRequests;
	int hSocket;
	int successes;
	long bytesRead;
} ml_client_worker;

ml_error_t ml_client(char*, unsigned short int, unsigned int, unsigned int, unsigned int, char*);

#endif
