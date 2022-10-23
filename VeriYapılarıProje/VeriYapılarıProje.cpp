#include <iostream>
#include <chrono>
using namespace std;
int* dizi = new int[100000];

void ArrayList_Veriekle();
void LinkedList_Veriekle();
void ArrayList_BasaVeriekle();
void ArrayList_VeriSil(int);

struct ArrayList {
    int* bas;
    void olustur();
    void ekle(int, int);
    void guncelle(int, int);
    void sil(int);
    void yazdir();
    void bosalt();
    int sayac;
};

struct Node {
    int deger;
    Node* sonraki;
};

struct LinkedList {
    Node* bas;
    void olustur();
    void ekle(int, int);
    void guncelle(int, int);
    void sil(int);
    void yazdir();
    void bosalt();
    int sayac;
    void LinkedList_BasaVeriekle(Node*);
    void LinkedList_VeriSil(Node*);
};

ArrayList* a = new ArrayList();
LinkedList* l = new LinkedList();



int main()
{
    LinkedList_Veriekle();
    ArrayList_Veriekle();
    cout << "     " << endl;

    Node* m = new Node();
    m->deger = 5;
    //l->LinkedList_BasaVeriekle(m);
    //ArrayList_BasaVeriekle();

    //l->LinkedList_VeriSil(m);
    //ArrayList_VeriSil(5);
    a->bosalt();
    a->yazdir();
    l->bosalt();
    l->yazdir();

}


void ArrayList_Veriekle() {
    auto begin = std::chrono::high_resolution_clock::now();
    a->olustur();
    for (int i = 0;i <= 1000; i++)
    {
        a->ekle(i, i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
    cout << "Array List'e " << a->sayac - 1 << " Veri Ekleme Suresi: " << elapsed.count()
        << " mikro-saniye" << endl;
}
void LinkedList_Veriekle() {
    auto begin = std::chrono::high_resolution_clock::now();
    l->olustur();
    for (int i = 0;i <= 1000; i++)
    {
        l->ekle(i, i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
    cout << "Linked Liste'e " << l->sayac << " Veri Ekleme Suresi: " << elapsed.count()
        << " mikro-saniye" << endl;

}

void ArrayList_BasaVeriekle() {

    auto begin = std::chrono::high_resolution_clock::now();
    int* temp;
    temp = a->bas;
    for (int i = a->sayac;i > 0;i--)
    {
        dizi[i] = dizi[i - 1];
    }
    dizi[0] = 3169;
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cout << l->sayac << " Elemanli bir " << "Array Listte Basa Veri Ekleme Suresi: " << elapsed.count()
        << " nano-saniye" << endl;
}
void LinkedList::LinkedList_BasaVeriekle(Node* m)
{

    auto begin = std::chrono::high_resolution_clock::now();
    if (l->bas == NULL)
    {
        l->bas = m;
    }
    else {
        m->sonraki = l->bas;
        l->bas = m;
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cout << l->sayac << " Elemanli bir " << "Linked Listte Basa Veri Ekleme Suresi: " << elapsed.count()
        << " nano-saniye" << endl;



}

void ArrayList_VeriSil(int silinen_eleman) {
    auto begin = std::chrono::high_resolution_clock::now();
    a->sayac--;
    for (int i = silinen_eleman;i < a->sayac;i++)
    {
        dizi[i] = dizi[i + 1];
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cout << a->sayac << " Elemanli bir Aray Listte " << silinen_eleman <<
        ". Elemani silerken gecen sure: " << elapsed.count()
        << " nano-saniye" << endl;

}
void LinkedList::LinkedList_VeriSil(Node* silinecek_sira) {
    auto begin = std::chrono::high_resolution_clock::now();
    Node* tara, * arka;
    int sayac_ = 1;
    arka = tara = bas;
    if (silinecek_sira->deger == 1)
    {
        bas = bas->sonraki;
        delete tara;
        sayac--;
        return;
    }
    while ((tara != NULL) && (sayac_ < silinecek_sira->deger)) {
        arka = tara;
        tara = tara->sonraki;
        sayac_++;
    }
    if (sayac < silinecek_sira->deger) {
        cout << "Silinecek kayit bulunamadi" << endl;
    }
    else {
        arka->sonraki = tara->sonraki;
        delete tara;
        sayac--;
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cout << l->sayac + 1 << " Elemanli bir Linked Listte " << silinecek_sira->deger <<
        ". Elemani silerken gecen sure: " << elapsed.count()
        << " nano-saniye" << endl;
}


void ArrayList::olustur() {
    bas = dizi;
    sayac = 0;
}
void ArrayList::ekle(int deger, int sira) {

    for (int i = sayac - 1; i >= sira; i--)
    {
        dizi[i + 1] = dizi[i];
    }
    dizi[sira] = deger;
    sayac++;
}
void ArrayList::guncelle(int degisen_eleman, int guncel_sira) {

    dizi[guncel_sira] = degisen_eleman;
}
void ArrayList::sil(int silinen_eleman) {

    sayac--;
    for (int i = silinen_eleman;i < sayac;i++)
    {
        dizi[i] = dizi[i + 1];
    }
}
void ArrayList::yazdir() {

    if (bas == NULL)
    {
        cout << "Dizi Bos" << endl;
        return;
    }

    for (int i = 0; i < sayac;i++)
    {
        cout << dizi[i] << endl;
    }

}
void ArrayList::bosalt() {

    bas = NULL;
    sayac = 0;
    delete dizi;
}




void LinkedList::olustur() {
    bas = NULL;
}
void LinkedList::ekle(int deger1, int sira_ekle) {
    Node* n = new Node();
    Node* tara = bas;
    n->deger = deger1;

    if (bas == NULL) {
        bas = n;
        return;
    }

    tara = bas;
    for (int i = 0;i < sira_ekle - 1;i++)//sira yapınca çalışmıyor sira-1
                                  //yapınca çalışıyor nedenini öğren
    {
        tara = tara->sonraki;
    }
    n->sonraki = tara->sonraki;
    tara->sonraki = n;
    sayac++;
}
void LinkedList::guncelle(int degisen_eleman, int guncel_sira) {

    Node* tara = bas;
    Node* n = new Node();
    n->deger = degisen_eleman;

    for (int i = 0;i < guncel_sira - 1;i++)
    {
        tara = tara->sonraki;
    }
    tara->sonraki = n;



};
void LinkedList::sil(int sira_sil) {
    Node* tara, * arka;
    int sayac_ = 1;
    arka = tara = bas;
    if (sira_sil == 1)
    {
        bas = bas->sonraki;
        delete tara;
        sayac--;
        return;
    }
    while ((tara != NULL) && (sayac_ < sira_sil)) {
        arka = tara;
        tara = tara->sonraki;
        sayac_++;
    }
    if (sayac < sira_sil) {
        cout << "Silinecek kayit bulunamadi" << endl;
    }
    else {
        arka->sonraki = tara->sonraki;
        delete tara;
        sayac--;
    }
}
void LinkedList::yazdir() {

    if (bas == NULL)
    {
        cout << "Liste Bos!" << endl;
        exit(1);
    }

    Node* tara = bas;

    while (tara != NULL)
    {
        cout << tara->deger << endl;
        tara = tara->sonraki;
    }
}
void LinkedList::bosalt() {

    Node* tara;
    while (bas)
    {
        tara = bas;
        bas = bas->sonraki;
        delete tara;
    }
    sayac = 0;
};