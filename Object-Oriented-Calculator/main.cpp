#include <iostream>
#include "CaioCalculator/CaioCalculator.h"

int main() {
  CaioKeyboard keyboard;
  CaioCpu cpu;
  CaioDisplay display;
  CaioCalculator calculator;

  // Setting the display to the cpu component.
  cpu.setDisplay(&display);

  //Setting the cpu to the keyboard component.
  keyboard.setCpu(&cpu);

  //Setting all components to the Calculator.
  calculator.setDisplay(&display);
  calculator.setCpu(&cpu);
  calculator.setKeyboard(&keyboard);

  //Getting all number digits of the keyboard.
  KeyDigit key0(ZERO), key1(ONE), key2(TWO), key3(THREE), key4(FOUR), key5(FIVE), key6(SIX), 
  key7(SEVEN), key8(EIGHT), key9(NINE);

  //Setting the receivers to the numeric keys.
  key0.setReceiver(&keyboard);
  key1.setReceiver(&keyboard);
  key2.setReceiver(&keyboard);
  key3.setReceiver(&keyboard);
  key4.setReceiver(&keyboard);
  key5.setReceiver(&keyboard);
  key6.setReceiver(&keyboard);
  key7.setReceiver(&keyboard);
  key8.setReceiver(&keyboard);
  key9.setReceiver(&keyboard);

  //Getting all the control digits of the keyboard.
  KeyControl keyClear(CLEAR), keyReset(RESET), keyDecimalSeparator(DECIMAL_SEPARATOR), 
  keyMemoryReadClear(MEMORY_READ_CLEAR), keyMemoryAddition(MEMORY_ADDITION), 
  keyMemorySubtraction(MEMORY_SUBTRACTION), keyEqual(EQUAL);

  //Setting all the receivers to the control keys.
  keyClear.setReceiver(&cpu);
  keyReset.setReceiver(&cpu);
  keyDecimalSeparator.setReceiver(&cpu);
  keyMemoryReadClear.setReceiver(&cpu);
  keyMemoryAddition.setReceiver(&cpu);
  keyMemorySubtraction.setReceiver(&cpu);
  keyEqual.setReceiver(&cpu);

  //Getting all the operations digits of the keyboard.
  KeyOperation keyAddition(ADDITION), keySubtraction(SUBTRACTION), keyDivision(DIVISION), keyMultiplication(MULTIPLICATION),
  keySquareRoot(SQUARE_ROOT), keyPercentage(PERCENTAGE);

  //Setting all the receivers to the operation keys.
  keyAddition.setReceiver(&cpu);
  keySubtraction.setReceiver(&cpu);
  keyDivision.setReceiver(&cpu);
  keyMultiplication.setReceiver(&cpu);
  keySquareRoot.setReceiver(&cpu);
  keyPercentage.setReceiver(&cpu);

  //Adding all numeric keys on the Keyboard.
  keyboard.addKey(&key0);
  keyboard.addKey(&key1);
  keyboard.addKey(&key2);
  keyboard.addKey(&key3);
  keyboard.addKey(&key4);
  keyboard.addKey(&key5);
  keyboard.addKey(&key6);
  keyboard.addKey(&key7);
  keyboard.addKey(&key8);
  keyboard.addKey(&key9);

  //Adding all the operation keys on the Keyboard.
  keyboard.addKey(&keyAddition);
  keyboard.addKey(&keySubtraction);
  keyboard.addKey(&keyDivision);
  keyboard.addKey(&keyMultiplication);
  keyboard.addKey(&keySquareRoot);
  keyboard.addKey(&keyPercentage);

  //Adding all the control keys on the Keyboard.
  keyboard.addKey(&keyClear);
  keyboard.addKey(&keyReset);
  keyboard.addKey(&keyDecimalSeparator);
  keyboard.addKey(&keyMemoryReadClear);
  keyboard.addKey(&keyMemoryAddition);
  keyboard.addKey(&keyMemorySubtraction);
  keyboard.addKey(&keyEqual);


  key5.press();
  
  keyDivision.press();

  key2.press();

  keyEqual.press();
  
  std::cout << "\n";

  return 1;
}