# Array-Linked List

## Proje Amacı
Temel amaç Array List ile Linked List arasında; çok sayıda veri eklerken, başa-ortaya-sona veri eklerken, veri silerken ve güncellerken, aralarındaki farkı anlamaktır.
***



## Veri Yapıları ve Değişkenler
* **Dinamik Dizi Listesi:** Dinamik diziler, boyutu sabit olmayan ve değişebilen dizilerdir. Yer yer bağlantılı listeye göre hızlı çalışsa da veri güncelleme silme gibi durumlarda maliyeti (eleman yer değiştirilmesi) çok fazla olduğu için pek tercih edilmeyebilir.
* **Bağlantılı Liste:** Bağlantılı liste düğümlerden oluşur. Düğümler bellekte birbiri ardına konumlandırılmazlar. Bu yönüyle bellekte tutulması dizilerden farklıdır. Fakat dizilere göre bir dezavantajı bulunmaktadır. Rasgele erişimi olmadığı için sonlardaki verilere erişilmesi zorluk çıkartabilir.
***



## Kullanılan Metotlar
* ArrayList_Veriekle() =>  ArrayList’e çok sayıda veri ekler.
* LinkedList_Veriekle() => LinkedList’e çok sayıda veri ekler.
* ArrayList_BasaVeriekle() => ArrayListin başına veri ekler.
* LinkedList_BasaVeriekle(Node*) => LinkedListin başına Node tipinde veri ekler.
* ArrayList_VeriSil() => ArrayListten istenilen veriyi siler.
* LinkedList_VeriSil(Node *) => LinkedListten belirtilen veriyi siler
***



## Program Akışı
1. İlk olarak programa yüksek sayıda (önce 1000 sonra 10000) veri ekledim ve aralarındaki hız farkını mikro saniye cinsinden ölçtüm. Ve yüksek sayıda veri eklerken Array List’in çok daha hızlı çalıştığını fark ettim. Ekran görüntüleri ise aşağıdaki gibidir.
* [1000 Veri Ekleme](https://raw.githubusercontent.com/Alparslan524/VeriYapilari.Array-LinkedList/main/EkranGoruntuleri/1000%20Veri%20ekleme.png)
* [10000 Veri Ekleme](https://raw.githubusercontent.com/Alparslan524/VeriYapilari.Array-LinkedList/main/EkranGoruntuleri/10000%20Veri%20Ekleme.png)

2. Daha sonra listelerin başına veri ekledim. Ekran görüntülerinde gözüktüğü gibi bu sefer de Linked List’in daha hızlı çalıştığını fark ettim. Eklenen veri sayısı arttıkça aradaki farkın da katlanarak arttığını gözlemledim.
* [1000 elemanlı listenin başına veri ekleme](https://raw.githubusercontent.com/Alparslan524/VeriYapilari.Array-LinkedList/main/EkranGoruntuleri/1000%20Basa%20Ekleme.png)
* [10000 elemanlı listenin başına veri ekleme](https://raw.githubusercontent.com/Alparslan524/VeriYapilari.Array-LinkedList/main/EkranGoruntuleri/10000%20Basa%20Ekleme.png)

3. Son olarak farklı veri sayılarına sahip listelerde veri silmeyi denedim ve sonuçlar şu şekilde oldu.
* [1000 Elemanlı listede veri silme](https://raw.githubusercontent.com/Alparslan524/VeriYapilari.Array-LinkedList/main/EkranGoruntuleri/1k%20Veri%20Silme.png)
* [10000 Elemanlı listede veri silme](https://raw.githubusercontent.com/Alparslan524/VeriYapilari.Array-LinkedList/main/EkranGoruntuleri/10k%20Veri%20Silme.png)
***
## Sonuç
Yüksek sayıda veri eklerken Linked List’in Array List’e göre çok daha yavaş kaldığını, aradaki sürenin veri sayısı arttıkça katlanarak arttığını fark ettim. 
Ama bu durum başa veri eklerken tam tersi oluyor. Array List’te başa veri eklerken diğer tüm verileri kopyalayarak kaydırdığı için yavaş çalışıyor. Bu süre veri sayısı arttıkça doğru orantılı bir şekilde artıyor. Linked List’te böyle bir durum olmadığı için Array List’ten daha hızlı çalışıyor ve veri sayısı 10 kat artsa bile süre sadece 200 nano saniye artıyor. Yani başa veri eklerken Linked List Array List’e göre çok daha verimli çalışıyor.
Aynı durumu veri silerken de gözlemledim. Array List çok yavaş çalışırken Linked List veri sayısı fark etmeksizin Array List’ten çok daha hızlı çalışyor.
Buradan şu sonucu çıkarttım. Gereksinimlere göre kendimizi hazırlayıp hangi liste tipi daha uygunsa onu kullanmam gerekiyor.
***
## Kullanılan Diller
* C++
***


# Alparslan Aydoğan
- [GitHub](https://github.com/Alparslan524)
- [Linkedin](https://www.linkedin.com/in/alparslan-aydoğan-6038771bb/)
***
