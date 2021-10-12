const int InPin = 5;  
const int OutPin = 2; 

int sensorValue = 0;      
int outputValue = 0;    

void setup() {

  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  sensorValue = digitalRead(InPin);

  outputValue = map(sensorValue, 0, 1, 0, 255);

  analogWrite(OutPin, outputValue);


  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);

 
  delay(2);
}
