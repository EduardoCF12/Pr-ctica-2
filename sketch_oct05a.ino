void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

int pot1 = 0;
double temp;
void loop() {
  delay(1000);
  pot1=analogRead(A0);
  temp=map(pot1,0,1023,0,72);
  Serial.println(pot1);
  Serial.print("La temperatura es:");
  Serial.println(temp);
}
