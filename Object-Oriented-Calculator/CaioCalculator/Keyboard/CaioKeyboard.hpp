#include "../../interface.h"

class CaioKeyboard: public Keyboard{
  Key* keys[100];
  int keysCounter = 0;
  
   public:
      void addKey(Key* );
      void receiveDigit(Digit );
      void receiveOperation(Operation );
      void receiveControl(Control );
};
