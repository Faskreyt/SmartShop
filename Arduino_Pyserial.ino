void setup() {
  //В setap'е нужно добавить пин-мод и обозначить значение baud'а.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //В loop'е нужно добавить следующие комманды для передачи данных по Pyserial'у.
  if (Serial.available()) {
    int command = Serial.readString().toInt();
    //Вместо переменной х, сделайте свою версию нужного символа для передачи данных по Pyserial'у.
    if (command == x) { 
      //Здесь нужно вписать свой код работы робота, которую он выполнит после команды старта по вашей переменной.
    }
  }
}