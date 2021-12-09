int pin1=6;
int pin2=5;
int pin3=4;
int pin4=3;
  
void setup() {
// put your setup code here, to run once:
pinMode (pin1,OUTPUT);
pinMode (pin2,OUTPUT);
pinMode (pin3,OUTPUT);
pinMode (pin4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //0
digitalWrite (pin1,LOW);
digitalWrite (pin2,LOW);
digitalWrite (pin3,LOW);
digitalWrite (pin4,LOW);
delay (2000);

//1
digitalWrite (pin1,HIGH);
digitalWrite (pin2,LOW);
digitalWrite (pin3,LOW);
digitalWrite (pin4,LOW);
delay (2000);

//2
digitalWrite (pin1,LOW);
digitalWrite (pin2,HIGH);
digitalWrite (pin3,LOW);
digitalWrite (pin4,LOW);
delay (2000);

//3
digitalWrite (pin1,HIGH);
digitalWrite (pin2,HIGH);
digitalWrite (pin3,LOW);
digitalWrite (pin4,LOW);
delay (2000);

//4
digitalWrite (pin1,LOW);
digitalWrite (pin2,LOW);
digitalWrite (pin3,HIGH);
digitalWrite (pin4,LOW);
delay (2000);

//5
digitalWrite (pin1,HIGH);
digitalWrite (pin2,LOW);
digitalWrite (pin3,HIGH);
digitalWrite (pin4,LOW);
delay (2000);

//6
digitalWrite (pin1,LOW);
digitalWrite (pin2,HIGH);
digitalWrite (pin3,HIGH);
digitalWrite (pin4,LOW);
delay (2000);

//7
digitalWrite (pin1,HIGH);
digitalWrite (pin2,HIGH);
digitalWrite (pin3,HIGH);
digitalWrite (pin4,LOW);
delay (2000);

//8
digitalWrite (pin1,LOW);
digitalWrite (pin2,LOW);
digitalWrite (pin3,LOW);
digitalWrite (pin4,HIGH);
delay (2000);

//9
digitalWrite (pin1,HIGH);
digitalWrite (pin2,LOW);
digitalWrite (pin3,LOW);
digitalWrite (pin4,HIGH);
delay (2000);

//10
digitalWrite (pin1,LOW);
digitalWrite (pin2,HIGH);
digitalWrite (pin3,LOW);
digitalWrite (pin4,HIGH);
delay (2000);

//11
digitalWrite (pin1,HIGH);
digitalWrite (pin2,HIGH);
digitalWrite (pin3,LOW);
digitalWrite (pin4,HIGH);
delay (2000);

//12
digitalWrite (pin1,LOW);
digitalWrite (pin2,LOW);
digitalWrite (pin3,HIGH);
digitalWrite (pin4,HIGH);
delay (2000);

//13
digitalWrite (pin1,HIGH);
digitalWrite (pin2,LOW);
digitalWrite (pin3,HIGH);
digitalWrite (pin4,HIGH);
delay (2000);

//14
digitalWrite (pin1,LOW);
digitalWrite (pin2,HIGH);
digitalWrite (pin3,HIGH);
digitalWrite (pin4,HIGH);
delay (2000);

//15
digitalWrite (pin1,HIGH);
digitalWrite (pin2,HIGH);
digitalWrite (pin3,HIGH);
digitalWrite (pin4,HIGH);
delay (2000);



}
