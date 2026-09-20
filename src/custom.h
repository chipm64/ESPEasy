#ifndef ESPEASY_CUSTOM_H
#define ESPEASY_CUSTOM_H

// Включаем датчик SHT3x и контроллер ThingSpeak
#define USES_P068   // Датчик Environment - SHT3x
#define USES_C004   // Контроллер отправки данных на ThingSpeak

// Отключаем лишнее для экономии памяти в 1M
#define FEATURE_ARDUINO_OTA           false 
#define FEATURE_NOTIFIER              false 
#define FEATURE_SD                    false 

#define CONTROLLER_SET_NONE                 
#define NOTIFIER_SET_NONE                   
#define PLUGIN_SET_NONE                     

#endif // ESPEASY_CUSTOM_H
