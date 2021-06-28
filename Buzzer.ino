#define SENSOR1 3 // pin 3 for  sensor
#define SENSOR2 5 // pin 5 for  2nd sensor
#define BUZZER 12 // pin 12 for buzzer
#define GREENLED 10 // pin 10 for green led
#define REDLED 9 // pin 9 for red led

void setup() {
  Serial.begin(115200);
  Serial.println("Test");
  pinMode(SENSOR1, INPUT);//define detect input pin
  pinMode(SENSOR2, INPUT);//define detect input pin
  pinMode(BUZZER, OUTPUT);//define detect output pin
  pinMode(GREENLED, OUTPUT);
  pinMode(REDLED, OUTPUT);

}


void ledOn(int pin) {

  digitalWrite(pin, HIGH);
}

void ledOff(int pin) {

  digitalWrite(pin, LOW);
}

void loop() {

  int firstdetected;
  int seconddetected;

  ledOff(GREENLED);
  ledOff(REDLED);

  if (millis() > 2000) {

  firstdetected = digitalRead(SENSOR1); // read Laser sensor
  seconddetected = digitalRead(SENSOR2); // read Laser sensor

    Serial.println(firstdetected);
    Serial.println(seconddetected);


    if (firstdetected == 1) {
    tone(BUZZER, 700, 100);
    delay(200);
    noTone(BUZZER);
    ledOn(GREENLED);
    }
    
    if (seconddetected == 1) {
    //hasRun = true;
    ledOn(REDLED);
    ledOff(GREENLED);
    tone(BUZZER, 350);
    delay(500);
    tone(BUZZER, 500);
    delay(500);
    tone(BUZZER, 350);
    delay(500);
    tone(BUZZER, 500);
    delay(500);
    tone(BUZZER, 350);
    delay(500);
    tone(BUZZER, 500);
    delay(500);
    tone(BUZZER, 350);
    delay(500);
    tone(BUZZER, 500);
    delay(500);
    tone(BUZZER, 350);
    delay(500);
    tone(BUZZER, 500);
    delay(500);
    tone(BUZZER, 350);
    delay(500);
    tone(BUZZER, 500);
    delay(500);
    
  }

  delay(10);

  }

}
