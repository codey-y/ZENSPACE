int LedX = 13;
int LedY = 11;
int LedZ = 9;

void Led(int x, int y, int z) {
  digitalWrite(LedX, x);
  digitalWrite(LedY, y);
  digitalWrite(LedZ, z);
}

void setup() {
  pinMode(LedX, OUTPUT);
  pinMode(LedY, OUTPUT);
  pinMode(LedZ, OUTPUT);
}

void loop() {
  Led(0, 0, 1);
  delay(1000);

  Led(0, 1, 0);
  delay(1000);

  Led(0, 0, 1);
  delay(1000);


  Led(1,1 , 1);
  delay(1000);

  Led(0, 1, 1);
  delay(1000);

  Led(0,1,0);
  delay(1000);

  
}
