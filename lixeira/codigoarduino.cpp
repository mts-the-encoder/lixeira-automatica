#include <Servo.h> 
#define trig 4   
#define echo 3  
Servo motor;  

void setup() {
   motor.attach(10);  
   pinMode(trig, OUTPUT);
   pinMode(echo, INPUT);  
}

void loop() {
    long duracao, distancia;
  digitalWrite(trig ,LOW);  
  delayMicroseconds(2);
  digitalWrite(trig ,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig ,LOW);
  duracao = pulseIn (echo, HIGH);
  distancia = (duracao/2) / 29.1;
    if (distancia < 30)

{
   motor.write(0); }
    else {
   motor.write(90);

} 
delay(3000);
}