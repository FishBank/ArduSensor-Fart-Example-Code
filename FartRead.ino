/* ArduSensor Fart Read

Reads the ArduSensor Fart, and prints how much it has been turned on the Serial
monitor

Qtechknow kits required:
  ArduSensor Fart
  
made on 12 July 12
created by Quin
*/

int ArduSensorValue;   // variable to store the value of the ArduSensor Fart
unsigned int delayTime = 60000;  // delay for the heater coil in the fart sensor
// to warm up

void setup() {
  Serial.begin(9600);  // start Serial communication at 9600 baud
  
  Serial.println("Waiting for fart sensor to warm up:"); // wait to warm up

  delay(delayTime);  // delay until the fart sensor is hot enough
}

void loop() {
  // assign the variable to the value of the ArduSensor Fart
  ArduSensorValue=analogRead(0);
  
  if(ArduSensorValue >= 120) {
    Serial.println("Fart Detected!");  // display "Fart Detected" if value is
  }else{  // too far over a certain threshold
    Serial.println("You currently are safe");  // display "You currently are
  }       // safe" if there is no readings of farts
  delay(100);
}
