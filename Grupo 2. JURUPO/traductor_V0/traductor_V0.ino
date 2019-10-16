#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


int flexPin1 = A0; // sensor de flexion 1 conectado en PULGAR
int value1;
int flexPin2= A1; // sensor de flexion 2 conectado en INDICE
int value2;
int flexPin3 =A2; // sensor de flexion 3 conectado en MEDIO
int value3;
int flexPin4 = A3; // sensor de flexion 4 conectado en dedo ANULAR
int value4;
int flexPin5 = A5; // sensor de flexion 5 conectado en dedo MEÑIQUE
int value5;






void setup() {
 
 
  lcd.begin(16, 2);
  lcd.setCursor(0, 1);
  lcd.print("");
  Serial.begin(9600);
  delay(200);
 
}


void loop() {
  // codigo que se repetira


  
  value1 = analogRead(flexPin1);
  value2 = analogRead(flexPin2);
  value3 = analogRead(flexPin3);
  value4 = analogRead(flexPin4);
  value5 = analogRead(flexPin5);

//    Serial.println(value5);
//    Serial.println(value2);
//    Serial.println(value3);
//    Serial.println(value4);
//    Serial.println(value5);
//    delay(2000);
//    Serial.println("\n\n");

  if ((value1 <810) && ( value2 >720) && (value3 >635) && (value4 >610) && (value5 >685) ) //valores de cada dedo
  {
//    lcd.setCursor(4,0);
//    lcd.print("A");
//    digitalWrite(6, HIGH);
//    Serial.println("  A");
//    delay(1000);
// 
  }
  // LETRA B
// else {
//   
//  value1 = analogRead(flexPin1);
//  value2 = analogRead(flexPin2);
//  value3 = analogRead(flexPin3);
//  value4 = analogRead(flexPin4);
//  value5 = analogRead(flexPin5);
// 
//
  if ((value1 >910)&& (value2 >640) && (value3 >720 && value3 <740) && (value4 >630 && value4 <650) )
  {
//    lcd.setCursor(1, 0);
//    lcd.print("B");
//    digitalWrite(6, HIGH);
//    Serial.println("  B");
//    delay(1000);
//   
    }
// 
// else {
//   
//  value1 = analogRead(flexPin1);
//  value2 = analogRead(flexPin2);
//  value3 = analogRead(flexPin3);
//  value4 = analogRead(flexPin4);
//  value5 = analogRead(flexPin5);
// 
//
//  if ((value1 >190 && value1 <220)&&(value2 >650 && value2 <690)&& ( value3 >590 && value3 <650)  )
//  {
//    lcd.setCursor(2,0);
//    lcd.print("C");
//    digitalWrite(6, HIGH);
//    Serial.println("  C");
//    delay(2000);
//    }
//     else {
//   
//  value1 = analogRead(flexPin1);
//  value2 = analogRead(flexPin2);
//  value3 = analogRead(flexPin3);
//  value4 = analogRead(flexPin4);
//  value5 = analogRead(flexPin5);
// 
// 
//  if ((value1 >160 && value1 <190 )&& value2 >700 && (value3 >530 && value3 <570)  )
//  {
//    lcd.setCursor(3, 0);
//    lcd.print("D");
//    digitalWrite(6, HIGH);
//    Serial.println("  D");
//    delay(2000);
//    }
//      else {
//   
//  value1 = analogRead(flexPin1);
//  value2 = analogRead(flexPin2);
//  value3 = analogRead(flexPin3);
//  value4 = analogRead(flexPin4);
//  value5 = analogRead(flexPin5);
// 
// 
//  if ((value1 >920 ) 
//      && 
//      (value2 >760 ) 
//      && 
//      (value3 >775 )
//      && 
//      (value4 >800 ) 
//      && 
//      ( value5 >850) 
//      ){
//    lcd.setCursor(0, 0);
//    lcd.print("       ");
//    lcd.setCursor(0, 0);
//    lcd.print("    E");
//    digitalWrite(6, HIGH);
//    Serial.println("  E");
//    delay(2000);
//    }
//
//    else {
//   
//  value1 = analogRead(flexPin1);
//  value2 = analogRead(flexPin2);
//  value3 = analogRead(flexPin3);
//  value4 = analogRead(flexPin4);
//  value5 = analogRead(flexPin5);
// 
// 
//  if ((value1 >160 && value1 <190) && (value2 >540 && value2 <580) && (value3 >730 && value3 <760)  )
//  {
//    lcd.setCursor(0, 0);
//    lcd.print("       ");
//    lcd.setCursor(0, 0);
//    lcd.print("    F");
//    digitalWrite(6, HIGH);
//    Serial.println("  F");
//    delay(2000);
//    }
//
//    else {
//   
//  value1 = analogRead(flexPin1);
//  value2 = analogRead(flexPin2);
//  value3 = analogRead(flexPin3);
//  value4 = analogRead(flexPin4);
//  value5 = analogRead(flexPin5);
// 
// 
//  if ((value1 >155 && value1 <190) && (value2 >540 && value2 <580 ) && (value3 >530 && value3 <550)   )
//  {
//    lcd.setCursor(0, 0);
//    lcd.print("       ");
//    lcd.setCursor(0, 0);
//    lcd.print("    G");
//    digitalWrite(6, HIGH);
//    Serial.println("  G");
//    delay(2000);
//    }
//    else {
//   
//  value1 = analogRead(flexPin1);
//  value2 = analogRead(flexPin2);
//  value3 = analogRead(flexPin3);
//  value4 = analogRead(flexPin4);
//  value5 = analogRead(flexPin5);
// 
// 
//  if ((value1 >160 && value1 <170) && (value2 >760 && value2 <770) && (value3 >740 && value3 <760)  )
//  {
//    lcd.setCursor(1, 0);
//    lcd.print("H");
//   
//    digitalWrite(6, HIGH);
//    Serial.println("  H");
//    delay(2000);
//    }
//   
//    else {
//   
//  value1 = analogRead(flexPin1);
//  value2 = analogRead(flexPin2);
//  value3 = analogRead(flexPin3);
//  value4 = analogRead(flexPin4);
//  value5 = analogRead(flexPin5);
// 
// 
//  if ((value1 >150 && value1 <160) && (value2 >570 && value2 <590) && (value3 >560 && value3 <580)  && value5 >5)
//  {
//    lcd.setCursor(0, 0);
//    lcd.print("       ");
//    lcd.setCursor(0, 0);
//    lcd.print("    I");
//    digitalWrite(6, HIGH);
//    Serial.println("  I");
//    delay(2000);
//    }
//
//    else {
//   
//  value1 = analogRead(flexPin1);
//  value2 = analogRead(flexPin2);
//  value3 = analogRead(flexPin3);
//  value4 = analogRead(flexPin4);
//  value5 = analogRead(flexPin5);
// 
// 
//  if ((value1 >170 && value1 <190) && (value2 >560 && value2 <580) && (value3 >570 && value3 <590) && value5 >5)
//  {
//    lcd.setCursor(0, 0);
//    lcd.print("       ");
//    lcd.setCursor(0, 0);
//    lcd.print("    J");
//    digitalWrite(6, HIGH);
//    Serial.println("  J");
//    delay(2000);
//    }
//
//else {
//   
//  value1 = analogRead(flexPin1);
//  value2 = analogRead(flexPin2);
//  value3 = analogRead(flexPin3);
//  value4 = analogRead(flexPin4);
//  value5 = analogRead(flexPin5);
// 
// 
//  if ((value1 >220 && value1 <230) && (value2 >760 && value2 <790) && (value3 >740 && value3 <760) && (value4 >420 && value4 <440)  )
//  {
//    lcd.setCursor(0, 0);
//    lcd.print("       ");
//    lcd.setCursor(0, 0);
//    lcd.print("    K");
//    digitalWrite(6, HIGH);
//    Serial.println("  K");
//    delay(2000);
//    }
//   
//
//  else {
//   
//  value1 = analogRead(flexPin1);
//  value2 = analogRead(flexPin2);
//  value3 = analogRead(flexPin3);
//  value4 = analogRead(flexPin4);
//  value5 = analogRead(flexPin5);
// 
// 
//  if ((value1 >210 && value1 <240) && (value2 >750 && value2 <780) && (value3 >520 && value3 <540) && (value4 >410 && value4 <450) )
//  {
//    lcd.setCursor(3, 0);
//    lcd.print("L");
//    digitalWrite(6, HIGH);
//    Serial.println("  L");
//    delay(2000);
//    }
//
//     else {
//   
//  value1 = analogRead(flexPin1);
//  value2 = analogRead(flexPin2);
//  value3 = analogRead(flexPin3);
//  value4 = analogRead(flexPin4);
//  value5 = analogRead(flexPin5);
// 
// 
//  if ((value1 >165 && value1 <175) && (value2 >575 && value2 <600) && (value3 >610 && value3 <620) && (value4 >470 && value4 <490))
//  {
//    lcd.setCursor(2, 0);
//    lcd.print("O");
//    digitalWrite(6, HIGH);
//    Serial.println("  O");
//    delay(2000);
//    }
//
//     else {
//   
//  value1 = analogRead(flexPin1);
//  value2 = analogRead(flexPin2);
//  value3 = analogRead(flexPin3);
//  value4 = analogRead(flexPin4);
//  value5 = analogRead(flexPin5);
// 
// 
//  if ((value1 >150 && value1 <165) && (value2 >580 && value2 <590) && (value3 >600 && value3 <620) && (value4 >440 && value4 <450) )
//  {
//    lcd.setCursor(0, 0);
//    lcd.print("       ");
//    lcd.setCursor(0, 0);
//    lcd.print("    M");
//    digitalWrite(6, HIGH);
//    Serial.println("  M");
//    delay(2000);
//    }
//
//     
//     else {
//   
//  value1 = analogRead(flexPin1);
//  value2 = analogRead(flexPin2);
//  value3 = analogRead(flexPin3);
//  value4 = analogRead(flexPin4);
//  value5 = analogRead(flexPin5);
// 
// 
//  if ((value1 >170 && value1 <180) && (value2 >760 && value2 <780) && (value3 >650 && value3 <670) && (value4 >530 && value4 <540) && value5 >1)
//  {
//    lcd.setCursor(0, 0);
//    lcd.print("       ");
//    lcd.setCursor(0, 0);
//    lcd.print("    U");
//    digitalWrite(6, HIGH);
//    Serial.println("  U");
//    delay(2000);
//    }
//
//     else {
//   
//  value1 = analogRead(flexPin1);
//  value2 = analogRead(flexPin2);
//  value3 = analogRead(flexPin3);
//  value4 = analogRead(flexPin4);
//  value5 = analogRead(flexPin5);
// 
// 
//  if ((value1 >150 && value1 <230) && (value2 >500 && value2 <560) && (value3 >570 && value3 <590) && (value4 >460 && value4 <490) && (value5 >330 && value5 <350))
//  {
//    lcd.setCursor(0, 0);
//    lcd.print("       ");
//    lcd.setCursor(0, 0);
//    lcd.print("    S");
//    digitalWrite(6, HIGH);
//    Serial.println("  S");
//    delay(2000);
//    }
//
//   
//   
//
//
//
//     }
//     }
//     }
//     }
//   
//     }
//     }
//  }
//}
//}
//}   
//}
//}
//}
//}
//}

}
