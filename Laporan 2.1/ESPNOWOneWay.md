## B. ESP-NOW ONE-WAY PPONIT-TO-POINT COMMUNICATION

### a. Rangkaian

![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/428c95f9-00bd-4dfa-ba78-4bf41d2b1392)

### b. Source Code
1. Kode program sebagai sender dapat dilihat <a href="https://github.com/raolaay/SistemEmbedded/blob/master/Jobsheet%202.1/B.%20ESP-NOW%20One-Way%20Point-to-Point%20Communication/One-Way%20Sebagai%20Sender.ino">di sini.</a>
2. Kode program sebagai receiver dapat dilihat <a href="https://github.com/raolaay/SistemEmbedded/blob/master/Jobsheet%202.1/B.%20ESP-NOW%20One-Way%20Point-to-Point%20Communication/One-Way%20Sebagai%20Receiver.ino">di sini.</a>

### c. Hasil dan Pembahasan
<p align="justify">Pada praktikum kali ini kelompok kami berperan sebagai receiver. Adapun uraian
  dari program yang kami gunakan adalah sebagai berikut:</p>

  1. Include Library dan Header
```c
#include <esp_now.h>
#include <WiFi.h>
```
>Seperti pada program sender, library yang digunakan adalah `esp_now` untuk ESP-NOW dan `WiFi` untuk mengonfigurasi mode WiFi.
<br>
  
  2. Deklarasi Struktur Pesan
```c
typedef struct struct_message {
    char a[32];
    int b;
    float c;
    bool d;
} struct_message;
```
>Mendefinisikan struktur pesan yang harus sama dengan struktur pesan pada program sender untuk memastikan konsistensi data yang dikirim dan diterima.
<br>
  
  3. Deklarasi Variabel dan Fungsi Callback Penerima
```c
struct_message myData;

void OnDataRecv(const uint8_t * mac, const uint8_t *incomingData, int len) {
    // Mengkopi data yang diterima ke dalam struktur myData
    memcpy(&myData, incomingData, sizeof(myData));

    // Menampilkan data yang diterima melalui Serial Monitor
    Serial.print("Bytes received: ");
    Serial.println(len);
    Serial.print("Char: ");
    Serial.println(myData.a);
    Serial.print("Int: ");
    Serial.println(myData.b);
    Serial.print("Float: ");
    Serial.println(myData.c);
    Serial.print("Bool: ");
    Serial.println(myData.d);
    Serial.println();
}
```
>`OnDataRecv`: Callback yang dieksekusi ketika ada data yang diterima. Menggunakan `memcpy` untuk menyalin data yang diterima ke dalam struktur `myData`. Kemudian, menampilkan informasi mengenai data yang diterima melalui Serial Monitor.
<br>
  
  4. Setup Function
```c
void setup() {
    // Initialize Serial Monitor
    Serial.begin(115200);
    
    // Set ESP32 sebagai station
    WiFi.mode(WIFI_STA);

    // Inisialisasi ESP-NOW dan mendaftarkan callback untuk proses penerimaan data
    if (esp_now_init() != ESP_OK) {
        Serial.println("Error initializing ESP-NOW");
        return;
    }
    esp_now_register_recv_cb(OnDataRecv);
}
```
 > - Menginisialisasi Serial Monitor dan mode WiFi sebagai station.
 > - Inisialisasi ESP-NOW dan mendaftarkan callback `OnDataRecv` untuk menangani proses penerimaan data.
<br>
  
  5. Loop Function
```c
void loop() {
    // Loop kosong, karena penerima hanya menangani data yang diterima secara asinkron.
}
```
>Loop utama tidak melakukan apa-apa karena penerima hanya menangani data yang diterima secara asinkron melalui callback.
Program ini, ketika dijalankan, akan terus mendengarkan dan menampilkan informasi mengenai data yang diterima melalui protokol ESP-NOW. Program sender yang sesuai akan mengirimkan data ke ESP32 yang berperan sebagai receiver, dan callback OnDataRecv akan dieksekusi untuk menangani data yang diterima.
<br>

<p align="justify">Berikut merupakan keluaran yang ditampilkan di serial monitor pengirim. Status menunjukkan bahwa paket data berhasil
terkirim.</p>

![Hasil A4 sebagai Sender](https://github.com/raolaay/SistemEmbedded/assets/145360333/bc436ede-b4f7-43ba-902d-2ae330de9dd6)

<p align="justify">Berikut merupakan keluaran yang ditampilkan di serial monitor penerima ketika status di pengirim menunjukkan bahwa paket data berhasil diterima.</p>

![Hasil A7 sebagai Receiver](https://github.com/raolaay/SistemEmbedded/assets/145360333/c5f73b7c-c820-4b42-9659-747ae7df4ff3)


### Hasil Tabel
<table>
  <tr>
    <th>Jarak Transmisi
(m)</th>
    <th>Jumlah Pesan yang
Dikirim [Dt]</th>
    <th>Jumlah Pesan yang
Diterima [Dr]</th>
    <th>Packet Loss (%)</th>
  </tr>
  <tr>
    <td>1</td>
    <td>10</td>
    <td>10</td>
    <td>0</td>
  </tr>
  <tr>
    <td>2</td>
    <td>10</td>
    <td>10</td>
    <td>0</td>
  </tr>
  <tr>
    <td>3</td>
    <td>10</td>
    <td>10</td>
    <td>0</td>
  </tr>
</table>

> *Note: Dokumentasi percobaan dapat dilihat pada folder "dokumentasi transmisi data"*
<p align="justify">Dari hasil tabel diatas dapat diambil kesimpulan bahwa pengiriman berjalan dengan baik dengan jarak transmisi 1-3 meter. Hal ini ditunjukkan dengan nilai persentase packet loss yang adalah 0% dan keberhasilan pengiriman 100%. </p>
