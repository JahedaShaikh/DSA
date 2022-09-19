int const PULSE_SENSOR_PIN = 0;   // 'S' Signal pin connected to A0

int Signal;                // Store incoming ADC data. Value can range from 0-1024
int pulsevalue;
int Threshold = 550;       // Determine which Signal to "count as a beat" and which to ignore.

// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement
float temp;
int tempPin = A1;
int trigPin = 3;
int echoPin = 2;
int sensorvaue=A0;

int val;


void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
 // Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
 // Serial.println("with Arduino UNO R3");

  
}
void loop() {

  //Code to read ultrasonic sensor value
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
 
 

  //Code to read room temperature value
  temp = analogRead(tempPin);// temp
   // read analog volt from sensor and save to variable temp
   temp = temp * 0.48828125;
   // convert the analog volt to its temperature equivalent

//code to read pulse sensor value
Signal = analogRead(PULSE_SENSOR_PIN);
if(Signal > Threshold)
{ 
  pulsevalue=Signal;
  pulsevalue=pulsevalue/10;
  
}


//code to read body temperature value
  val = analogRead(A1);
  float voltage = val * (5.0 / 1024.0);
  float cels = voltage * 100;
  float farh = (cels * 9.0 / 5.0) + 32.0;


   Serial.print(distance);
   Serial.print(":");
   Serial.print(temp); // display temperature value
   Serial.print(":");
   Serial.print(pulsevalue);
   Serial.print(":");
   Serial.print(farh);
  
  Serial.println();
   
   
   
   delay(1000); // update sensor reading each one second
  


  
}
