#ifndef ESPEASY_CUSTOM_H
#define ESPEASY_CUSTOM_H

// 1. Активируем кастомную конфигурацию
#define USE_CUSTOM_H

// 2. Полностью отключаем все стандартные наборы плагинов
#define PLUGIN_SET_NONE

// 3. ВКЛЮЧАЕМ НАШ ДАТЧИК SHT30 И ДИСПЛЕЙ SSD1306
#define USES_P068   // Environment - SHT3x (Датчик температуры/влажности)
#define USES_P023   // Display - OLED SSD1306 (Экран для вывода данных)

// 4. ДОБАВЛЯЕМ РАСШИРИТЕЛИ ПОРТОВ ДЛЯ УПРАВЛЕНИЯ КЛЮЧАМИ ПО I2C
#define USES_P019   // Switch input - PCF8574 (8 дополнительных портов)
#define USES_P009   // Switch input - MCP23017 (16 дополнительных портов)

// 5. ВКЛЮЧАЕМ ТОЛЬКО ОТПРАВКУ НА THINGSPEAK
#define CONTROLLER_SET_NONE
#define USES_C004   // ThingSpeak HTTP

#endif // ESPEASY_CUSTOM_H
