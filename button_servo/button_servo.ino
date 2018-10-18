#include <Servo.h>

Servo myservo;

int potpin = 0;
int val=0;
const int buttonPin = 13;
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  myservo.attach(9);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);
  
  Serial.println(buttonState);
  if(buttonState == LOW)
  {
    val = analogRead(potpin);            
    val = map(val, 0, 1023, 0, 180);    
    myservo.write(val);                  
    delay(15); 
  }

}
