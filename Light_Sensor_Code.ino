#define SENSOR1 2 // pin 2 for  sensor
#define SENSOR2 4 // pin 4 for  2nd sensor

unsigned long myTime;
unsigned long myTime2;

boolean hasRun = false;
boolean hasRun2 = false;

void setup() {
  Serial.begin(115200);
  Serial.println("Test");
  pinMode(SENSOR1, INPUT);//define detect input pin
  //pinMode(SENSOR2, INPUT);//define detect input pin
}
void loop() {

  int firstdetected;
  //int seconddetected;

  if (millis() > 2000) {

  firstdetected = digitalRead(SENSOR1); // read Laser sensor
  //seconddetected = digitalRead(SENSOR2); // read Laser sensor
  

    if (firstdetected == 1 and hasRun == false) {
    hasRun = true;
    Serial.print("Time1: ");
    myTime = millis();
    Serial.println(myTime); //prints time since program started
  }

  if (seconddetected == 1 and hasRun2 == false) {
    hasRun2 = true;
    Serial.print("Time2: ");
    myTime2 = millis();
    Serial.println(myTime2); //prints time since program started
  }
  
  delay(10);

  }

}
