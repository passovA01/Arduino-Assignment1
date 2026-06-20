//task5

int ledPin = 13;
int startValue = 5;

// Function to flash the led many times
void flashLED(int times){

  int count = 0;

  while (count < times){

     digitalWrite(ledPin, HIGH);
    delay(200);

    digitalWrite(ledPin, LOW);
    delay(200);
    
    count++;
  }
}
void setup() {
  pinMode(ledPin, OUTPUT);
 Serial.begin(9600);

 Serial.println("=== Smart Countdown Starting ===");
 
 while (startValue >= 1) { 
 Serial.print("Count: ");
 Serial.println(startValue);
 delay(1000);
 startValue--;
 }
 Serial.println("=== Countdown Completed===");
}

void loop() {
  // void loop is empty
}