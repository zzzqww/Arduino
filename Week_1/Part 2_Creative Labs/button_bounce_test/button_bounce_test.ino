#include <Bounce2.h>

#define buttonPin 12
#define LED0 10
#define LED1 9
#define LED2 8
#define LED3 7
#define LED4 6
#define LED5 5
#define LED6 4
#define LED7 3
#define LED8 2
#define LED9 1
int x = 0;



// Instantiate a Bounce object called button 
Bounce button = Bounce();

unsigned long buttonPressStartTimeStamp;
unsigned long buttonPressEndTimeStamp;
unsigned long buttonPressDuration;
int timeReleased = 0;    
int startPressed = 0;   

void setup() {
  Serial.begin(115200);
  Serial.println("Button Press Duration Example");
  // Setup the button with an internal pull-up
  pinMode(buttonPin, INPUT_PULLUP);
  button.attach(buttonPin);
  button.interval(20);//set debounce interval

  pinMode(LED0,OUTPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(LED7,OUTPUT);
  pinMode(LED8,OUTPUT);
  pinMode(LED9,OUTPUT);
  digitalWrite(LED0,LOW);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);
  digitalWrite(LED6,LOW);
  digitalWrite(LED7,LOW);
  digitalWrite(LED8,LOW);
  digitalWrite(LED9,LOW);


  
}

