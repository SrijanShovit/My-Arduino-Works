int readPin=A3;
int readVal=0;
int waitTime=2000;
float V2=0;
void setup() {
  // put your setup code here, to run once:

pinMode (readPin,INPUT);
Serial.begin(9600);            //Setting our serial monitor

}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(readPin);            //reading from A3 and storing in V2
V2=(5.0/1023.0)*readVal;
Serial.println(V2);
delay(waitTime);
}
