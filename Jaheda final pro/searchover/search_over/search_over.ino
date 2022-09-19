
// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement
float temp;
int tempPin = A1;
int trigPin = 3;
int echoPin = 2;
int sensorvaue=A0;

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
 // Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
 // Serial.println("with Arduino UNO R3");

  
}
void loop() {
  // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
 
  Serial.print(distance);

  temp = analogRead(tempPin);// temp
   // read analog volt from sensor and save to variable temp
   temp = temp * 0.48828125;
   // convert the analog volt to its temperature equivalent
  Serial.print(":");
   Serial.print(temp); // display temperature value
  
  Serial.println();
   
   
   
   delay(1000); // update sensor reading each one second
  


  
}
