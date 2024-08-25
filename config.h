/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#fcba03",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* number of failed password attempts until failcommand is executed.
   Set to 0 to disable */
static const int failcount = 7;

/* command to be executed after [failcount] failed password attempts */
static const char *failcommand = "shutdown -h now";

/* Background image path, should be available to the user above */
static const char* background_image = "/home/aaronshahriari/.local/bin/scripts/wallpapers/i3lock.png";
