#include "CaioKeyboard.hpp"

  void CaioKeyboard::addKey(Key* key){
    this->keys[keysCounter] = key;
    this->keysCounter++;

    key->setReceiver(this);
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
