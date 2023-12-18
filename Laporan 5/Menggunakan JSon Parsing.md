## Menggunakan JSon Parsing

### a. Langkah Kerja
  1. Buatlah flow seperti Gambar.
  
  ![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/f5d5a633-b9f2-411f-b2e2-2f1402ea7671)

  2. Konfigurasikan Inject Node, JSON Parser Node, dan Function Node
seperti Gambar.
  
  ![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/384a39bc-94d1-48b8-8daa-86dc81df08fd)
  ![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/a7a9f271-2daa-4ca0-891d-f7e4af549fd1)
  ![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/923474ed-2527-4962-b0e1-94d7e1f12f87)

  3. Deploy flow dan dokumentasikan hasilnya.

### b. Hasil dan Pembahasan
![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/63481971-e72f-4931-9e6e-bf8ea8e3dab2)
<p align="justify"> Pada praktikum ini kami menuliskan nilai humidity dan temperature di bagian input dalam bentuk JSon dengan topic
/sensor. Lalu pada JSon dikonversi ke JavaScript sebab ingin melakukan ekstraksi atau pengolahan lebih lanjut pada data JSON di 
dalam alur Node-RED. Kemudian function berfungsi untuk menarik dan menampilkan data yang ingin dikeluarkan melalui output dimana data yang
ingin diambil adalah temperature sehingga output yang keluar hanya berupa angka 27.</p>
