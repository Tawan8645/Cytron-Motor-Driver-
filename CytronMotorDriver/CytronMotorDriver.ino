// Motor A
#define M1A 27
#define M1B 26

// Motor B
#define M2A 25
#define M2B 33

float speed = 30;

void setup() {
  pinMode(M1A, OUTPUT);
  pinMode(M1B, OUTPUT);
  pinMode(M2A, OUTPUT);
  pinMode(M2B, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  forward();
  delay(2000);
  backword();
  delay(2000);
  right();
  delay(2000);
  left();
  delay(2000);
  stopRobot();
  delay(2000);
}

void forward() {
  Serial.println("forward");
  //#### Motor Driver 1 ####
  analogWrite(M1A, 0);
  analogWrite(M1B, speed);
  //#### Motor Driver 2 ####
  analogWrite(M2A, speed);
  analogWrite(M2B, 0);
}

void backword() {
  Serial.println("backword");
  //#### Motor Driver 1 ####
  analogWrite(M1A, speed);
  analogWrite(M1B, 0);
  //#### Motor Driver 2 ####
  analogWrite(M2A, 0);
  analogWrite(M2B, speed);
}
//////////////////////////////////////////////
void right() {
  Serial.println("right");
  //#### Motor Driver 1 ####
  analogWrite(M1A, speed);
  analogWrite(M1B, 0);
  //#### Motor Driver 2 ####
  analogWrite(M2A, speed);
  analogWrite(M2B, 0);
}
/////////////////////////////////////////////
void left() {
  Serial.println("left");
  //#### Motor Driver 1 ####
  analogWrite(M1A, 0);
  analogWrite(M1B, speed);
  //#### Motor Driver 2 ####
  analogWrite(M2A, 0);
  analogWrite(M2B, speed);
}
/////////////////////////////////////////////
void stopRobot() {
  Serial.println("stopRobot");
  //#### Motor Driver 1 ####
  analogWrite(M1A, 0);
  analogWrite(M1B, 0);
  //#### Motor Driver 2 ####
  analogWrite(M2A, 0);
  analogWrite(M2B, 0);
}
