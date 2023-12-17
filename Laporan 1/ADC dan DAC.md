## C. ADC DAN DAC
### RANGKAIAN
<img width="315" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/753f6942-ae2c-49c1-a517-4ecaa9e22938">

### HASIL DAN PEMBAHASAN
##### Langkah 1-3
   <img width="250" alt="image" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/1c50627f-2740-4a4c-90f3-5be8572c2ed8">
   
  - Program tersebut membaca nilai potensiometer yang terhubung ke pin GPIO 34 (Analog ADC1_CH6) pada mikrokontroler. Hasil keluaran akan ditampilkan pada serial monitor sehingga dapat melihat perubahan nilai yang terjadi.
  ##### *Fungsi deklarasi variabel*
  - `const int potPin = 34;`: Mendeklarasikan konstanta `potPin` dengan nilai 34 dimana potensiometer terhubung ke pin GPIO 34.
  - `int potValue = 0;`: Mendeklarasikan variabel `potValue` sebagai penyimpan nilai potensiometer, yang nilai awalnya diatur dari 0.
  ##### *Fungsi Setup*
  - `void setup() {...}`: fungsi setup yang dieksekusi sekali saat program pertama kali dijalankan.
  - `Serial.begin(115200);`: menginisialisasi komunikasi serial dengan baud rate 115200.
  - `delay(1000);`: .enunda eksekusi program selama 1000 milidetik (1 detik) untuk memberikan waktu inisialisasi.
  ##### *Fungsi Loop*
  - `potValue = analogRead(potPin);`: Membaca nilai analog dari pin potensiometer dan menyimpannya ke dalam variabel `potValue`.
  - `Serial.println(potValue);`: Menampilkan nilai potensiometer ke Serial Monitor melalui komunikasi serial.
  - `delay(500);`: Menunda eksekusi program selama 500 milidetik (0.5 detik) sebelum membaca nilai potensiometer lagi.

##### Langkah 4-5
   <img width="263" alt="Screenshot 2023-12-10 203924" src="https://github.com/sekarnaa/sistem-embedded-new/assets/150989006/7e919806-b2b4-414d-9c8c-2025ac036247">

Program tersebut salah satu implementasi kontrol LED berdasarkan input dari sensor sentuh pada Arduino. Pada bagian deklarasi variabel, pin yang terhubung ke sensor sentuh dan LED ditetapkan sebagai konstanta. Untuk fungsi setup dijalankan sekali saat program dimulai, mengatur pin LED sebagai output, pin sensor sentuh sebagai input, dan menginisialisasi LED dalam kondisi mati. Komunikasi serial juga diinisialisasi untuk memantau status sensor dan LED. Kemudian fungsi loop yaitu berjalan terus-menerus, membaca nilai digital dari pin sensor sentuh. Jika sensor disentuh (nilai HIGH), program akan menyalakan LED dan mengirimkan pesan ke Serial Monitor. Sebaliknya, jika sensor tidak disentuh (nilai LOW), LED dimatikan, dan pesan yang sesuai dikirimkan. `delay(100);`berarti penundaan waktu agar tidak terlalu cepat membaca sensor dan mengurangi kemungkinan pembacaan yang tidak stabil.
  
