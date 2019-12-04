#include <ncurses.h>
#include <memory.h>


int main()
{
	initscr();
	char buff[300];
	for(int i=0;i<3;i++)
	{
		memset(buff,'\0', sizeof(buff));
		getnstr(buff,16);
		printw("%d, %s\n", i,buff);
	}
	refresh();
	getch();
	endwin();
	return 0;
}

