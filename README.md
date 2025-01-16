Bu repository, Tiva C Series (TM4C123GXL) mikrodenetleyicisiyle gerçekleştirilen farklı projeleri içermektedir. Her proje, mikrodenetleyicinin çeşitli özelliklerini ve yeteneklerini sergileyerek, bu platformu daha iyi anlama fırsatı sunar. 

# İçindekiler
Proje 1: LCD'ye Karakter Yazdırma 
 
Proje 2: Timer Uygulaması

Proje 3: Sharp Develop ile Eşzamanlı Timer Uygulaması

Proje 4: ADC Sıcaklık Ölçümü

Proje 5: Hibernasyon Modu Uygulaması

Proje 6: Floating Point İşlemleri

# PROJE 1
Bu projede, LCD ekran kullanılarak belirli bir karakter dizisini ekranda göstermek için gerekli kodlar yazılmıştır. Kullanıcı, belirli bir karakteri veya metni LCD ekranında görebilir.

# Kullanılan Teknolojiler
Tiva C Series TM4C123GXL

Code Composer Studio

LCD Ekran (16x2)

# Detaylı Doküman
Projede yardımcı olması için LCD PDF dosyasına ve LCD Pinleri resmine göz atabilirsiniz.

![LCD Pinleri](https://github.com/Osman-looking-for-a-job/tivacseries/blob/main/proje1/lcd%20pins.jpeg)

![LCD PDF](https://github.com/Osman-looking-for-a-job/tivacseries/blob/main/proje1/lcd.pdf11.pdf)

# Kurulum
Projenin kurulumu için aşağıdaki adımları takip edebilirsiniz:

1-Tiva C Series kartını bilgisayarınıza bağlayın.

2-Code Composer Studio programını açın.

3-Bu repoyu klonlayın veya dosyaları indirin.

4-Proje dosyasını açın ve çalıştırmaya başlayın.

# PROJE 2

Bu proje, Tiva C Series kartı kullanılarak 24 saatlik bir timer sistemi oluşturmayı amaçlamaktadır.Timer'ın değeri aynı anda LCD ekranında görüntülenmektedir.

# Proje Açıklaması
Bu projede, 24 saatlik bir timer oluşturulmuş ve bu timer LCD ekranda görüntülenmiştir. Timer başlatıldığında, her saniye sayım yapılır ve sayım sürekli olarak LCD ekranında gösterilir.

# Kullanılan Teknolojiler
Tiva C Series TM4C123GXL

Code Composer Studio

LCD Ekran (16x2)

# Kurulum
Projenin kurulumu için aşağıdaki adımları takip edebilirsiniz:

1- Tiva C Series kartını bilgisayarınıza bağlayın.

2- Code Composer Studio programını açın.

3- Proje dosyasını klonlayın veya indirin.

4- Çalıştırmaya başlayın ve timer'ın LCD ekranda doğru şekilde çalıştığını gözlemleyin.

# PROJE 3
Bu proje, Tiva C Series kartı kullanılarak 24 saatlik bir timer sistemi oluşturmayı amaçlamaktadır. Proje, zamanlayıcıyı başlatma, durdurma ve sıfırlama işlemlerini içeren bir sistem geliştirmektedir.İstenilen bir saati sharp develop ortamından UART haberleşmesi ile göndererek o saatten itibaren timer çalışması gözlemlenebilir. Aynı zamanda LCD ekranında ve Sharp Develop ortamında bir formda bu zamanlayıcının görüntülenmesi sağlanmaktadır.

# Proje Açıklaması
Bu projede, 24 saatlik bir timer oluşturulmuş ve bu timer, LCD ekranda ve Sharp Develop üzerinde bir formda eş zamanlı olarak gösterilmiştir. Timer başlatıldığında, her saniye sayım yapılır ve bu sayım hem LCD üzerinde hem de Sharp Develop uygulamasındaki bir textbox'ta görüntülenir.

# Kullanılan Teknolojiler
Tiva C Series TM4C123GXL

Code Composer Studio

Sharp Develop (C#)

LCD Ekran (16x2)

# Proje Görseli
![FORM DESIGN](https://github.com/Osman-looking-for-a-job/tivacseries/blob/main/proje3/form%20design.png)

Bu görsel, Sharp Develop üzerindeki form tasarımını göstermektedir.

# Kurulum
Projenin kurulumu için aşağıdaki adımları takip edebilirsiniz:

1- Tiva C Series kartını bilgisayarınıza bağlayın.

2- Code Composer Studio programını açın.

3- Sharp Develop üzerinden timer'ı görüntüleyecek formu oluşturun.

4- Proje dosyasını klonlayın veya indirin.

5- Çalıştırmaya başlayın ve timer'ın her iki ekranda da doğru şekilde çalıştığını gözlemleyin.

# PROJE 4
Bu proje, Tiva C Series kartı kullanılarak bir potansiyometre ile sıcaklık ölçümü yapmayı amaçlamaktadır. Proje, ADC (Analog-to-Digital Converter) kullanarak analog sıcaklık verisini dijital forma çevirir ve bu veriyi LCD ekran üzerinde görüntüler.

# Proje Açıklaması
Bu projede, bir 10k'lık potansiyometre ile sıcaklık ölçümü yapılmaktadır. Potansiyometre, sıcaklık değişimine göre analog bir sinyal üretir ve bu sinyal ADC kullanılarak dijital değere dönüştürülür. Elde edilen dijital değer, LCD ekranda sıcaklık bilgisi olarak gösterilir.

# Kullanılan Teknolojiler
Tiva C Series TM4C123GXL

Code Composer Studio

LCD Ekran (16x2)

Potansiyometre 10k ohm


# Detaylı Doküman
[ADC PDF](https://github.com/Osman-looking-for-a-job/tivacseries/blob/main/proje4/LM3S8962_ADC.pdf)

Projenin yardımcı olması ve ADC kullanımını anlamayı kolaylaştırmak için ADC PDF dosyasına göz atabilirsiniz.

# Kurulum
Projenin kurulumu için aşağıdaki adımları takip edebilirsiniz:

1- Tiva C Series kartını bilgisayarınıza bağlayın.

2- 10k'lık potansiyometreyi kartınıza bağlayın.

3- Code Composer Studio programını açın.

4- Proje dosyasını klonlayın veya indirin.

5- Çalıştırmaya başlayın ve sıcaklık ölçümünün LCD ekranda doğru şekilde göründüğünü gözlemleyin.

# PROJE 5
Bu proje, Tiva C Series kartı üzerinde hibernation modunun nasıl çalıştığını göstermektedir. Hibernation modunda, kart düşük güç tüketimi moduna geçer ve belirli bir süre sonra uyanır. Bu proje, düşük güç tüketimi gereksinimlerine sahip uygulamalar için faydalıdır.

# Proje Açıklaması
Bu projede, kartın hibernation moduna geçişi ve çıkışı yönetilmektedir. Hibernation modu aktif olduğunda, kart minimum enerji harcar ve belirli bir tetikleyici ile tekrar aktif hale gelir.

# Kullanılan Teknolojiler
Tiva C Series TM4C123GXL

Code Composer Studio


# Kurulum
Projenin kurulumu için aşağıdaki adımları takip edebilirsiniz:

1- Tiva C Series kartını bilgisayarınıza bağlayın.

2- Code Composer Studio programını açın.

3- Proje dosyasını klonlayın veya indirin.

4- Çalıştırmaya başlayın ve kartın hibernation moduna geçişini gözlemleyin.

# PROJE 6 
Bu proje, Tiva C Series kartı üzerinde floating point işlemlerinin nasıl gerçekleştirildiğini göstermektedir. Floating point işlemleri, özellikle sayısal hesaplamalar ve hassas verilerle çalışırken önemli bir rol oynar.

# Proje Açıklaması
Bu projede, floating point sayılar üzerinde temel matematiksel işlemler (toplama, çıkarma, çarpma, bölme) yapılmaktadır. Bu işlemler, mikroişlemcinin floating point unite (FPU) kullanılarak hızlandırılır.

# Kullanılan Teknolojiler
Tiva C Series TM4C123GXL

Code Composer Studio

# Kurulum
Projenin kurulumu için aşağıdaki adımları takip edebilirsiniz:

1- Tiva C Series kartını bilgisayarınıza bağlayın.

2- Code Composer Studio programını açın.

3- Proje dosyasını klonlayın veya indirin.

4- Çalıştırmaya başlayın ve floating point işlemlerinin doğru şekilde gerçekleştirildiğini gözlemleyin.

