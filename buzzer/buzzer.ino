const int[] red_buzzers = {};
const int[] green_buzzers = {};
const int reset = 9;


void setup() {
  // put your setup code here, to run once:
  pinMode(19, OUTPUT);
  pinMode(20, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(24, INPUT);
  pinMode(25, INPUT);
  pinMode(26, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
  pinMode(14, INPUT);
  pinMode(15, INPUT);
  pinMode(16, INPUT);

  // Clear LEDs, as there is a chance that shift register isn't empty
  digitalWrite(21, LOW);
  shiftOut(19, 20, 0);
  digitalWrite(21, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  // poll buzzers
  
}
