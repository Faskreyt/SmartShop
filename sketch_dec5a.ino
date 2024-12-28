// Объявим все порты.
#define speed_1 13
#define speed_2 8
#define speed_3 2
#define speed_4 7
#define dir_1_f 12
#define dir_2_f 9
#define dir_3_f 3
#define dir_4_f 6
#define dir_1_b 11
#define dir_2_b 10
#define dir_3_b 4
#define dir_4_b 5

//Проезд вперёд.
void move_forward(int speed, int del) {
  digitalWrite(dir_1_f, 1);
  digitalWrite(dir_1_b, 0);
  digitalWrite(dir_2_f, 1);
  digitalWrite(dir_2_b, 0);
  analogWrite(speed_1, speed);
  analogWrite(speed_2, speed);
  delay(del);
  digitalWrite(dir_1_f, 0);
  digitalWrite(dir_1_b, 0);
  digitalWrite(dir_2_f, 0);
  digitalWrite(dir_2_b, 0);
}

//Проезд назад.
void move_back(int speed, int del) {
  digitalWrite(dir_1_f, 0);
  digitalWrite(dir_1_b, 1);
  digitalWrite(dir_2_f, 0);
  digitalWrite(dir_2_b, 1);
  analogWrite(speed_1, speed);
  analogWrite(speed_2, speed);
  delay(del);
  digitalWrite(dir_1_f, 0);
  digitalWrite(dir_1_b, 0);
  digitalWrite(dir_2_f, 0);
  digitalWrite(dir_2_b, 0);
}

//Проезд вправо.
void move_right(int speed, int del) {
  digitalWrite(dir_3_f, 0);
  digitalWrite(dir_3_b, 1);
  digitalWrite(dir_4_f, 0);
  digitalWrite(dir_4_b, 1);
  analogWrite(speed_3, speed);
  analogWrite(speed_4, speed);
  delay(del);
  digitalWrite(dir_3_f, 0);
  digitalWrite(dir_3_b, 0);
  digitalWrite(dir_4_f, 0);
  digitalWrite(dir_4_b, 0);
}

//Проезд влево.
void move_left(int speed, int del) {
  digitalWrite(dir_3_f, 1);
  digitalWrite(dir_3_b, 0);
  digitalWrite(dir_4_f, 1);
  digitalWrite(dir_4_b, 0);
  analogWrite(speed_3, speed);
  analogWrite(speed_4, speed);
  delay(del);
  digitalWrite(dir_3_f, 0);
  digitalWrite(dir_3_b, 0);
  digitalWrite(dir_4_f, 0);
  digitalWrite(dir_4_b, 0);
}

void setup() {
  //Объявим все пины.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Комманды для передачи информации Pyserial.
  if (Serial.available()) {
    int command = Serial.readString().toInt();
    if (command == 1) { 
      move_forward(250, 1000);
    }
    if (command == 2) { 
      move_back(250, 1000);
    }
    if (command == 3) { 
      move_right(250, 1000);
    }
    if (command == 4) { 
      move_left(250, 1000);
    }
  }
}