<!-- Proje İlişkin Başlık -->
<h1 align="center">42 - Ft_printf 🖨️</h1>

<!-- Proje Açıklaması -->
<p align="center">
Bu proje, standart C dilindeki <code>printf</code> işlevinin yeniden yazılmasıdır. <code>printf</code> işlevi, biçimlendirilmiş bir çıktı oluşturmak için kullanılır ve çeşitli veri türlerini ve biçim belirteçlerini destekler. <code>ft_printf</code> işlevi, aynı davranışı yeniden oluştururken, standart kütüphane fonksiyonlarından bağımsız olarak çalışır ve tamamen özelleştirilebilir bir yapı sunar.
</p>

<!-- Proje Logosu veya Görseli -->
<p align="center">
  <a target="blank"><img src="https://camo.githubusercontent.com/7d01b95dd537b7343a2b637b25a9bb8aabb6da6de60cd29e8e17d5653be90b5f/68747470733a2f2f692e68697a6c69726573696d2e636f6d2f667977307231322e706e67" height="150" width="150" /></a>
</p>

## Projenin Amacı 🎯

Bu proje, <code>printf</code> işlevinin temel işleyişini anlamak ve benzer bir işlevi kendimiz yazarak pratik yapmak amacıyla oluşturulmuştur. Ayrıca, bu proje C dilinde dize işleme, bellek yönetimi ve biçimlendirme konularında derinlemesine bir anlayış kazanmamıza yardımcı olur.

## Kullanım Senaryoları 🛠️

<code>ft_printf</code> işlevi, standart <code>printf</code> işleviyle benzer bir arayüz sunar. Kullanım senaryoları şunları içerebilir:

- Basit metin ve değişken içeren çıktılar: <code>ft_printf("Hello, %s!\n", "world");</code>
- Sayıları biçimlendirme: <code>ft_printf("Decimal: %d, Hexadecimal: %x\n", 42, 42);</code>
- Özel biçim belirteçleri kullanma: <code>ft_printf("Float: %f, Char: %c\n", 3.14, 'A');</code>

## Proje İçeriği 📂

Proje, ana <code>ft_printf</code> işlevinin yanı sıra yardımcı fonksiyonları ve yapılarını içerir. Bu içerik şunları içerebilir:

- **Makefile**: Derleme dosyası. 🛠️
- **ft_printf.h**: Proje başlık dosyası, prototipleri ve yapı tanımlarını içerir. 📜
- **ft_printf.c**: Ana <code>ft_printf</code> işlevi ve yardımcı işlevlerin tanımları burada bulunur. 🔧
- **ft_utils.c**: Yardımcı işlevler, karakter yazdırma ve biçim belirteçlerini işleme gibi işlevler burada tanımlanır. 🧩

---

<p align="center">© 2025 This project was created by Derya ACAR.</p>

