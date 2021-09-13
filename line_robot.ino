#include<stdio.h>
int left motor forward=3;
int left motor reverse =5;
int right motor forward=6;
int right motor reverse=9;
int left=A0;
int right=A1;



void setup() {
  // put your setup code here, to run once:
pinMode(leftmotorforward,OUTPUT);
pinMode(rightmotorforward,OUTPUT);
pinMode(leftmotorreverse,OUTPUT);
pinMode(rightmotorreverse,OUTPUT);
pinMode(left,INPUT);
pinMode(right,INPUT);
analogWrite(leftmotorforward,150);
analogWrite(rightmotorforward,150);
 
}

void loop() {
  // put your main code here, to run repeatedly:
if (analogread(left)<500 && analogread(right)<500) {
  analogWrite(leftmotorforward,150);
  analogWrite(rightmotorforward,150);
}

else if (analogread(left)<500 && analogread(right)>=500)
{
  analogWrite(leftmotorforward,130);
  analogWrite(righttmotorforward,LOW);
  
}
else if (analogread(left)>=500 && analogread(right)<500)
{
  analogWrite(legtmotor,LOW);
  analogWrite(rightmotor,HIGH);
}
else
{
  analogWrite(leftmotorforward,LOW);
  analogWrite(rightmotorforward,LOW);
  delay(1);
}
if (analogread(left)<500 && analogread(right)<500)
{
  analogWrite(leftmotorforward,250);
  analogWrite(leftmotorforward,250);
  else if (analogread(left)<500 && analogread(right)>=500)
  {
    analogWrite(leftmotorforward,250);
    analogWrite(rightmotorforward,250);
  }
  }
}
}
