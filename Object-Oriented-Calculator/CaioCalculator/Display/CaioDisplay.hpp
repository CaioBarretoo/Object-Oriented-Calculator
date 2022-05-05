#include "../../interface.h"

class CaioDisplay: public Display{
  int countDigits = 0;

  public:
    CaioDisplay();
    void add(Digit );
    void setDecimalSeparator();
    void setSignal(Signal );
    void setError();
    void clear();
};
