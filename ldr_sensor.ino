int ldr;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  ldr = analogRead(A0);
  
  if (ldr < 50) {
      digitalWrite(13, HIGH);
      delay(5000);
      digitalWrite(13, LOW);
      delay(10000);
    
  } else {
    digitalWrite(13, LOW);
  }
  Serial.println(motor);
  delay(60);

}
