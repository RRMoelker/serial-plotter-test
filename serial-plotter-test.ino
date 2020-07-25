int t = 0;

void setup() {
    Serial.begin(38400);
}

void loop() {
    double a = sin(t / 100.0);
    double b = cos(t / 110.0);
    double c = sin(t / 50.0) + 1.0;
    Serial.print("a:"); Serial.print(a); Serial.print(", ");
    Serial.print("b:"); Serial.print(b); Serial.print(", ");
    Serial.print("c:"); Serial.print(c); Serial.print(", ");
    Serial.println();
    t++;
    delay(40);
}
