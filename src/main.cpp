#incude <Arduino.h>

int red_led = 10;
int blue_led = 11;
int green_led = 9;

void setup() {
    pinMode(red_led, OUTPUT);
    pinMode(blue_led, OUTPUT);
    pinMode(green_led, OUTPUT);
}

