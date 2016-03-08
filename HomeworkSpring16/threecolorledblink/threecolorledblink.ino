int redPin = 8;  //blue
int greenPin = 9;
int bluePin = 10;

int redValue = 0;

int button1 = 2;
int button2 = 3;
int button3 = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button1) == LOW) {
    if (redValue == 0) {
      redValue = 255;
    } else {
      redValue = 0;
    }
  } else {
    redValue = 0;
  }
  analogWrite(redPin, redValue);
  if (digitalRead(button2) == HIGH) {
    analogWrite(greenPin, 0);
  } else {
    analogWrite(greenPin, 255);
  }
  if (digitalRead(button3) == HIGH) {
    analogWrite(bluePin, 0);
  } else {
    analogWrite(bluePin, 255);
  }
  delay(300);
}
