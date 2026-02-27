#incude <Arduino.h>

int red_led = 10;
int blue_led = 11;
int green_led = 9;

void setup() {
    pinMode(red_led, OUTPUT);
    pinMode(blue_led, OUTPUT);
    pinMode(green_led, OUTPUT);
}

void loop() {

    // 🌿 GREEN PULSE
    digitalWrite(red_led, LOW);
    digitalWrite(blue_led, LOW);
    digitalWrite(green_led, HIGH);
    delay(800);

    // 💙 BLUE FLASH
    digitalWrite(red_led, LOW);
    digitalWrite(blue_led, HIGH);
    digitalWrite(green_led, LOW);
    delay(800);

    // ❤️ RED GLOW
    digitalWrite(red_led, HIGH);
    digitalWrite(blue_led, LOW);
    digitalWrite(green_led, LOW);
    delay(800);

    // 💜 RED + BLUE (MAGENTA EFFECT)
    digitalWrite(red_led, HIGH);
    digitalWrite(blue_led, HIGH);
    digitalWrite(green_led, LOW);
    delay(800);

    // 💛 RED + GREEN (YELLOW EFFECT)
    digitalWrite(red_led, HIGH);
    digitalWrite(blue_led, LOW);
    digitalWrite(green_led, HIGH);
    delay(800);

    // 🩵 BLUE + GREEN (CYAN EFFECT)
    digitalWrite(red_led, LOW);
    digitalWrite(blue_led, HIGH);
    digitalWrite(green_led, HIGH);
    delay(800);

    // 🌈 ALL COLORS ON (WHITE BLAST)
    digitalWrite(red_led, HIGH);
    digitalWrite(blue_led, HIGH);
    digitalWrite(green_led, HIGH);
    delay(1000);

    // ⚫ ALL OFF (RESET PAUSE)

}
