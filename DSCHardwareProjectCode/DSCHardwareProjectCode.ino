//Crossing Traffic Light System

void setup() {
   pinMode(0,OUTPUT);
   pinMode(1,OUTPUT);
   pinMode(2,OUTPUT);
   pinMode(3,OUTPUT);
   pinMode(4,OUTPUT);
   pinMode(5,OUTPUT);
   pinMode(9,OUTPUT);
   pinMode(10,OUTPUT);
   pinMode(11,OUTPUT);
   pinMode(A1,OUTPUT);
   pinMode(A3,OUTPUT);
   pinMode(A5,OUTPUT);
}

void loop() {
   Serial.begin(9600);
   digitalWrite(0,LOW);
   digitalWrite(1,LOW);
   digitalWrite(2,HIGH);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);
   digitalWrite(5,LOW);
   digitalWrite(11,HIGH);
   digitalWrite(10,LOW);
   digitalWrite(9,LOW);
   digitalWrite(A1,HIGH);
   digitalWrite(A3,LOW);
   digitalWrite(A5,LOW);
 
   
   
   delay(2000);
   digitalWrite(0,HIGH);
   digitalWrite(1,LOW);
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(5,HIGH);
   digitalWrite(11,LOW);
   digitalWrite(10,HIGH);
   digitalWrite(9,LOW);
   digitalWrite(A1,HIGH);
   digitalWrite(A3,LOW);
   digitalWrite(A5,LOW);
   
   
   delay(2000);
    digitalWrite(0,HIGH);
   digitalWrite(1,LOW);
   digitalWrite(2,LOW);
   digitalWrite(3,HIGH);
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);
   digitalWrite(11,LOW);
   digitalWrite(10,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(A1,LOW);
   digitalWrite(A3,HIGH);
   digitalWrite(A5,LOW);
   

   delay(2000);
   digitalWrite(0,LOW);
   digitalWrite(1,HIGH);
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);
   digitalWrite(5,LOW);
   digitalWrite(11,HIGH);
   digitalWrite(10,LOW);
   digitalWrite(9,LOW);
   digitalWrite(A1,LOW);
   digitalWrite(A3,LOW);
   digitalWrite(A5,HIGH);
   

   delay(2000);
   
   
   
   
}
