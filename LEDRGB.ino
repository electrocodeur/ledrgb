byte LEDR = 9;
byte LEDG = 10;
byte LEDB = 11;

void setup() {
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);
  couleur(0, 0, 0);
}

void loop() {
  couleur(255, 0, 0);
  delay(1000);
  couleur(0, 255, 0);
  delay(1000);
  couleur(0, 0, 255);
  delay(1000);
  couleur(255, 0, 255);
  delay(1000);
  couleur(0, 255, 255);
  delay(1000);
  couleur(255, 255, 0);
  delay(1000);
  couleur(255, 255, 255);
  delay(1000);
  couleur(0, 0, 0);
  delay(1000);
}

void couleur(byte r, byte g, byte b) {

  // Version cathode commune
  //analogWrite(LEDR, r);
  //analogWrite(LEDG, g);
  //analogWrite(LEDB, b);
  // Version anode commune
  analogWrite(LEDR, ~r);
  analogWrite(LEDG, ~g);
  analogWrite(LEDB, ~b);
}
