

int buzzer=8;
int LED=7;
int flame_sensor=4;
int flame_detected;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzer,OUTPUT);
  pinMode(LED,OUTPUT);
  pinMode(flame_sensor,INPUT);

}

void loop() {
  flame_detected=digitalRead(flame_sensor);
  if(flame_detected==1)
  {
    Serial.println("flame detected!!! take action immediately");
    digitalWrite(buzzer,HIGH);
    delay(500);
    digitalWrite(buzzer,LOW);
    delay(20);
    digitalWrite(LED,HIGH);
    delay(200);
    digitalWrite(LED,LOW);
    delay(200);
  }
  else
  {
    Serial.println("no flame detected. stay cool");
    digitalWrite(buzzer,LOW);
    digitalWrite(LED,LOW);
  }
  delay(1000);
  // put your main code here, to run repeatedly:

}
