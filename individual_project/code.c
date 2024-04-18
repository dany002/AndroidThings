int red = 10;
int yellow = 9;
int green = 8;
int button = 12;

void setup(){
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT_PULLUP); // Use internal pull-up resistor for the button
}

void loop(){
  digitalWrite(red, HIGH); // Red light stays on
  while(digitalRead(button) == HIGH); // Wait until button is pressed
  digitalWrite(red, LOW); // Turn off red light
  
  // Blink red light 3 times
  for(int i = 0; i < 3; i++){
    digitalWrite(red, HIGH);
    delay(500);
    digitalWrite(red, LOW);
    delay(500);
  }
  
  digitalWrite(yellow, HIGH); // Turn on yellow light for a second
  delay(1000);
  digitalWrite(yellow, LOW);
  
  digitalWrite(green, HIGH); // Turn on green light for 10 seconds
  delay(3000);
  for(int i = 0; i < 3; i++){
    digitalWrite(green, LOW);
    delay(500);
    digitalWrite(green, HIGH);
    delay(500);
  }
  digitalWrite(green, LOW);
}

