
#define enA 10
#define in1 9
#define in2 8
int motorSpeedA = 100;

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  Serial.begin(115200);
}

void loop() {

    motorSpeedA = 255;
 
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);

  Serial.println(motorSpeedA);
  analogWrite(enA, motorSpeedA); // Send PWM signal to motor A

}
