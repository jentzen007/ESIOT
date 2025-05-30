#include<LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6 ,d7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.print("Hello, World!");
}

void loop() {
  // put your main code here, to run repeatedly:

}
