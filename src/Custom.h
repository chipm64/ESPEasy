#ifndef ESPEASY_CUSTOM_H
#define ESPEASY_CUSTOM_H

// Активируем использование этого файла
#define USE_CUSTOM_H

// Включаем стандартный набор плагинов NORMAL
#define PLUGIN_SET_NORMAL

// ПРИНУДИТЕЛЬНО ВКЛЮЧАЕМ НАШ ПЛАГИН SHT3x (P068)
#define USES_P068

// Отключаем самые тяжелые плагины, чтобы код точно влез в 1МБ
#undef USES_P012   // LCD дисплеи
#undef USES_P023   // OLED дисплеи
#undef USES_P036   // Frame OLED
#undef USES_P028   // Датчик BME280
#undef USES_P045   // Датчик MPU6050
#undef USES_P079   // Дисплей Wemos Matrix

#endif // ESPEASY_CUSTOM_H
