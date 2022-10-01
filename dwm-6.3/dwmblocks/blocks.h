//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" 🐧 ", "/opt/dwm/scripts/kernel"},
	{" 💻 ","/opt/dwm/scripts/memory",	30,		1}, 
	{" 🕑 ", "/opt/dwm/scripts/clock",	60,		0},  
	{" 🔊 ", "/opt/dwm/scripts/volume",     60,	       10},
	{"Dustin"},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
