#include<Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);// 0x3F , 0x20 , 0x38 , 

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();
  
  lcd.setCursor(2,0);
  lcd.print("SAMSUNG TECH"); 
  lcd.setCursor(3,1);
  lcd.print("INSTITUTE "); 
  delay(2000); 
}

void loop()  {

  smsLCD("Richard 2019", "A");

  }


void smsLCD(String a , String b){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(a); 
   lcd.setCursor(1,1);
  lcd.print(b); 
  delay(3000); 
  
  }
