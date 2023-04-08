#include <Keypad.h>
#include <LiquidCrystal.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {31, 30, 29, 28}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {39, 38, 37, 36}; //connect to the column pinouts of the keypad

//Create an object of keypad
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

// Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup() {
  // put your setup code here, to run once:

  // set up the LCD's number of columns and rows:
	lcd.begin(16, 2);
  Serial.begin(9600);
    // Print if key pressed
    lcd.print("Key Pressed : ");
    lcd.setCursor(0, 1);



}

void loop() {
  // put your main code here, to run repeatedly:
    char key = keypad.getKey();// Read the key

  if (key){
  //   lcd.print(key);
    Serial.println(key);
    lcd.setCursor(0, 1);
    lcd.print(key);
  };

}
