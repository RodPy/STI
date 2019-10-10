

#define motor 16
#define led 5


int tiempo1=100;
int tiempo2=200;

void setup() {
  pinMode(motor, OUTPUT);
  pinMode(led, OUTPUT);

  Serial.begin(9600);
}



void loop() {


  digitalWrite(motor,HIGH);
  digitalWrite(motor,LOW);
}
