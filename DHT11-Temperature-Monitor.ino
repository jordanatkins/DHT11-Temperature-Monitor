/*

    Arduino Temperature Monitor

    Made on a hot, humid and sleepless night by @jordanatkins

*/


#include <dht.h>
#include <SPI.h>
#include <LiquidCrystal.h>


LiquidCrystal lcd(8, 13, 9, 4, 5, 6, 7);

#define dht_apin A1
dht DHT;
void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  lcd.setCursor(0, 0);
  lcd.print("Starting up");
  delay(500);
  lcd.clear();
  lcd.print("Starting up.");
  delay(500);
  lcd.clear();
  lcd.print("Starting up..");
  delay(500);
  lcd.clear();
  lcd.print("Starting up...");
  delay(500);
  lcd.clear();
  lcd.print("Starting up");
  delay(500);
  lcd.clear();
  lcd.print("Starting up.");
  delay(500);
  lcd.clear();
  lcd.print("Starting up..");
  delay(500);
  lcd.clear();
  lcd.print("Starting up...");
  lcd.clear();

}

void loop() {
  DHT.read11(dht_apin);
  Serial.print("Humidity = ");
  Serial.print(DHT.humidity);
  Serial.print("%  ");
  Serial.print("Temperature = ");
  Serial.print(DHT.temperature);
  Serial.println("C  ");

  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(DHT.temperature);
  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");
  lcd.print(DHT.humidity);
  delay(2000);
}
