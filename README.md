# LCD_1602_RUS_2
Arduino LCD 16x02 display RUSSIAN with NO CYRILLIC symbols set

Форк https://github.com/ssilver2007/LCD_1602_RUS для работы с дисплеями не подключёнными по I2C, в частности для LCD KeyPad Shield.

Библиотека позволяет использовать русские символы при использовании LCD дисплеев, подключенных НЕ по интерфейсу I2C, без встроенной кириллицы.
Максимально возможно отображение 8 уникальных по начертанию русских символа (например Ж, Д, И, Ю и т.п.)
Символы, одинаковые по начертанию с английскими (A, B, C, O, P и т.п.) используются из английского набора символов.
Дополнительно встроена возможность печати знака градуса Цельсия. Для этого в тексте программы необходимо набрать
код UTF-8 (Alt+0176)

Должна быть установелна базовая библиотека LiquidCrystal.

Возможные ошибки при компиляции примеров:
1) Ошибка "exit status 1
converting to execution character set: Illegal byte sequence"
Решение: сохранить измененный скетч в новое место на диске с другим именем.


(c) Сергей Сироткин, progserega