void loop() {

  int SecDur = 100;
  int SecStart = 1000;
  int SecBlink = 100;
  int SecEnd = 300;
  
  // Update the Bounce instance, does digitalRead of button
  button.update();

  // Button press transition from HIGH to LOW)
   if (button.rose())
  {
    digitalWrite(LED0,HIGH);
    buttonPressStartTimeStamp = millis();
  }

  
  if (button.fell())
  {
    digitalWrite(LED0,LOW);
    buttonPressEndTimeStamp = millis();
    buttonPressDuration = (millis() - buttonPressStartTimeStamp);
    Serial.print("Button pressed for ");
    Serial.print(buttonPressDuration); 
    Serial.println(" milliseconds");   

    if (buttonPressDuration >=0 && buttonPressDuration <1000)
      {digitalWrite(LED1,HIGH);
       delay(SecStart);
       digitalWrite(LED1,LOW);
       
       delay(SecBlink);
       digitalWrite(LED1,HIGH);
       delay(SecEnd);
       digitalWrite(LED1,LOW);
       }

        
    if (buttonPressDuration >=1000 && buttonPressDuration <2000)
      {digitalWrite(LED1,HIGH);
       delay(SecDur);
       digitalWrite(LED2,HIGH);
       delay(SecStart);
       digitalWrite(LED1,LOW);
       digitalWrite(LED2,LOW);
       delay(SecBlink);
       digitalWrite(LED1,HIGH);
       digitalWrite(LED2,HIGH);
       delay(SecEnd);
       digitalWrite(LED1,LOW);
       digitalWrite(LED2,LOW);
       }


    if (buttonPressDuration >=2000 && buttonPressDuration <3000)
      {digitalWrite(LED1,HIGH);
       delay(SecDur);
       digitalWrite(LED2,HIGH);
       delay(SecDur);
       digitalWrite(LED3,HIGH);
       delay(SecStart);
       digitalWrite(LED1,LOW);
       digitalWrite(LED2,LOW);
       digitalWrite(LED3,LOW);
       delay(SecBlink);
       digitalWrite(LED1,HIGH);
       digitalWrite(LED2,HIGH);
       digitalWrite(LED3,HIGH);
       delay(SecEnd);
       digitalWrite(LED1,LOW);
       digitalWrite(LED2,LOW);
       digitalWrite(LED3,LOW);
       }
       

    if (buttonPressDuration >=3000 && buttonPressDuration <4000)
      {digitalWrite(LED1,HIGH);
       delay(SecDur);
       digitalWrite(LED2,HIGH);
       delay(SecDur);
       digitalWrite(LED3,HIGH);
       delay(SecDur);
       digitalWrite(LED4,HIGH);
       delay(SecStart);
       digitalWrite(LED1,LOW);
       digitalWrite(LED2,LOW);
       digitalWrite(LED3,LOW);
       digitalWrite(LED4,LOW);
       delay(SecBlink);
       digitalWrite(LED1,HIGH);
       digitalWrite(LED2,HIGH);
       digitalWrite(LED3,HIGH);
       digitalWrite(LED4,HIGH);
       delay(SecEnd);
       digitalWrite(LED1,LOW);
       digitalWrite(LED2,LOW);
       digitalWrite(LED3,LOW);
       digitalWrite(LED4,LOW);
       }


    if (buttonPressDuration >=4000 && buttonPressDuration <5000)
      {digitalWrite(LED1,HIGH);
       delay(SecDur);
       digitalWrite(LED2,HIGH);
       delay(SecDur);
       digitalWrite(LED3,HIGH);
       delay(SecDur);
       digitalWrite(LED4,HIGH);
       delay(SecDur);
       digitalWrite(LED5,HIGH);
       delay(SecStart);
       digitalWrite(LED1,LOW);
       digitalWrite(LED2,LOW);
       digitalWrite(LED3,LOW);
       digitalWrite(LED4,LOW);
       digitalWrite(LED5,LOW);
       delay(SecBlink);
       digitalWrite(LED1,HIGH);
       digitalWrite(LED2,HIGH);
       digitalWrite(LED3,HIGH);
       digitalWrite(LED4,HIGH);
       digitalWrite(LED5,HIGH);
       delay(SecEnd);
       digitalWrite(LED1,LOW);
       digitalWrite(LED2,LOW);
       digitalWrite(LED3,LOW);
       digitalWrite(LED4,LOW);
       digitalWrite(LED5,LOW);
       }


    if (buttonPressDuration >=5000 && buttonPressDuration <6000)
      {digitalWrite(LED1,HIGH);
       delay(SecDur);
       digitalWrite(LED2,HIGH);
       delay(SecDur);
       digitalWrite(LED3,HIGH);
       delay(SecDur);
       digitalWrite(LED4,HIGH);
       delay(SecDur);
       digitalWrite(LED5,HIGH);
       delay(SecDur);
       digitalWrite(LED6,HIGH);
       delay(SecStart);
       digitalWrite(LED1,LOW);
       digitalWrite(LED2,LOW);
       digitalWrite(LED3,LOW);
       digitalWrite(LED4,LOW);
       digitalWrite(LED5,LOW);
       digitalWrite(LED6,LOW);
       delay(SecBlink);
       digitalWrite(LED1,HIGH);
       digitalWrite(LED2,HIGH);
       digitalWrite(LED3,HIGH);
       digitalWrite(LED4,HIGH);
       digitalWrite(LED5,HIGH);
       digitalWrite(LED6,HIGH);
       delay(SecEnd);
       digitalWrite(LED1,LOW);
       digitalWrite(LED2,LOW);
       digitalWrite(LED3,LOW);
       digitalWrite(LED4,LOW);
       digitalWrite(LED5,LOW);
       digitalWrite(LED6,LOW);
       }


    if (buttonPressDuration >=6000 && buttonPressDuration <7000)
      {digitalWrite(LED1,HIGH);
       delay(SecDur);
       digitalWrite(LED2,HIGH);
       delay(SecDur);
       digitalWrite(LED3,HIGH);
       delay(SecDur);
       digitalWrite(LED4,HIGH);
       delay(SecDur);
       digitalWrite(LED5,HIGH);
       delay(SecDur);
       digitalWrite(LED6,HIGH);
       delay(SecDur);
       digitalWrite(LED7,HIGH);
       delay(SecStart);
       digitalWrite(LED1,LOW);
       digitalWrite(LED2,LOW);
       digitalWrite(LED3,LOW);
       digitalWrite(LED4,LOW);
       digitalWrite(LED5,LOW);
       digitalWrite(LED6,LOW);
       digitalWrite(LED7,LOW);
       delay(SecBlink);
       digitalWrite(LED1,HIGH);
       digitalWrite(LED2,HIGH);
       digitalWrite(LED3,HIGH);
       digitalWrite(LED4,HIGH);
       digitalWrite(LED5,HIGH);
       digitalWrite(LED6,HIGH);
       digitalWrite(LED7,HIGH);
       delay(SecEnd);
       digitalWrite(LED1,LOW);
       digitalWrite(LED2,LOW);
       digitalWrite(LED3,LOW);
       digitalWrite(LED4,LOW);
       digitalWrite(LED5,LOW);
       digitalWrite(LED6,LOW);
       digitalWrite(LED7,LOW);
       }

    if (buttonPressDuration >=7000 && buttonPressDuration <8000)
      {digitalWrite(LED1,HIGH);
       delay(SecDur);
       digitalWrite(LED2,HIGH);
       delay(SecDur);
       digitalWrite(LED3,HIGH);
       delay(SecDur);
       digitalWrite(LED4,HIGH);
       delay(SecDur);
       digitalWrite(LED5,HIGH);
       delay(SecDur);
       digitalWrite(LED6,HIGH);
       delay(SecDur);
       digitalWrite(LED7,HIGH);
       delay(SecDur);
       digitalWrite(LED8,HIGH);
       delay(SecStart);
       digitalWrite(LED1,LOW);
       digitalWrite(LED2,LOW);
       digitalWrite(LED3,LOW);
       digitalWrite(LED4,LOW);
       digitalWrite(LED5,LOW);
       digitalWrite(LED6,LOW);
       digitalWrite(LED7,LOW);
       digitalWrite(LED8,LOW);
       delay(SecBlink);
       digitalWrite(LED1,HIGH);
       digitalWrite(LED2,HIGH);
       digitalWrite(LED3,HIGH);
       digitalWrite(LED4,HIGH);
       digitalWrite(LED5,HIGH);
       digitalWrite(LED6,HIGH);
       digitalWrite(LED7,HIGH);
       digitalWrite(LED8,HIGH);
       delay(SecEnd);
       digitalWrite(LED1,LOW);
       digitalWrite(LED2,LOW);
       digitalWrite(LED3,LOW);
       digitalWrite(LED4,LOW);
       digitalWrite(LED5,LOW);
       digitalWrite(LED6,LOW);
       digitalWrite(LED7,LOW);
       digitalWrite(LED8,LOW);
       }


    if (buttonPressDuration >=8000 && buttonPressDuration <9000)
      {digitalWrite(LED1,HIGH);
       delay(SecDur);
       digitalWrite(LED2,HIGH);
       delay(SecDur);
       digitalWrite(LED3,HIGH);
       delay(SecDur);
       digitalWrite(LED4,HIGH);
       delay(SecDur);
       digitalWrite(LED5,HIGH);
       delay(SecDur);
       digitalWrite(LED6,HIGH);
       delay(SecDur);
       digitalWrite(LED7,HIGH);
       delay(SecDur);
       digitalWrite(LED8,HIGH);
       delay(SecDur);
       digitalWrite(LED9,HIGH);
       delay(SecStart);
       digitalWrite(LED1,LOW);
       digitalWrite(LED2,LOW);
       digitalWrite(LED3,LOW);
       digitalWrite(LED4,LOW);
       digitalWrite(LED5,LOW);
       digitalWrite(LED6,LOW);
       digitalWrite(LED7,LOW);
       digitalWrite(LED8,LOW);
       digitalWrite(LED9,LOW);
       delay(SecBlink);
       digitalWrite(LED1,HIGH);
       digitalWrite(LED2,HIGH);
       digitalWrite(LED3,HIGH);
       digitalWrite(LED4,HIGH);
       digitalWrite(LED5,HIGH);
       digitalWrite(LED6,HIGH);
       digitalWrite(LED7,HIGH);
       digitalWrite(LED8,HIGH);
       digitalWrite(LED9,HIGH);
       delay(SecEnd);
       digitalWrite(LED1,LOW);
       digitalWrite(LED2,LOW);
       digitalWrite(LED3,LOW);
       digitalWrite(LED4,LOW);
       digitalWrite(LED5,LOW);
       digitalWrite(LED6,LOW);
       digitalWrite(LED7,LOW);
       digitalWrite(LED8,LOW);
       digitalWrite(LED9,LOW);
       }

       
      else{
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        digitalWrite(LED3,LOW);
        digitalWrite(LED4,LOW);
        digitalWrite(LED5,LOW);
        digitalWrite(LED6,LOW);
        }
    
  }
  


}

