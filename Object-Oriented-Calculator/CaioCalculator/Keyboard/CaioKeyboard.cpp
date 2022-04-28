#include "../CaioCalculator.h"

  void CaioKeyboard::addKey(Key* key){
    this->keys[keysCounter] = key;
    this->keysCounter++;
  }

  void CaioKeyboard::receiveDigit(Digit digit){
     this->cpu?this->cpu->receiveDigit(digit):void();
  }

  void CaioKeyboard::receiveOperation(Operation operation){
    this->cpu?this->cpu->receiveOperation(operation):void();
  }

  void CaioKeyboard::receiveControl(Control control){
    this->cpu?this->cpu->receiveControl(control):void();
  }