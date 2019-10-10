int  motor=16;
int boton=15;

void setup() {
pinMode(A0,INPUT);
pinMode(motor,OUTPUT);

Serial.begin(9600);

}

void loop() {

  Serial.println(analogRead(A0));
 
  int t =map(analogRead(A0),6,1024,1,500);
  digitalWrite(motor,HIGH);
  delay(t);
  digitalWrite(motor,LOW);
  delay(t);
}
