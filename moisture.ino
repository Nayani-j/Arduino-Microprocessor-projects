int WET= 3; 
int DRY= 2;  
int Sensor= 0; // Soil Sensor input at Analog PIN A0
int value= 0;

void setup() {
   Serial.begin(9600);
   pinMode(WET, OUTPUT);
   pinMode(DRY, OUTPUT);
   
}

void loop() {
   Serial.print("MOISTURE LEVEL : ");
   value= analogRead(Sensor);
   value= value/10;
   Serial.println(value);
   if(value<60)
   {
Serial.println(" Soil Moisture content is HIGH");
      digitalWrite(WET, HIGH);

   }
   else
   {
      Serial.println(" Soil Moisture content is LOW");
      digitalWrite(DRY,HIGH);
   }
   delay(1000);
   digitalWrite(WET,LOW);
   digitalWrite(DRY, LOW);
}


