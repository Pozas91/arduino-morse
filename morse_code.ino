const int buzzer = 9;
#define PERIOD 100

void setup() {
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
}

void morse(char *code) {

  for(int i = 0; i < strlen(code); i++) {

    char note = code[i];

    switch(note) {
      case '.':
        digitalWrite(buzzer, HIGH);
        delay(PERIOD);
        digitalWrite(buzzer, LOW);
        delay(PERIOD);
        break;
      case '-':
        digitalWrite(buzzer, HIGH);
        delay(PERIOD * 2);
        digitalWrite(buzzer, LOW);
        delay(PERIOD);
        break;
      case ' ':
        digitalWrite(buzzer, LOW);
        delay(PERIOD * 2);
        break;
      case '/':
        digitalWrite(buzzer, LOW);
        delay(PERIOD * 7);
        break;
    }
  }
}

void writeMorse(char text[]) {

  for(int i = 0; i < strlen(text); i++) {
    
    char letter = text[i];
    char *code;

    switch (letter) {
      case 'A':
      case 'a':
        code = ".- ";
        break;
      case 'B':
      case 'b':
        code = "-... ";
        break;
      case 'C':
      case 'c':
        code = "-.-. ";
        break;
      case 'D':
      case 'd':
        code = "-.. ";
        break;
      case 'E':
      case 'e':
        code = ". ";
        break;
      case 'F':
      case 'f':
        code = "..-. ";
        break;
      case 'G':
      case 'g':
        code = "--. ";
        break;
      case 'H':
      case 'h':
        code = ".... ";
        break;
      case 'I':
      case 'i':
        code = ".. ";
        break;
      case 'J':
      case 'j':
        code = ".--- ";
        break;
      case 'K':
      case 'k':
        code = "-.- ";
        break;
      case 'L':
      case 'l':
        code = ".-.. ";
        break;
      case 'M':
      case 'm':
        code = "-- ";
        break;
      case 'N':
      case 'n':
        code = "-. ";
        break;
      case 'O':
      case 'o':
        code = "--- ";
        break;
      case 'P':
      case 'p':
        code = ".--. ";
        break;
      case 'Q':
      case 'q':
        code = "--.- ";
        break;
      case 'R':
      case 'r':
        code = ".-. ";
        break;
      case 'S':
      case 's':
        code = "... ";
        break;
      case 'T':
      case 't':
        code = "- ";
        break;
      case 'U':
      case 'u':
        code = "..- ";
        break;
      case 'V':
      case 'v':
        code = "...- ";
        break;
      case 'W':
      case 'w':
        code = ".-- ";
        break;
      case 'X':
      case 'x':
        code = "-..- ";
        break;
      case 'Y':
      case 'y':
        code = "-.-- ";
        break;
      case 'Z':
      case 'z':
        code = "--.. ";
        break;
      case ' ':
        code = "/";
        break;
      default:
        break;
    }

    morse(code);
  }
}

void loop() {
  char text[] = "Pili";
  writeMorse(text);
  delay(2000);
}

