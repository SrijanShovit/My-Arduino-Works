int redPin =5;
int waitTime = 2000;
int bright = 255;
void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(5,bright);
delay (waitTime+2000);
analogWrite(5,bright/5);
delay (waitTime+2000);
analogWrite(5,0);
delay (waitTime);
}
