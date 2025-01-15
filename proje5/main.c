#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "driverlib/hibernate.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"

// LED Göstergesi için kullanılan GPIO Pin
#define LED_RED GPIO_PIN_1
#define LED_PORT GPIO_PORTF_BASE

int main(void)
{
    // 1. Sistem Saatini Ayarla (16 MHz)
    SysCtlClockSet(SYSCTL_SYSDIV_16 | SYSCTL_USE_OSC | SYSCTL_OSC_MAIN | SYSCTL_XTAL_16MHZ);

    // 2. Hibernation Modülünü Etkinleştir
    SysCtlPeripheralEnable(SYSCTL_PERIPH_HIBERNATE);
    while (!SysCtlPeripheralReady(SYSCTL_PERIPH_HIBERNATE)); // HIB modülünün hazır olduğunu kontrol et
    HibernateEnableExpClk(SysCtlClockGet()); // Saat kaynağını HIB'e bağla

    // 3. Hibernation RTC'yi Sıfırla ve Etkinleştir
    HibernateRTCSet(0); // RTC'yi sıfırla
    HibernateRTCEnable(); // RTC'yi etkinleştir

    // 4. Uyanma Kaynaklarını Belirle
    HibernateWakeSet(HIBERNATE_WAKE_PIN | HIBERNATE_WAKE_RTC);

    // 5. RTC Match Ayarı (10 saniye sonra uyandır)
    uint32_t sleepTime = 10; // Uyuma süresi (saniye)
    HibernateRTCMatchSet(0, HibernateRTCGet() + sleepTime);

    // 6. GPIO için LED Yapılandırması
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF); // GPIOF modülünü etkinleştir
    GPIOPinTypeGPIOOutput(LED_PORT, LED_RED); // GPIOF'deki kırmızı LED'i çıkıp olarak ayarla
    GPIOPinWrite(LED_PORT, LED_RED, LED_RED); // Uyuma öncesi LED'i yak

    // 7. Hibernation Moduna Geç
    HibernateRequest(); // Cihazı uykuya al

    // Uyandıktan sonra kod burada çalışır
    while (1)
    {
        GPIOPinWrite(LED_PORT, LED_RED, 0); // Uyandıktan sonra LED'i söndür
        // Daha fazla işlem buraya eklenebilir
    }

}
