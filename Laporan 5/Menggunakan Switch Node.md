## Menggunakan Switch Node

### a. Langkah Kerja
  1. Buatlah flow seperti pada Gambar.
  
  ![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/b4b4edff-99a6-4961-8277-64a5bc970d3e)

  2. Konfigurasi Input/Inject Node. Isikan Payload pada Inject Node 1 dengan
angka 28. Kemudian pada Inject Node 2, isikan Payload dengan angka 27.
  3. Konfigurasi Switch Node seperti Gambar.
  
  ![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/2fa78f67-4d3e-42d1-9f6f-459d38579e3c)

  4. Deploy flow dan dokumentasikan hasilnya.

### b. Hasil dan Pembahasan
![image](https://github.com/raolaay/SistemEmbedded/assets/145360333/c07d32c4-60a4-4431-86c4-19a0a80b2a53)
<p align="justify"> Switch Node di Node-RED di sini berfungsi sebagai pengendali alur yang memisahkan pesan berdasarkan nilai atau 
kondisi tertentu dari payload. Dengan Switch Node, kita dapat menentukan kondisi-kondisi dan mengarahkan pesan ke output yang sesuai dengan kondisi yang dipenuhi. 
Ini memungkinkan pemisahan alur berdasarkan berbagai nilai atau kondisi dalam pesan. Pada praktikum ini switch node memisahkan pesan
berdasarkan nilai input yaitu <28 atau >= 28 dan mengeluarkannya di channel output yang sesuai. </p>
