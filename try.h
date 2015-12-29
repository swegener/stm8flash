#define TRY(times, statement) do { 		\
	int c = (times);			\
	while(c > 0) {				\
		usleep(5000);			\
		if((statement)) break;		\
		c--;				\
	}					\
	if(!c) {				\
		ERROR("Tries exceeded");	\
	}					\
} while(0)
