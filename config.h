/* Maximum size of a command's stdout (in bytes and excl. null-delim) */
#define OUTBUFSIZE 32

/* File containing the daemon's pid */
const char PIDFILEPATH[] = "/tmp/dwmbricks-pid";

/* Bricks declaration */
const Brick bricks[] = {
  /* Command          , Update Interval , Tag */
  {"status ding"      , 0               , "test"}      ,
  {"status backlight" , 0               , "backlight"} ,
  {"status keymap"    , 0               , "xkb"}       ,
  {"status power"     , 60              , "power"}     ,
  {"status systime"   , 1               , "time"}      ,
};

/* Delimiter between bricks. */
static char delim[] = " | "; // TIL `char *arr != char arr[]'
