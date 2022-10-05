// Set pin numbers and variables
const int SW0 = 12;
const int SW1 = 8;
const int SW2 = 7;
const int SW3 = 4;
const int redLED = 11;
const int greenLED = 9;
const int blueLED = 6;
int N;

int switch_state[4] = {0, 0, 0, 0};
int pattern_state[16] = {0};

void setup() {
  pinMode (redLED, OUTPUT);
  pinMode (greenLED, OUTPUT);
  pinMode (blueLED, OUTPUT);
  // Initialize button pins as inputs
  pinMode (SW0, INPUT_PULLUP);
  pinMode (SW1, INPUT_PULLUP);
  pinMode (SW2, INPUT_PULLUP);
  pinMode (SW3, INPUT_PULLUP);
  randomSeed(analogRead(5));
}

void loop() {
  switch_state[0] = digitalRead (SW0);
  switch_state[1] = digitalRead (SW1);
  switch_state[2] = digitalRead (SW2);
  switch_state[3] = digitalRead (SW3);
  random(N);

  if (switch_state[0] == LOW) {
    digitalWrite(redLED, HIGH);
} else {
  digitalWrite(redLED, LOW);
}
if (switch_state[1] == LOW) {
    digitalWrite(greenLED, HIGH);
} else {
  digitalWrite(greenLED, LOW);
}
if (switch_state[2] == LOW) {
    digitalWrite(blueLED, HIGH);
} else {
  digitalWrite(blueLED, LOW);
}
if (digitalRead(SW0 == LOW) {
  
}
}
