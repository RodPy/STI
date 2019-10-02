
#include "Perceptron.h"
#include <HCSR04.h>

#define boton 7
#define led 2
UltraSonicDistanceSensor distanceSensor(13, 12);  // Initialize sensor that uses digital pins 13 and 12.

// Creamos un preceptron de para la entrada del sensor de distancia.
perceptron disPerceptron(2);//dos is for bias


void setup () {
    Serial.begin(9600);  // We initialize serial connection so that we could print values from sensor.
  pinMode(boton,INPUT);
  pinMode(led,OUTPUT);
    disPerceptron.randomize();//weight initialization

}

void loop () {
    //// 1ero. se lee el sensor y se guarda en el perceptron.
    disPerceptron.inputs[0]=distanceSensor.measureDistanceCm();


    // Crear el peso
    float guess = disPerceptron.feedForward();

    
    Serial.println(distanceSensor.measureDistanceCm());  
    // boton de corrección.
    if (digitalRead(boton)==1){
      disPerceptron.train(-guess, guess);
      delay(1000);
      }

 //Resultado
  uint32_t c;
  if (guess == 1) {
    digitalWrite(led,HIGH);
    Serial.println("Match");
  }
  else {
        digitalWrite(led,LOW);
    Serial.println("No Match");

  }
}
