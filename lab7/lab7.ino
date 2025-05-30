#include<DHT.h>;
#include<Wire.h>;
#include<LiquidCrystal_I2C.h>;

DHT dht(12, DHT11);
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  dht.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  int h = dht.readHumidity();
  int t = dht.readTemperature();

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Temperature: ");
  lcd.print(t);
  lcd.print("C");
  lcd.setCursor(0,1);
  lcd.print("Humidity: ");
  lcd.print(h);
  lcd.print("%");

  delay(500);

}
