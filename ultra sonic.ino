int triggerpin=9;
int echopin=10;
long duration;
long distance;
void setup()
{
  Serial.begin(9600);
  pinMode(triggerpin, OUTPUT);
  pinMode(echopin, INPUT);
}
void loop()
{
  digitalWrite(triggerpin, LOW);
  delay(1);
  digitalWrite(triggerpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerpin, LOW);
  
   duration = pulseIn(echopin, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance in (cm): ");
Serial.println(distance);
  
}