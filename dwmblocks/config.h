#define CMDLENGTH 45
#define DELIMITER " | "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	/* Block script name         time       signal */
	BLOCK("sb-music",            0,         12),
	BLOCK("sb-dollar",           1800,      11),
	BLOCK("sb-bitcoin",          1800,      10),
	BLOCK("sb-network",    	     1,         9),
	BLOCK("sb-memory",    	     1,         8),
	BLOCK("sb-cpu-temp",         1,         7),
	BLOCK("sb-bluetooth",        1800,      6),
	BLOCK("sb-volume",    	     0, 	5),
	BLOCK("sb-keyboard-layout",  0,      	4),
	BLOCK("sb-wifi",    	     10,        3),
	BLOCK("sb-battery",          30, 	2),
	BLOCK("sb-time",    	     1, 	1),
};
