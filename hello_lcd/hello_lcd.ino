#include <LiquidCrystal.h>

// Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
String myStr = "Hello Ruby teja";

void setup() {
  // put your setup code here, to run once:
  // set up the LCD's number of columns and rows:
	lcd.begin(16, 2);

	// Clears the LCD screen
	//lcd.clear();

  lcd.print(myStr);

  // set the cursor to column 0, line 1
  lcd.setCursor(0, 1);
  lcd.print("TES 1234");
  
}

void loop() {
  // put your main code here, to run repeatedly:
// Print a message to the LCD.
	//lcd.print(myStr);

	
	// (note: line 1 is the second row, since counting begins with 0):

	// Print a message to the LCD.
	//lcd.print("TES 1234");
  
  
}
