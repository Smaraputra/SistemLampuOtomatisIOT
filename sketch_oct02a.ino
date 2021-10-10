int hasilldr;
int pinrelay = 15;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinrelay,OUTPUT);
  digitalWrite(pinrelay,LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  hasilldr = analogRead(A0);
  Serial.println("----Report----");
  Serial.println("Intensitas Cahaya = ");
  Serial.println(hasilldr);

  if(hasilldr>=50){
    digitalWrite(pinrelay,LOW);
    Serial.println("Lampu Dimatikan");
  }else if(hasilldr<45){
    digitalWrite(pinrelay,HIGH);
    Serial.println("Lampu Dinyalakan");
  }

  delay(500);
}
