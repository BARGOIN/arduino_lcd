
#include <LiquidCrystal_I2C.h> // Library for LCD
LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C address 0x27, 16 column and 2 rows



void setup() {
  lcd.init(); //initialize the lcd
  lcd.backlight(); //open the backlight 
  // put your setup code here, to run once:
  lcd.setCursor(0,0);
  lcd.print("Hello World!");

}

void loop() {
  // put your main code here, to run repeatedly:

}
