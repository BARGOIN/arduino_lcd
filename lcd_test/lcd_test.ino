
#include <LiquidCrystal_I2C.h> // Library for LCD
LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C address 0x27, 16 column and 2 rows

int potar;
char buffer[16];

void setup() {
  lcd.init(); //initialize the lcd
  lcd.backlight(); //open the backlight 
  // put your setup code here, to run once:
  // lcd.setCursor(0,0);
  // lcd.print("Hello World!");

}

void loop() {
  
//  lcd.print(''); // put your main code here, to run repeatedly:
// potar= valeur que je lis sur A0
potar=analogRead(A0);
// je place le curseur pour l affichage en haut et a gauche
lcd.setCursor(0,0);
// je prends la valeur de potar que je formate dans buffer
sprintf(buffer, "APERO %04d",potar);
// j affiche buffer
lcd.print(buffer);
// delay(50);
// sprintf()

}
