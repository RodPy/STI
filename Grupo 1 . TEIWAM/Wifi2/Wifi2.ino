
/************************ Adafruit IO Configuration *******************************/

// visit io.adafruit.com if you need to create an account,
// or if you need your Adafruit IO key.
#define IO_USERNAME    "conVoz"
#define IO_KEY         "5bba3b5b9ed74dada721ac2225e28886"


/******************************* WIFI Configuration **************************************/

#define WIFI_SSID       "MITIC-CAI-LAB2"
#define WIFI_PASS       "m1t1c2019**"

#include "AdafruitIO_WiFi.h"
AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);

/************************ Main Program Starts Here *******************************/
#include <ESP8266WiFi.h> 
#include <AdafruitIO.h>
#include <Adafruit_MQTT.h>
#include <ArduinoHttpClient.h>

#define rele1 16
#define rele2 5
#define rele3 4
#define rele4 2
#define rele5 14
#define rele6 16




// button state
int current = 0;
int last = 0;

// set up the 'command' feed
AdafruitIO_Feed *command = io.feed("convoz");

void setup() {

  pinMode(rele1, OUTPUT);
  pinMode(rele2, OUTPUT);
  pinMode(rele3, OUTPUT);
  pinMode(rele4, OUTPUT);
  pinMode(rele5, OUTPUT);
  pinMode(rele6, OUTPUT);

  

  // start the serial connection
  Serial.begin(115200);

  // connect to io.adafruit.com
  Serial.print("Connecting to Adafruit IO");
  io.connect();
  
  // set up a message handler for the 'command' feed.
  // the handleMessage function (defined below)
  // will be called whenever a message is
  // received from adafruit io.
  command->onMessage(handleMessage);

  // wait for a connection
  while(io.status() < AIO_CONNECTED) {
    Serial.print(".");
    delay(500);
  }

  // we are connected
  Serial.println();
  Serial.println(io.statusText());

}

void loop() {

  // io.run(); is required for all sketches.
  // it should always be present at the top of your loop
  // function. it keeps the client connected to
  // io.adafruit.com, and processes any incoming data.
  io.run();
}

// this function is called whenever a 'command' message
// is received from Adafruit IO. it was attached to
// the command feed in the setup() function above.
void handleMessage(AdafruitIO_Data *data) {

  //int command = data->toInt();
String command = data->toString();
  
  if (command == "1"){ //luces prendidas
    Serial.print("received <- ");
    Serial.println(command);
 digitalWrite(rele1, HIGH);
   
  } 

if (command == "0"){ //luces apagadas
    Serial.print("received <- ");
    Serial.println(command);
 digitalWrite(rele1, LOW);
     
  } 

//  if (command == "V1"){ //ABRIR VENTANA
//    Serial.print("received <- ");
//    Serial.println(command);
//
// digitalWrite(rele2, HIGH);     
//  
//  } 
//
//  if (command == "V2"){ //CERRAR VENTANA
//    Serial.print("received <- ");
//    Serial.println(command);
//
// digitalWrite(rele2, LOW);     
//     
//  } 
//
//  if (command == "B1"){ VENTILADOR ON
//    Serial.print("received <- ");
//    Serial.println(command);
//    
// digitalWrite(rele3, HIGH);    
//   
//  } 
//
//  if (command == "B2"){ //VENTILADOR OFF
//    Serial.print("received <- ");
//    Serial.println(command);
//
// digitalWrite(rele3, LOW);    
//     
//  } 
//
//  if (command == "P1"){ //PUERTA ABRIR
//    Serial.print("received <- ");
//    Serial.println(command);
//
// digitalWrite(rele4, HIGH);
//   
//  } 
//
//  if (command == "P2"){ //PUERTA CERRAR
//    Serial.print("received <- ");
//    Serial.println(command);
//
// digitalWrite(rele4, LOW);
//  
//  } 
//
//  if (command == "A1"){ //AIRE ON
//    Serial.print("received <- ");
//    Serial.println(command);
//
// digitalWrite(rele5, HIGH);
//   
//  } 
//
//  if (command == "A2"){ //AIRE OFF
//    Serial.print("received <- ");
//    Serial.println(command);
//
// digitalWrite(rele5, LOW);
//   
//  } 
//
//  if (command == "T1"){ //lTELE
//    Serial.print("received <- ");
//    Serial.println(command);
//
// digitalWrite(rele6, HIGH);      
//  } 
//
//  if (command == "T2"){ //luces prendidas
//    Serial.print("received <- ");
//    Serial.println(command);
//
// digitalWrite(rele6, LOW);      
//  } 
//
//
//
//if (command == "aa2"){ //TODO ON
//    Serial.print("received <- ");
//    Serial.println(command);
// digitalWrite(rele1, HIGH);
// digitalWrite(rele2, HIGH);     
// digitalWrite(rele3, HIGH);    
// digitalWrite(rele4, HIGH);
// digitalWrite(rele5, HIGH);
// digitalWrite(rele6, HIGH);      
//  }   
////
//if (command =="TT1" ){ //TODO OFF
//    Serial.print("received <- ");
//    Serial.println(command);
// digitalWrite(rele1, LOW);
// digitalWrite(rele2, LOW);     
// digitalWrite(rele3, LOW);    
// digitalWrite(rele4, LOW);
// digitalWrite(rele5, LOW);
// digitalWrite(rele6, LOW);   
//
//
// } 
//
//int tt1=100;
//
//  
//
//if (command == "TT12") { //Todo
//for(;;){
//    Serial.print("received <- ");
//    Serial.println(command);
//    digitalWrite(rele1, HIGH);
//    delay(tt1);
//    digitalWrite(rele2, HIGH);     
// delay(tt1);
// digitalWrite(rele3, HIGH);    
// delay(tt1);
// digitalWrite(rele4, HIGH);
// delay(tt1);
// digitalWrite(rele5, HIGH);
// delay(tt1);
// digitalWrite(rele6, HIGH);      
// delay(tt1);
//  digitalWrite(rele1, LOW);
//   delay(tt1);
// digitalWrite(rele2, LOW);     
// delay(tt1);
// digitalWrite(rele3, LOW);    
//  delay(tt1);
// digitalWrite(rele4, LOW);
//  delay(tt1);
// digitalWrite(rele5, LOW);
//  delay(tt1);
// digitalWrite(rele6, LOW); 
//   delay(tt1);
//
//}
//  }  



}

 


  
