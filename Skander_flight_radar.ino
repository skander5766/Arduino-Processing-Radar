#include <Servo.h>

const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 11;

long duration;
int distance;
Servo myServo;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop() {
  // Balayage rapide de 15 à 165 degrés
  for (int i = 15; i <= 165; i += 2) {   // i += 2 saute de 2° en 2° pour doubler la vitesse
    myServo.write(i);
    delay(10); // Réduit de 30ms à 10ms
    distance = calculateDistance();
    
    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
  }
  
  // Balayage retour rapide de 165 à 15 degrés
  for (int i = 165; i > 15; i -= 2) {  
    myServo.write(i);
    delay(10); // Réduit de 30ms à 10ms
    distance = calculateDistance();
    
    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
  }
}

int calculateDistance() { 
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  return distance;
}