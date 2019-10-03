
int  leda=16;  
int ledb=5;    
int ledc=4;    
int ledd=2;    
int ledx=14;
int ledy=12;
int boton=13;
 
int tiempo=300;
int tiempo1=100;


 
 void setup() {
  // Se configuran comportamiento de los pines de la placa
    pinMode(leda,OUTPUT);
    pinMode(ledb,OUTPUT);
  pinMode(ledc,OUTPUT);
  pinMode(ledd,OUTPUT);
  pinMode(ledx,INPUT);
  pinMode(ledy,INPUT);
  Serial.begin(9600);

  
 }






void loop(){
digitalRead(ledx);
digitalRead(ledy);
digitalRead(boton);
Serial.println(digitalRead(boton));

}

  void Luces(){
    
    digitalWrite (leda,HIGH);
    digitalWrite (ledb,LOW);
    digitalWrite (ledc,LOW);
    digitalWrite (ledd,LOW);
    }
void ventilador(){
    
    digitalWrite (leda,LOW);
    digitalWrite (ledb,HIGH);
    digitalWrite (ledc,LOW);
    digitalWrite (ledd,LOW);
    }
void  puerta(){
    
    digitalWrite (leda,LOW);
    digitalWrite (ledb,LOW);
    digitalWrite (ledc,HIGH);
    digitalWrite (ledd,LOW);
    }

    void ventana(){
    
    digitalWrite (leda,LOW);
    digitalWrite (ledb,LOW);
    digitalWrite (ledc,LOW);
    digitalWrite (ledd,HIGH);
    }
    





