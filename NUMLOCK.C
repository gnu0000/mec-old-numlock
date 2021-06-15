#define INCL_KBD

#include <os2.h>

int main (void)
   {
   KBDINFO kbdi;
   USHORT usError;

   kbdi.cb = sizeof kbdi;

   usError = KbdGetStatus (&kbdi, 0);

   kbdi.fsMask |= KEYBOARD_MODIFY_STATE;
   kbdi.fsState &= ~NUMLOCK_ON;

   usError = KbdSetStatus (&kbdi, 0);
   return 0;
   }
