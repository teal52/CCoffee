//const int LED = 13;
const int press_pin = A0;

int press_value = 0;

void setup() {
  Serial.begin(9600);
  //pinMode(LED, OUTPUT);
  //pinMode(press_pin, INPUT);
}

void loop() {
  int press_value = analogRead(press_pin);

  Serial.println(press_value);
  delay(1000);



}
