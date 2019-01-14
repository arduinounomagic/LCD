/*
*How to use LCD with Arduino uno
*This video describes how different commands such as print, display, noDisplay, cursor, noCursor, blink, clear works with the help of Arduino Uno to display something on LCD.
*
*for more detail about this project please visit:
*https://arduinounomagic.blogspot.com/2019/01/how-to-use-lcd-with-arduino-uno.html
*
*Copyright (C) 2007 Free Software Foundation, Inc. <arduinounomagic@gmail.com>
*for more projects based on Arduino uno please visit: https://arduinounomagic.blogspot.com/
*/


#include<LiquidCrystal.h>
LiquidCrystal ARDUINO_LCD(8, 2, 7, 6, 5, 4);// Set RS pin=8, Enable pin=2, D4=7, D5=6, D6=5, d7=4.  

void setup() 
{  
ARDUINO_LCD.begin(16, 2);//set up number of colomn and rows of LCD
ARDUINO_LCD.home();//Positions the cursor in the upper left corner of the LCD
}

void loop() {
  // put your main code here, to run repeatedly:
ARDUINO_LCD.print("Arduino Magic"); // Prints "Arduino Uno Magic" on the LCD 
 delay(2000); // 2 seconds delay 

 ARDUINO_LCD.setCursor(2,1); // Sets the location at which subsequent text written to the LCD will be displayed 
 ARDUINO_LCD.print("How to use LCD"); // Prints "How to use LCD" on the LCD 
 delay(2000); // 2 seconds delay 
 
  ARDUINO_LCD.noDisplay(); // Turns off the display
 delay(2000);// delay
 
 ARDUINO_LCD.display();//Turns on the display
 delay(2000);//delay

 
 ARDUINO_LCD.clear(); // Clears the display 
 delay(2000);//delay
 
 ARDUINO_LCD.blink(); //Displays the blinking LCD cursor 
 delay(2000); //delay
 
 ARDUINO_LCD.noBlink(); // Turns off the blinking LCD cursor
delay(2000); //delay

 ARDUINO_LCD.cursor(); // Displays an underscore (line) at the position to which the next character will be written 
 delay(5000); //delay
 
 ARDUINO_LCD.noCursor(); // Hides the LCD cursor 
 delay(5000); //delay
 
 ARDUINO_LCD.clear(); // Clears the LCD screen 
delay(2000); //delay

}
