#ifndef ESPEASY_CUSTOM_H
#define ESPEASY_CUSTOM_H

// 1. Принудительно включаем плагин SHT3x и контроллер ThingSpeak
#define USES_P068   // Датчик Environment - SHT3x
#define USES_C004   // Контроллер отправки данных на ThingSpeak

// 2. Отключаем "тяжелые" системные функции для экономии памяти в 1M
#define FEATURE_ARDUINO_OTA           false // Отключаем обновление через Arduino IDE
#define FEATURE_NOTIFIER              false // Отключаем уведомления Email/СМС
#define FEATURE_SD                    false // Отключаем поддержку SD-карт

// 3. Отключаем базовые датчики, которые включены в ESPEasy по умолчанию,
// но которые вам НЕ нужны (освобождаем место под SHT3x)
#define CONTROLLER_SET_NONE                 // Отключаем все остальные контроллеры
#define NOTIFIER_SET_NONE                   // Отключаем все нотификаторы
#define PLUGIN_SET_NONE                     // Выключаем вообще все стандартные плагины

#endif // ESPEASY_CUSTOM_H
