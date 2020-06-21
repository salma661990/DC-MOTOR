int motorR_F = 5;
int motorR_B= 6;
int motorL_F = 9;
int motorL_B = 10;

void setup() {
 pinMode(motorR_F,OUTPUT);
 pinMode(motorR_B,OUTPUT);
 pinMode(motorL_F,OUTPUT);
 pinMode(motorL_B,OUTPUT);
}

void loop() {
 
  analogWrite(motorR_F, 255);
  analogWrite(motorR_B, 0);
  
  analogWrite(motorL_F, 255);
  analogWrite(motorL_B, 0);
  delay(100);
}
