## Menggunakan Function Node

### a. Langkah Kerja
  1. Buatlah flow fungsi output tunggal seperti pada Gambar.
  
  ![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/c2d984c3-1a8c-4c1b-8859-424db440d24d)

  2. Konfigurasikan node Input1. Isikan payload dengan “Hello World”, dan
topic berupa “test1”.
  3. Deploy program dan dokumentasikan hasilnya.
  4. Buatlah flow fungsi output berganda yang berfungsi memisahkan pesan
seperti Gambar.
  
  ![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/75b67316-0539-4a77-bca3-e61073bdc053)
  
  5. Konfigurasikan node Input2. Isikan payload dengan “Expeliarmus”, dan
topic berupa “test2”.
  6. Konfigurasikan node fungsi seperti Gambar.
  
  ![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/8958fa3f-2f56-47de-bf40-1beb5e4d91b4)

  7. Deploy program dan dokumentasikan hasilnya.

### b. Hasil dan Pembahasan
![Hasil Function Node Output Tunggal](https://github.com/raolaay/SistemEmbedded/assets/145360333/b026b2b7-4f7c-4a69-a200-14a2203e64e4)

<p align="justify"> Gambar di atas menunjukkan hasil dari flow fungsi output tunggal. Di sini function node
berfungsi untuk mengecek apakah topik dan payload sesuai dengan kriteria yang ditentukan.
Skrip JavaScript di dalam node fungsi melakukan ekstraksi payload dan topik dari pesan masuk, 
dan kemudian memeriksa apakah topik adalah "test1" dan payload adalah "Hello World". Jika 
kondisi ini terpenuhi, node fungsi akan mengirim pesan debug dengan teks "Hello World". 
Hasilnya dapat dilihat dalam debug sidebar Node-RED. </p>

<p align="justify"> Sementara gambar di bawah merupakan hasil dari flow fungsi output berganda. Mirip seperti
sebelumnya, function node di sini berfungsi untuk mengecek topik dan payload apakah sesuai atau tidak. Namun, dengan
adanya tambahan input2 dengan topik dan payload yang berbeda, fungsi akan memisahkan output keduanya. Hasil yang seharusnya tampil
yaitu output1 mengeluarkan "Hello World" dan output2 mengeluarkan "Expelliarmus" akan tetapi tampaknya di sini terjadi kesalahan yang belum
ditemukan sehingga hasil tidak sesuai dengan harapan. </p>

![Hasil Function Node Output Berganda](https://github.com/raolaay/SistemEmbedded/assets/145360333/c1eb533e-3bd0-4b1e-8cd2-59acdf074169)
