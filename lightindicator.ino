const int led=12; // variable which stores pin number

void setup() 
{
  Serial.begin(9600);
pinMode(led, OUTPUT);  //configures pin 3 as OUTPUT
}

void loop() 
{
   int sensor_value = analogRead(A0);
  if (sensor_value > 500)// the point at which the state of LEDs change 
    { 
     Serial.println("light is on !");
      digitalWrite(led, HIGH);  //sets LEDs ON
    }
  else
    {
      Serial.println("light is off !");
      digitalWrite(led,LOW);  //Sets LEDs OFF
    }

}


