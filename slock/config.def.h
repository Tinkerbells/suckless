/* user and group to drop privileges to */
static const char *user  = "untermensch";
static const char *group = "users";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#24273a",     /* after initialization */
	[INPUT] =  "#cad3f5",   /* during input */
	[FAILED] = "#ed8796",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
