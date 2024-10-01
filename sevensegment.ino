
int f=13;
int g= 12;
int e=11;
int d=10;
int c=9;
int b=8;
int a=7;
void setup() {
  // put your setup code here, to run once:
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);
pinMode(e,OUTPUT);
pinMode(d,OUTPUT);
pinMode(c,OUTPUT);
pinMode(b,OUTPUT);
pinMode(a,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,1);
digitalWrite(g,0);
///this code is for zero
delay(500);
digitalWrite(a,0);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,0);
digitalWrite(g,0);
delay(500);
/// this is for one
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,0);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,0);
digitalWrite(g,1);
delay(500);
/// this is for 2
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,1);
digitalWrite(e,0);
digitalWrite(f,0);
digitalWrite(g,1);
delay(500);
/// code for 3
digitalWrite(a,0);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,1);
digitalWrite(g,1);
delay(500);
///code for 4
digitalWrite(a,1);
digitalWrite(b,0);
digitalWrite(c,1);
digitalWrite(d,1);
digitalWrite(e,0);
digitalWrite(f,1);
digitalWrite(g,1);
delay(500);
///5
digitalWrite(a,1);
digitalWrite(b,0);
digitalWrite(c,1);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,1);
digitalWrite(g,1);
delay(500);
///6
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,0);
digitalWrite(g,0);
delay(500);
///7
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,1);
digitalWrite(g,1);
delay(500);
///8
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,1);
digitalWrite(g,1);
delay(500);
///9












}
