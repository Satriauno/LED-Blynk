// LED Flip Flop

void setup() {
  pinMode(16, OUTPUT);
  
}

void loop() {
  digitalWrite(16, HIGH);
  delay(2000); // milli secound : 1 detik 
  digitalWrite(16, LOW);
  delay(1000);
}

// ON = HIGH = 1
// OFF = LOW = 0
