#include<SoftwareSerial.h>
const int x = A1;
const int y = A0;
int X;
int Y;
const int rx = 10;
const int ry = 11;
SoftwareSerial mySerial(rx, tx);

void setup() {
    Serial.begin(9600);
    mySerial.begin(9600);
}

void loop() {
    X = analogRead(x);
    Y = analogRead(y);

    Serial.println(X);
    Serial.println(Y);

    mySerial.println(X);
    mySerial.println(Y);

    delay(100);
}