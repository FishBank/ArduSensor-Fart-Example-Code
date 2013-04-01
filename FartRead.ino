/* FartRead

Reads the value of the ArduSensor Fart, and prints it out on the Serial
Monitor.

created by Quin (Qtechknow)
made on 1 Apr 13
 */

int ArduSensorValue;   // make a variable to hold the value of the ArduSensor

void setup() {
  Serial.begin(9600);  // start up the Serial Monitor
}

void loop() {
  ArduSensorValue=analogRead(0);   // assign the variable to the value of the sensor
  Serial.println(ArduSensorValue, DEC);  // print the value on the Serial Monitor
  delay(100);  // delay so the data doesn't come out too fast
}
