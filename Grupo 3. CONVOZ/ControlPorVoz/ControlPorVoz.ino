
/************************ Adafruit IO Configuration *******************************/

// visit io.adafruit.com if you need to create an account,
// or if you need your Adafruit IO key.
#define IO_USERNAME    "Hugui_Ale"
#define IO_KEY         "31f4aac4218d400aa0cc0141b9217e6b"


/******************************* WIFI Configuration **************************************/

#define WIFI_SSID       "mitic-cai-lab1"
#define WIFI_PASS       "m1t1c2019*"

#include "AdafruitIO_WiFi.h"
AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);

/************************ Main Program Starts Here *******************************/
#include <ESP8266WiFi.h> 
#include <AdafruitIO.h>
#include <Adafruit_MQTT.h>
#include <ArduinoHttpClient.h>

#define LED_PIN 5
#define OTHER_PIN 2

// button state
int current = 0;
int last = 0;

// set up the 'command' feed
AdafruitIO_Feed *command = io.feed("Luces");

void setup() {

  pinMode(LED_PIN, OUTPUT);
  pinMode(OTHER_PIN, OUTPUT);

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

  int command = data->toInt();

  if (command == 1){ //light up the LED
    Serial.print("received <- ");
    Serial.println(command);
     digitalWrite(LED_PIN, HIGH);
     digitalWrite(OTHER_PIN, HIGH);     
  } else {
    Serial.print("received <- ");
    Serial.println(command);
    digitalWrite(LED_PIN, LOW);
    digitalWrite(OTHER_PIN, LOW);
  }
}
