<h1 align="center">LAPORAN PRAKTIKUM SISTEM EMBEDDED</h1>
<h2 align="center"> TRANSMISI DATA MENGGUNAKAN MESSAGE QUEUING TELEMETRY TRANSPORT (MQTT) PROTOCOL </h2>
<br>
<p align="center">
  <img src="https://en.polines.ac.id/images/logo_bw.jpg" width="200" height="200">
<br>
<br>PUTRI SEKAR ARIANA
<br>TE-3A
<br>4.31.21.0.21</p>
<br>
<b><p align="center">PROGRAM STUDI D4 TEKNIK TELEKOMUNIKASI</p>
<p style="font-family:courier;" align="center">POLITEKNIK NEGERI SEMARANG</p>
<p style="font-family:courier;" align="center">2023</p></b> 

#### A. ABSTRAK
<p align="justify">Message Queuing Telemetry Trasnsport (MQTT) adalah protokol komunikasi
yang berjalan di atas stack TCP/IP, didesain untuk komunikasi Machine-toMachine (M2M), bersifat open sources dan lightweight, mempunyai protocol overhead yang rendah (minimum 2 bytes) sehingga berefek pada konsumsi daya
yang kecil dan mampu bekerja pada latency yang tinggi serta bandwidth yang
kecil (Ullas et al., 2014).</p>
<p align="justify">MQTT bekerja di atas TCP/IP stack di level application layer pada standar
sistem OSI (Pal, Ghosh and Bhattacharya, 2017). Protokol ini menerapkan teknik
kompresi data dan data reduction untuk melakukan efisiensi energi (Ali, Shah and
Arshad, 2016)</p>
<p align="justify">Jobsheet ini bertujuan untuk memahami alur kerja, kegunaan dan manfaat protokol
MQTT serta mengimplementasikan protokol MQTT pada sistem IoT untuk monitoring dan kendali.</p>

Adapun sub-job pada jobsheet ini yaitu:
  1. <a href="https://github.com/sekarnaa/sistem-embedded-new/blob/7c1d8a3eacc5beb45519fbbacbf0966a04d253a8/Laporan%206/Koneksi%20MQTT%20Broker.md">Koneksi MQTT Broker</a>
  2. <a href="https://github.com/sekarnaa/sistem-embedded-new/blob/9ba63d381b9bf14a88cc01d312ce97db605ebf09/Laporan%206/Menerima%20Data%20JSON%20Melalui%20Protokol%20MQTT.md">Menerima Data JSON Melalui Protokol MQTT</a>
  3. <a href="https://github.com/sekarnaa/sistem-embedded-new/blob/5772d3d6574c8da6ea416ccb9a1f371ba819a83f/Laporan%206/Mengirim%20Dummy%20Data%20untuk%20Simulasi.md">Mengirim Dummy Data untuk Simulasi I/O Menggunakan Hardware</a>

#### B. ALAT DAN BAHAN (Metode / skematik)
1) ESP32
2) Breadboard
3) Kabel jumper
4) Potensiometer
5) Sensor DHT11
6) LED
7) Multimeter
8) Resistor 1K Ohm

#### D. KESIMPULAN
<p align="justify">Job ini fokus pada konfigurasi MQTT broker, penggunaan publisher dan subscriber MQTT, serta manipulasi data JSON dalam Node-RED. Dengan menggunakan node seperti MQTT Subscribe, JSON Parser, Function, dan Debug, job ini menggambarkan pengiriman dan penerimaan data, serta pengolahan data kustom. Pengembangan flow dengan multiple publisher dan subscriber menunjukkan kemampuan sistem dalam menangani situasi yang lebih kompleks dengan topik-topik yang berbeda. Keseluruhan, job ini memberikan gambaran praktis tentang implementasi MQTT dalam lingkungan Node-RED untuk pengaturan komunikasi IoT.</p>
