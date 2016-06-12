#include <LCD_1602_RUS_2.h>

LCD_1602_RUS_2 lcd(8, 9, 4, 5, 6, 7);

void setup()
{
  // Print a message to the LCD.
  lcd.begin(16,2);
  lcd.setCursor(2, 0);
  lcd.print(L"Теперь можно");
  lcd.setCursor(3, 1);
  lcd.print(L"по-русски");

}

void loop()
{
}
