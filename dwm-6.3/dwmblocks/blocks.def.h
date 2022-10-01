//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" 🐧 ", "uname -r"},
	{" 💻 ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{" 🕑 ", "date '+%b %d (%a) %I:%M%p'",					5,		0},
	{" 🔊 ", "amixer get Master | tail -n1 | sed -r 's/.*\[(.*)%\].*/\1/'", 0, 		10},
	{"Dustin"}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
