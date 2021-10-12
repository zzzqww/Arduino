const int analogInPin = A0;  
const int analogOutPin = A4; 

int sensorValue = 0;      
int outputValue = 0;    

void setup() {

  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);

  outputValue = map(sensorValue, 0, 1023, 0, 255);

  analogWrite(analogOutPin, outputValue);


  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);

 
  delay(2);
}
