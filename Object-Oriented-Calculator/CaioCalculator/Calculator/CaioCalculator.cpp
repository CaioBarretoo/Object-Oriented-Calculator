#include "CaioCalculator.hpp"

//******************************************************************
//               SETTING DISPLAY ON CALCULATOR                     *
//******************************************************************

  void CaioCalculator::setDisplay(Display* display){
    this->display = display;
  }

//******************************************************************
//               SETTING CPU ON CALCULATOR                     *
//******************************************************************

  void CaioCalculator::setCpu(Cpu* cpu){
    this->cpu = cpu;
  }

//******************************************************************
//               SETTING KEYBOARD ON CALCULATOR                     *
//******************************************************************

  void CaioCalculator::setKeyboard(Keyboard* keyboard){
    this->keyboard = keyboard;
  }
