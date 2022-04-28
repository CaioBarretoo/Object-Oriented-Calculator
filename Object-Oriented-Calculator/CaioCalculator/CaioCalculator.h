#include "../interface.h"


class CaioDisplay: public Display{
  int countDigits = 0;

  public:
    void add(Digit );
    void setDecimalSeparator();
    void setSignal(Signal );
    void setError();
    void clear();
};

class CaioCpu: public Cpu{
  
  //INT
  int countDecimalSeparator = 0;
  int is_true_DecimalSeparator = 0;
  int operationCounter = 0;
  int operation = 0;      
  int countDigits = 0;
  int memory_disc = 0;
  int control_mrc = 0;
  int is_integer = 0;
  
  //FLOAT
  float operation1 = 0;
  float operation2 = 0;
  float memo = 0;
  float memory = 0;
  float memo1 = 0;
  float memo2 = 0;
  
  //CHAR
  char digit;
  char firstOperation[9];
  char secondOperation[9];
  
  //BOOL
  bool decimal_separator = false;
  bool control_operation;

  Operation store_operation;
  Signal signal;
  Operation receive_operation;


  char digitToChar(Digit );
  float charToFloat(char* );
  void convertResultToDigit(float );

  public:
    void receiveDigit(Digit );
    void receiveOperation(Operation );
    void receiveControl(Control );
};

class CaioKeyboard: public Keyboard{
  Key* keys[100];
  int keysCounter = 0;
  
   public:
      void addKey(Key* );
      void receiveDigit(Digit );
      void receiveOperation(Operation );
      void receiveControl(Control );
};

class CaioCalculator:public Calculator{ 
  Display* display;
  Cpu* cpu;
  Keyboard* keyboard;
  
  public:
    void setDisplay(Display* );
    void setCpu(Cpu* );
    void setKeyboard(Keyboard* );
};

class CaioKey:public Key{
  public:
    void press();
};
