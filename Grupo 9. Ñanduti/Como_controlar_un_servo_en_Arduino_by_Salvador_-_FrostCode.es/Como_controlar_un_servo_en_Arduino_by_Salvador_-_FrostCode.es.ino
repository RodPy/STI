
/*
Codigo realizado por Salvador Ruiz Sedeño el 21-9-2014 

Mas info en: http://www.frostcode.es/

Codigo para aprender a controlar un servo.
Puedes ver el Tutorial en vídeo en Youtube: http://www.youtube.com/watch?v=w_25s2bt6qA

*/




//Incluimos la libreria servo
#include <Servo.h>

//Iniciamos el Servo
Servo servo1;



void setup()
{
  //Le decimos donde esta conectado
  servo1.attach(11);
}


void loop()
{
  //Le mandamos que escriba 0º
  servo1.write(90);

}
