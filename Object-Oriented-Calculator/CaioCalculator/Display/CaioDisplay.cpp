#include <iostream>
#include "CaioDisplay.hpp"

CaioDisplay::CaioDisplay(){
  this->add(ZERO);
}

//******************************************************************
//                   ADDING A DIGIT ON DISPLAY                     *
//******************************************************************

  void CaioDisplay::add(Digit digit){
    if(this->countDigits < 8){
      switch (digit){
      case ZERO: std::cout << "0"; break;
      case ONE: std::cout << "1"; break;
      case TWO: std::cout << "2"; break;
      case THREE: std::cout << "3"; break;
      case FOUR: std::cout << "4"; break;
      case FIVE: std::cout << "5"; break;
      case SIX: std::cout << "6"; break;
      case SEVEN: std::cout << "7"; break;
      case EIGHT: std::cout << "8"; break;
      case NINE: std::cout << "9"; break;
      this->countDigits++;
      }
    }
  }

//******************************************************************
//                  SETTING DECIMAL SEPARATOR                      *
//******************************************************************

  void CaioDisplay::setDecimalSeparator(){
      std::cout << ".";
  }

//******************************************************************
//                         SETTING SIGNAL                          *
//******************************************************************

  void CaioDisplay::setSignal(Signal signal){
    if(NEGATIVE) std::cout << "-"; 
  }

//******************************************************************
//                    SETTING ERROR ON DISPLAY                     *
//******************************************************************

  void CaioDisplay::setError(){
    this->clear();
    std::cout << "E";
  }

//******************************************************************
//                    CLEANING THE DISPLAY                         *
//******************************************************************

  void CaioDisplay::clear(){
    this->countDigits = 0;
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";
    // system("clear");
  
  }
