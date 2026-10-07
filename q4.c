// C++ code
//
const int trigPin = 9;
const int echoPin = 10;
const int greenLED = 4;
const int redLED = 3;
const int buzzer = 6;

const int threshold = 30;

void setup() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);

    pinMode(greenLED, OUTPUT);
    pinMode(redLED, OUTPUT);
    pinMode(buzzer, OUTPUT);

    Serial.begin(9600);
}

void loop() {
    long duration;
    float distance;

    // Send ultrasonic pulse
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);

    digitalWrite(trigPin, LOW);

    // Measure the returning pulse (30 ms timeout = nothing in range)
    duration = pulseIn(echoPin, HIGH, 30000);

    // Calculate distance in centimeters
    distance = duration * 0.034 / 2;

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    // Determine parking status (0 means no echo, so treat as empty)
    if (distance > 0 && distance <= threshold) {
        // Vehicle detected
        digitalWrite(redLED, HIGH);
        digitalWrite(greenLED, LOW);
        tone(buzzer, 1000);

        Serial.println("Status: OCCUPIED");
    }
    else {
        // No vehicle detected
        digitalWrite(redLED, LOW);
        digitalWrite(greenLED, HIGH);
        noTone(buzzer);

        Serial.println("Status: AVAILABLE");
    }

    delay(500);
}