<!-- Proje İlişkin Başlık -->
<h1 align="center">42 - Ft_printf</h1>

<!-- Proje Açıklaması -->
<p align="center">
Bu proje, standart C dilindeki printf işlevinin yeniden yazılmasıdır. printf işlevi, biçimlendirilmiş bir çıktı oluşturmak için kullanılır ve çeşitli veri türlerini ve biçim belirteçlerini destekler. ft_printf işlevi, aynı davranışı yeniden oluştururken, standart kütüphane fonksiyonlarından bağımsız olarak çalışır ve tamamen özelleştirilebilir bir yapı sunar.
</p>

<!-- Proje Logosu veya Görseli -->
<p align="center">
  <a target="blank"><img src="https://i.hizliresim.com/fyw0r12.png" height="150" width="150" /></a>
</p>

## Projenin Amacı

Bu proje, printf işlevinin temel işleyişini anlamak ve benzer bir işlevi kendimiz yazarak pratik yapmak amacıyla oluşturulmuştur. Ayrıca, bu proje C dilinde dize işleme, bellek yönetimi ve biçimlendirme konularında derinlemesine bir anlayış kazanmamıza yardımcı olur.

## Kullanım Senaryoları

ft_printf işlevi, standart printf işleviyle benzer bir arayüz sunar. Kullanım senaryoları şunları içerebilir:

- Basit metin ve değişken içeren çıktılar: `ft_printf("Hello, %s!\n", "world");`
- Sayıları biçimlendirme: `ft_printf("Decimal: %d, Hexadecimal: %x\n", 42, 42);`
- Özel biçim belirteçleri kullanma: `ft_printf("Float: %f, Char: %c\n", 3.14, 'A');`

## Proje İçeriği

Proje, ana ft_printf işlevinin yanı sıra yardımcı fonksiyonları ve yapılarını içerir. Bu içerik şunları içerebilir:

- **ft_printf.h**: Proje başlık dosyası, prototipleri ve yapı tanımlarını içerir.
- **ft_printf.c**: Ana ft_printf işlevi ve yardımcı işlevlerin tanımları burada bulunur.
- **ft_utils.c**: Yardımcı işlevler, karakter yazdırma ve biçim belirteçlerini işleme gibi işlevler burada tanımlanır.

