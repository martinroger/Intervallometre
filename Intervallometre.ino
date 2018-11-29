
volatile int marche = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(13,OUTPUT);
  attachInterrupt(digitalPinToInterrupt(2),onoff,FALLING);
  digitalWrite(8,LOW);
  digitalWrite(13,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (marche == HIGH)
  {
    delay(2000);
  
  digitalWrite(8,HIGH);
  delay(2000);
  digitalWrite(8,LOW);
  }
}

void onoff() {
  marche = !marche;
  digitalWrite(13, marche);
}

