/* resize.c - Set maximum terminal width and height
 *
 *

USE_RESIZE(NEWTOY(resize, "c#<1>63sw", TOYFLAG_BIN|TOYFLAG_USR))

config RESIZE
  bool "resize"
  default n
  help
    usage: resize

    reset terminal to maximum width and height

*/

#define FOR_resize
#include "toys.h"

void resize_main(void)
{
  struct winsize w = { 0, 0, 0, 0 };
  struct termios *old = (struct termios *)toybuf;
  struct termios new;

  tcgetattr(2, old);
  memcpy(&new, old, sizeof(new));
  new.c_cflag |= (CLOCAL | CREAD);
  new.c_lflag &= ~(ICANON | ECHO | ECHOE | ISIG);
  tcsetattr(2, TCSANOW, &new);

  // set cursor to 999,999, read back where it landed
  fprintf(stderr, "\0337\033[r\033[999;999H\033[6n");
  scanf("\033[%hu;%huR", &w.ws_row, &w.ws_col);
  fprintf(stderr, "\0338");

  ioctl(2, TIOCSWINSZ, &w);
  tcsetattr(2, TCSANOW, old);
}
