int a = 0;
int b = 50;
int c = 100;

void setup() {
    Serial.begin(38400);
}

void loop() {
    Serial.print("a:"); Serial.print(a); Serial.print(", ");
    Serial.print("b:"); Serial.print(b); Serial.print(", ");
    Serial.print("c:"); Serial.print(c); Serial.print(", ");
    Serial.println();
    a = (a + 1) % 100 ;
    b = (b + 2) % 110 ;
    c = (c + 1) % 150 ;
    delay(100);
}
