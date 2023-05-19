int green = 13;
int red = 11;
int yellow = 12;
int button = 10;
int mode = 1;

void changeMode() {
  switch(mode) {
    case 1:
      lightRed();
      break;
    case 2:
      lightYellow();
      break;
    case 3:
      lightRedAndYellow();
      break;
    case 4:
      blinkYellow();
      break;
    case 5:
      lightGreen();
      break;
    case 6:
      blinkGreen();
      break;
  }
}

void lightRedAndYellow() {
 lightRed();
 lightYellow();
}

void disableGreen() {
  digitalWrite(green,LOW);
}

void lightRed() {
  digitalWrite(red,HIGH);
}

void lightYellow() {
  digitalWrite(yellow,HIGH);
}

void lightGreen() {
  digitalWrite(green,HIGH);
}
 

void blinkGreen() {
 disableGreen();
 delay(1000);
 lightGreen();
 delay(1000);
}

void blinkYellow() {
 disableYellow();
 delay(1000);
 lightYellow();
 delay(1000);
}

void disableRed() {
  digitalWrite(red,LOW);
  
}

 void disableYellow() {
  digitalWrite(yellow,LOW);
}

void setup() {
  pinMode(button,INPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);
}

void loop() {
  int buttonState = digitalRead(button);
  if (buttonState == HIGH) {
    mode = mode+1;
    changeMode();      
  }
