static char *menu_msg="                         Amiga emulator "
#ifdef DREAMCAST
 "for Dreamcast "
#else 
#ifdef DINGOO
 "for Dingoo "
#endif
#ifdef MAEMO_CHANGES
 "for Maemo "
#endif
#endif
 "by Chui"
#ifdef MAEMO_CHANGES
 " (ported by smoku)."
#else
 ".                    Second release Candidate."
#endif
 "                               GPL License.                                          ";

#define MAX_SCROLL_MSG (-1500)
