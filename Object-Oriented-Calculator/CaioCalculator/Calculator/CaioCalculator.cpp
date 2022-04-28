#include "../CaioCalculator.h"

  void CaioCalculator::setDisplay(Display* display){
    this->display = display;
  }

  void CaioCalculator::setCpu(Cpu* cpu){
    this->cpu = cpu;
  }

  void CaioCalculator::setKeyboard(Keyboard* keyboard){
    this->keyboard = keyboard;
  }
