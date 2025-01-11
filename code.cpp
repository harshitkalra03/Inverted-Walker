//defining the pins of the motor shield (L293D) on arduino.

#define IN1 3  
#define IN2 5
#define IN3 10
#define IN4 11
#define EN1 6
#define EN2 9

void setup(){
  //declaring direction pins of motors as OUTPUT.
  pinMode(IN1, OUTPUT);  
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(EN1, OUTPUT);  //pin to control speed of motor 1.
  pinMode(EN2, OUTPUT);  //pin to control speed of motor 2.

  //setting direction pins of the two motors to zero, to stop rotating it.
  digitalWrite(IN1, LOW); 
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void loop(){
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(EN1, 255);
  analogWrite(EN2, 0);
  delay(1825); //3650 millisecond delay for one complete circle of the crank attached to motor 1.

  analogWrite(EN1, 0);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(EN2, 255); 
  delay(1825x );  //3650 millisecond delay for one complete circle of the crank attached to motor 1.
}