#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "inc/hw_memmap.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"

int main(void)
{
    // 1. Sistem saatini ayarla
    SysCtlClockSet(SYSCTL_SYSDIV_16 | SYSCTL_USE_OSC | SYSCTL_OSC_MAIN | SYSCTL_XTAL_16MHZ);

    // 2. FPU'yu etkinleştir
    FPUEnable();
    FPULazyStackingEnable();

    // 3. Floating-point değişkenler tanımla
    float a = 5.5, b = 2.2, c = -3.3;
    float result;
    int i ;

    // 4. Temel matematiksel işlemler
    result = a + b;          // Toplama
    result = a - b;          // Çýkarma
    result = a * b;          // Çarpma
    result = a / b;          // Bölme

    // 5. Gelişmiş matematiksel işlemler (math.h kullanımı)
    float angle = 45.0;      // Derece cinsinden
    float radians = angle * (M_PI / 180.0); // Dereceden radyana dönüşüm
    float sineValue = sinf(radians);        // Sinüs
    float cosineValue = cosf(radians);      // Kosinüs
    float tangentValue = tanf(radians);     // Tanjant
    float exponential = expf(a);            // e^x
    float naturalLog = logf(b);             // Doðal logaritma
    float log10Value = log10f(b);           // Logaritma taban 10
    float powerValue = powf(a, b);          // Üs alma (a^b)
    float squareRoot = sqrtf(a);            // Kare kök

    // 6. Mutlak Değer ve Yuvarlama İşlemleri
    float absValue = fabsf(c);              // Mutlak deðer
    float ceilValue = ceilf(a);             // Yukarý yuvarlama
    float floorValue = floorf(a);           // Aþaðý yuvarlama

    // 7. Özel Durumlar (Infinity ve NaN Kontrolü)
    float divZero = 1.0f / 0.0f;            // Sonsuzluk (Infinity)
    float notANumber = sqrtf(-1.0f);        // Tanýmsýz deðer (NaN)

    // 8. Hızlı Fourier Dönüşümü için Örnek Sinüs Sinyali Üretimi
    float frequency = 1.0; // Frekans (Hz)
    float samplingRate = 100.0; // Örnekleme frekansı (Hz)
    int numSamples = 10;   // Örnek sayısı
    for (i = 0; i < numSamples; i++)
    {
        float time = i / samplingRate;      // Zaman hesaplama
        float signal = sinf(2 * M_PI * frequency * time); // Sinüs sinyali
    }

    // 9. Floating-Point İşlemler Sonucunda LED Göstergesi
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1);

    if (squareRoot > 2.0f)
    {
        GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, GPIO_PIN_1); // LED yak
    }
    else
    {
        GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, 0); // LED söndür
    }

    while (1)
    {
        // Ana döngü
    }
}
