#include <stdio.h>// adalah standar kita guanakan input output ,memasukan codingan program yang kita kerjakan di notepad
#include <stdlib.h>//adalah standar dengan library agar kita ngerti tanda pada tanda titik,karawal,titik koma,tanda kutip pada BIN.

int main()//Fungsi yang harus ada pada setiap program C,code yang akan dieksekusi saat program dijalankan
{//berfungsi untuk membuka semua baris fungsi yang kita inginkan 
	int uang, harga, disc, bayar, menu, jml, total, kembalian;//Data yang mengguanakan tipe data integer yang berupa angka uang, harga, disc, bayar, menu, jml, total, kembalian
    char asha = 'y';//tipe data yang berisi 1 huruf atau satu karakter 'y'
pertama://merupakan variable yang digunakan untuk mendeklarasikan inputan perintah pertama
	printf("\t\t=======================================================================================\n");
	printf("\t\t||                               YUSA Internasional                                  ||\n");
	printf("\t\t||                            Reservasi Tiket Pesawat                                ||\n");
	printf("\t\t=======================================================================================\n");
	printf("\t\t|| NO. ||       Tujuan           ||       Harga         ||   Jadwal Keberangkatan    ||\n");
	printf("\t\t=======================================================================================\n");
	printf("\t\t|| 1.  ||   Pekanbaru-Batam      ||   Rp  745.000       ||         12:00 WIB         ||\n");
	printf("\t\t|| 2.  ||   Pekanbaru-Medan      ||   Rp  1.100.000     ||         13:00 WIB         ||\n");
	printf("\t\t|| 3.  ||   Pekanbaru-Jakarta    ||   Rp  1.800.000     ||         14:00 WIB         ||\n");
	printf("\t\t|| 4.  ||   Pekanbaru-solo       ||   Rp  1.000.000     ||         15:15 WIB         ||\n");
	printf("\t\t|| 5.  ||   Pekanbaru-Bali       ||   Rp  2.000.000     ||         16:00 WIB         ||\n");
	printf("\t\t|| 6.  ||   Medan-Bogor          ||   Rp  1.500.000     ||         17:00 WIB         ||\n");
	printf("\t\t|| 7.  ||   Medan-Papua          ||   Rp  7.200.000     ||         18:00 WIB         ||\n");
	printf("\t\t|| 8.  ||   Medan-Yogyakarta     ||   Rp  5.150.000     ||         19:00 WIB         ||\n");
	printf("\t\t|| 9.  ||   Medan-Padang         ||   Rp  700.000       ||         20:20 WIB         ||\n");
	printf("\t\t|| 10. ||   Medan-Pontianak      ||   Rp  3.500.000     ||         10:10 WIB         ||\n");
	printf("\t\t|| 11. ||   Jakarta-Medan        ||   Rp  1.025.000     ||         12:02 WIB         ||\n");
	printf("\t\t|| 12. ||   Jakarta-Palembang    ||   Rp  850.000       ||         14:14 WIB         ||\n");
	printf("\t\t|| 13. ||   Jakarta-Lampung      ||   Rp  600.000       ||         09:15 WIB         ||\n");
	printf("\t\t|| 14. ||   Jakarta-Kalimantan   ||   Rp  3.700.000     ||         06:10 WIB         ||\n");
	printf("\t\t|| 15. ||   Jakarta-Makassar     ||   Rp  4.200.000     ||         11:00 WIB         ||\n");
	printf("\t\t|| 16. ||   Jambi-Pekanbaru      ||   Rp  600.000       ||         08:25 WIB         ||\n");
	printf("\t\t|| 17. ||   Jambi-Bogor          ||   Rp  1.790.000     ||         04:10 WIB         ||\n");
	printf("\t\t|| 18. ||   Jambi-Ketapang       ||   Rp  2.455.000     ||         10:00 WIB         ||\n");
	printf("\t\t|| 19. ||   Jambi-Malang         ||   Rp  4.050.000     ||         13:05 WIB         ||\n");
	printf("\t\t|| 20. ||   Jambi-Palangkaraya   ||   Rp  4.250.000     ||         14:00 WIB         ||\n");
	printf("\t\t|| 21. ||   Palembang-Denpasar   ||   Rp  4.450.000     ||         11:30 WIB         ||\n");
       printf("\t\t|| 22. ||   Palembang-Lombok     ||   Rp  5.350.000     ||         10:25 WIB         ||\n");
       printf("\t\t|| 23. ||   Palembang-Pontianak  ||   Rp  5.200.000     ||         09:00 WIB         ||\n");
       printf("\t\t|| 24. ||   Palembang-Medan      ||   Rp  2.000.000     ||         08:00 WIB         ||\n");
       printf("\t\t|| 25. ||   Palembang-Aceh       ||   Rp  4.500.000     ||         06:30 WIB         ||\n");
       printf("\t\t|| 26. ||   Palembang-bali       ||   Rp  4.350.000     ||         05:00 WIB         ||\n");
       printf("\t\t|| 27. ||   Surabaya-Jakarta     ||   Rp  1.000.000     ||         11:00 WIB         ||\n");
       printf("\t\t|| 28. ||   Surabaya-Solo        ||   Rp  600.000       ||         10:30 WIB         ||\n");
       printf("\t\t|| 29. ||   Surabaya-Semarang    ||   Rp  500.000       ||         13:20 WIB         ||\n");
       printf("\t\t|| 30. ||   Surabaya-Bali        ||   Rp  3.000.000     ||         14:45 WIB         ||\n");
       printf("\t\t|| 31. ||   Surabaya-Bekasi      ||   Rp  600.000       ||         15:00 WIB         ||\n");
       printf("\t\t|| 32. ||   Bandung-Surabaya     ||   Rp  500.000       ||         15:20 WIB         ||\n");
       printf("\t\t|| 33. ||   Bandung-Bengkulu     ||   Rp  3.500.000     ||         15:30 WIB         ||\n");
       printf("\t\t|| 34. ||   Bandung-Medan        ||   Rp  4.500.000     ||         13:45 WIB         ||\n");
       printf("\t\t|| 35. ||   Bandung-Pekanbaru    ||   Rp  2.000.000     ||         15:20 WIB         ||\n");
       printf("\t\t|| 36. ||   Bandung-Cirebon      ||   Rp  800.0000      ||         15:30 WIB         ||\n");
       printf("\t\t|| 37. ||   Solo-Papua           ||   Rp  4.000.000     ||         15:45 WIB         ||\n");
       printf("\t\t|| 38. ||   Solo-Tegal           ||   Rp  800.000       ||         12:12 WIB         ||\n");
       printf("\t\t|| 39. ||   Solo-Probolinggo     ||   Rp  1.700.000     ||         14:00 WIB         ||\n");
       printf("\t\t|| 40. ||   Solo-Aceh            ||   Rp  6.000.000     ||         14:20 WIB         ||\n");
       printf("\t\t|| 41. ||   Solo-Bali            ||   Rp  3.000.000     ||         11:30 WIB         ||\n");
       printf("\t\t|| 42. ||   Papua-Aceh           ||   Rp  9.900.000     ||         10:00 WIT         ||\n");
       printf("\t\t|| 43. ||   Papua-Jakarta        ||   Rp  4.000.000     ||         09:50 WIT         ||\n");
       printf("\t\t|| 44. ||   Papua-Jambi          ||   Rp  3.500.000     ||         10:30 WIT         ||\n");
       printf("\t\t|| 45. ||   Papua-Medan          ||   Rp  8.000.000     ||         11:45 WIT         ||\n");
       printf("\t\t|| 46. ||   Papua-Bogor          ||   Rp  5.000.000     ||         13:45 WIT         ||\n");
       printf("\t\t|| 47. ||   Maluku-Jambi         ||   Rp  3.500.000     ||         14:45 WIT         ||\n");
       printf("\t\t|| 48. ||   Maluku-Denpasar      ||   Rp  4.300.000     ||         05:05 WIT         ||\n");
       printf("\t\t|| 49. ||   Maluku-Kalimantan    ||   Rp  2.800.000     ||         06:01 WIT         ||\n");
       printf("\t\t|| 50. ||   Maluku-Bengkulu      ||   Rp  2.200.000     ||         03:59 WIT         ||\n");
       printf("\t\t|| 51. ||   Maluku-Surabaya      ||   Rp  3.500.000     ||         04:30 WIT         ||\n");
       printf("\t\t|| 52. ||   Maluku-Bali          ||   Rp  4.000.000     ||         05:30 WIT         ||\n");
       printf("\t\t|| 53. ||   Maluku-Pekanbaru     ||   Rp  3.900.000     ||         02:11 WIT         ||\n");
       printf("\t\t|| 54. ||   Maluku-Gorontalo     ||   Rp  5.600.000     ||         03:45 WIT         ||\n");
       printf("\t\t|| 55. ||   Maluku-Batam         ||   Rp  6.500.000     ||         09:40 WIT         ||\n");
       printf("\t\t|| 56. ||   Papua-Maluku         ||   Rp  800.000       ||         10:59 WIT         ||\n");
       printf("\t\t|| 57. ||   Papua-Banten         ||   Rp  1.000.000     ||         11:30 WIT         ||\n");
       printf("\t\t|| 58. ||   Papua-Makassar       ||   Rp  2.000.000     ||         13:25 WIT         ||\n");
       printf("\t\t|| 59. ||   Papua-Kalimantan     ||   Rp  3.500.000     ||         14:50 WIT         ||\n");
       printf("\t\t|| 60. ||   Papua-Gorontalo      ||   Rp  450.000       ||         16:00 WIT         ||\n");
       printf("\t\t|| 61. ||   Papua-Malang         ||   Rp  3.200.000     ||         17:30 WIT         ||\n");
       printf("\t\t|| 62. ||   Papua-Pekanbaru      ||   Rp  6.000.000     ||         06:01 WIT         ||\n");
       printf("\t\t|| 63. ||   Papua-Denpasar       ||   Rp  4.500.000     ||         18:50 WIT         ||\n");
       printf("\t\t|| 64. ||   Papua-Bekasi         ||   Rp  6.000.000     ||         20:00 WIT         ||\n");
       printf("\t\t|| 65. ||   Papua-Padang         ||   Rp  8.085.000     ||         19:00 WIT         ||\n");
       printf("\t\t|| 66. ||   Papua-Palembang      ||   Rp  4.800.000     ||         11:15 WIT         ||\n");
       printf("\t\t|| 67. ||   Papua-Lampung        ||   Rp  4.900.000     ||         14:14 WIT         ||\n");
       printf("\t\t|| 68. ||   Papua-Tegal          ||   Rp  5.000.000     ||         15:40 WIT         ||\n");
       printf("\t\t|| 69. ||   Papua-Bengkulu       ||   Rp  3.900.000     ||         07:40 WIT         ||\n");
       printf("\t\t|| 70. ||   Papua-Yogyakarta     ||   Rp  3.200.000     ||         08:25 WIT         ||\n");
       printf("\t\t|| 71. ||   Kalimantan-Bengkulu  ||   Rp  2.900.000     ||         09:50 WITA        ||\n");
       printf("\t\t|| 72. ||   Kalimantan-Bali      ||   Rp  3.000.000     ||         10:45 WITA        ||\n");
       printf("\t\t|| 73. ||   Kalimantan-Pekanbaru ||   Rp  3.450.000     ||         11:30 WITA        ||\n");
       printf("\t\t|| 74. ||   Kalimantan-Gorontalo ||   Rp  4.500.000     ||         13:50 WITA        ||\n");
       printf("\t\t|| 75. ||   Kalimantan-NTT       ||   Rp  1.200.000     ||         14:30 WITA        ||\n");
       printf("\t\t|| 76. ||   Kalimantan-Jambi     ||   Rp  5.600.000     ||         18:50 WITA        ||\n");
       printf("\t\t|| 77. ||   Kalimantan-lampung   ||   Rp  4.000.000     ||         20:40 WITA        ||\n");
       printf("\t\t|| 78. ||   Bali-SoLo            ||   Rp  2.000.000     ||         16:27 WITA        ||\n");
       printf("\t\t|| 79. ||   Bali-Bogor           ||   Rp  3.200.000     ||         17:32 WITA        ||\n");
       printf("\t\t|| 80. ||   Bali-Lampung         ||   Rp  3.800.000     ||         18:18 WITA        ||\n");
       printf("\t\t|| 81. ||   Bali-Medan           ||   Rp  6.300.000     ||         19:20 WITA        ||\n");
       printf("\t\t|| 82. ||   Bali-Jakarta         ||   Rp  2.300.000     ||         07:00 WITA        ||\n");
       printf("\t\t|| 83. ||   NTT-Padang           ||   Rp  7.300.000     ||         09:45 WITA        ||\n");
       printf("\t\t|| 84. ||   NTT-Kalimantan       ||   Rp  4.500.000     ||         15:30 WITA        ||\n");
       printf("\t\t|| 85. ||   NTT-Bogor            ||   Rp  5.400.000     ||         16:50 WITA        ||\n");
       printf("\t\t|| 86. ||   NTT-palembang        ||   Rp  6.055.000     ||         08:55 WITA        ||\n");
       printf("\t\t|| 87. ||   NTT-Semarang         ||   Rp  5.755.000     ||         14:17 WITA        ||\n");
       printf("\t\t|| 88. ||   NTT-Gorontalo        ||   Rp  4.010.000     ||         16:23 WITA        ||\n");
       printf("\t\t|| 89. ||   NTT-NTB              ||   Rp  2.045.000     ||         06:17 WITA        ||\n");
       printf("\t\t|| 90. ||   Gorontalo-Medan      ||   Rp  5.760.000     ||         05:35 WITA        ||\n");
       printf("\t\t|| 91. ||   Gorontalo-pekanbaru  ||   Rp  5.500.000     ||         18:17 WITA        ||\n");
       printf("\t\t|| 92. ||   Gorontalo-Jogja      ||   Rp  3.645.000     ||         09:35 WITA        ||\n");
       printf("\t\t|| 93. ||   Gorontalo-Aceh       ||   Rp  7.890.000     ||         06:10 WITA        ||\n");
       printf("\t\t|| 94. ||   Gorontalo-Jakarta    ||   Rp  5.500.000     ||         14:16 WITA        ||\n");
       printf("\t\t|| 95. ||   Gorontalo-lampung    ||   Rp  6.560.000     ||         15:55 WITA        ||\n");
       printf("\t\t|| 96. ||   Gorontalo-Batam      ||   Rp  6.600.000     ||         11:10 WITA        ||\n");
       printf("\t\t|| 97. ||   NTB-Aceh             ||   Rp  8.970.000     ||         10:17 WITA        ||\n");
       printf("\t\t|| 98. ||   NTB-Medan            ||   Rp  8.000.000     ||         08:08 WITA        ||\n");
       printf("\t\t|| 99. ||   NTB-Pekanbaru        ||   Rp  5.900.000     ||         05:40 WITA        ||\n");
       printf("\t\t|| 100.||   NTB-Jakarta          ||   Rp  4.990.000     ||         08:00 WITA        ||\n");
       printf("\t\t||===================================================================================||\n");
       printf("\t\t||                 Spesial Diskon 25% Penerbangan YUSA Internasional                   ||\n");
       printf("\t\t||                   Dalam Rangka Hari Jadi YUSA Internasional                       ||\n");
       printf("\t\t||===================================================================================||\n");
       printf("\t\t|| 101.||   NTB-Palembang        ||   Rp  4.500.000     ||         13:50 WITA        ||\n");
       printf("\t\t|| 102.||   NTB-Lampung          ||   Rp  4.885.000     ||         14:32 WITA        ||\n");
       printf("\t\t|| 103.||   Jogja-Bogor          ||   Rp  1.100.000     ||         10:24 WIB         ||\n");
       printf("\t\t|| 104.||   Jogja-Bali           ||   Rp  3.655.000     ||         06:45 WIB         ||\n");
       printf("\t\t|| 105.||   Medan-Jakarta        ||   Rp  2.560.000     ||         14:15 WIB         ||\n");
       printf("\t\t|| 106.||   Medan-Jambi          ||   Rp  2.100.000     ||         17:00 WIB         ||\n");
       printf("\t\t|| 107.||   Pekanbaru-Bali       ||   Rp  4.950.000     ||         10:00 WIB         ||\n");
       printf("\t\t|| 108.||   Pekanbaru-Malang     ||   Rp  3.765.000     ||         12:19 WIB         ||\n");
       printf("\t\t|| 109.||   Pekanbaru-aceh       ||   Rp  2.235.000     ||         16:19 WIB         ||\n");
       printf("\t\t|| 110.||   Maluku-Batam         ||   Rp  3.400.000     ||         19:19 WIT         ||\n");
       printf("\t\t||===================================================================================||\n");
       printf("\n");//merupakan untuk perintah menampilkan newline(baris baru)
       printf("\n");//merupakan untuk perintah menampilkan newline(baris baru)
       printf("\n");//merupakan untuk perintah menampilkan newline(baris baru)
       printf("\t\tMasukkan Menu Pembelian Tiket Pesawat : ");//perintah untuk menampilkan inputan pembelian tiket pesawat yang telah dibuat
       scanf("%i", &menu);//perintah untuk memasukan inputan menggunakan angka yang telah dibuat menggunakan tipe data integer variable menu sebagai deklarasinya
       printf("\n");//merupakan untuk perintah menampilkan newline(baris baru)
    
    switch(menu){//switch digunakan untuk  bentuk percabangan jika suatu kondisi bernilai benar maka blok kode nilai akan dijalankan penggunaannya
    case 1 ://merupakan fungsi untuk  menyatakan satu kondisi
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan 
        printf("\t\tTujuan Penerbangan : Pekanbaru-Batam \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 745000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 12:00 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan 
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        printf("\t\tMaaf uang anda tidak cukup \n");
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 2 ://merupakan fungsi untuk  menyatakan satu kondisi
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan 
        printf("\t\tTujuan Penerbangan : Pekanbaru-Medan \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 1100000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 13:00 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan 
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
       if(total<=uang){
               printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
       }
       else{
              printf("\t\tMaaf uang Anda tidak cukup \n");
       }
break;//berfungi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 3 ://merupakan fungsi untuk  menyatakan satu kondis
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan 
        printf("\t\tTujuan Penerbangan : Pekanbaru-Jakarta \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 1800000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 14:00 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan 
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 4 ://merupakan fungsi untuk  menyatakan satu kondisi
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan 
        printf("\t\tTujuan Penerbangan : Pekanbaru-solo \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 1000000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 15:15 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 5 ://merupakan fungsi untuk  menyatakan satu kondisi
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan 
        printf("\t\tTujuan Penerbangan : Pekanbaru-Bali \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 2000000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 16:00 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 6 ://merupakan fungsi untuk  menyatakan satu kondisi
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan 
        printf("\t\tTujuan Penerbangan : Medan-Bogor \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 1500000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 17:00 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 7 ://merupakan fungsi untuk  menyatakan satu kondisi
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Medan-Papua \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 7200000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 18:00 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 8 ://merupakan fungsi untuk  menyatakan satu kondisi
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Medan-Yogyakarta \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 5150000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 19:00 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 9 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Medan-Padang \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 700000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 20:20 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 10 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Medan-Pontianak \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 3500000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 10:10 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 11 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Jakarta-Medan \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 1025000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 12:02 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 12 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Jakarta-Palembang \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 850000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 14:14 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 13 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Jakarta-Lampung \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 600000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 09:15 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 14 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Jakarta-Kalimantan \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 3700000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 06:10 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 15 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Jakarta-Makassar \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4200000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 11:00 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 16 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Jambi-Pekanbaru \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 600000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 08:25 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 17 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Jambi-Bogor \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 1790000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 04:10 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 18 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Jambi-Ketapang \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 2455000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 10:00 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 19 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Jambi-Malang \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4050000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 13:05 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 20 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Jambi-Palangkaraya \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4250000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 14:00 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 21 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Palembang-Denpasar \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4450000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 11:30 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 22 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Palembang-Lombok \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 5350000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 10:25 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 23 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Palembang-Pontianak \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 5200000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 09:00 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 24 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Palembang-Medan \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 2000000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 08:00 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 25 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Palembang-Aceh \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4500000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 06:30 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 26 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Palembang-bali \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4350000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 05:00 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 27 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Surabaya-Jakarta \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 1000000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 11:00 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 28 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Surabaya-Solo \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 600000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 10:30 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 29 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Surabaya-Semarang \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 500000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 13:20 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 30 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Surabaya-Bali \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 3000000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 14:45 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 31 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Surabaya-Bekasi \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 600000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 15:00 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 32 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Bandung-Surabaya \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 500000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 15:20 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 33 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Bandung-Bengkulu \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 3500000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 15:30 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 34 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Bandung-Medan \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4500000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 13:45 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 35 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Bandung-Pekanbaru \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 2000000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 15:20 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 36 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Bandung-Cirebon \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 800000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 15:30 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 37 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Solo-Papua \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4000000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 15:45 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 38 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Solo-Tegal \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 800000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 12:12 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 39 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Solo-Probolinggo \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 1700000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 14:00 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 40 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Solo-Aceh \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 6000000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 14:20 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 41 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Solo-Bali \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 300000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 11:30 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 42 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Papua-Aceh \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 9900000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 10:00 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 43 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Papua-Jakarta \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4000000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 09:50 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
 break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 44 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Papua-Jambi \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 3500000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 10:30 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 45 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Papua-Medan \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 8000000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 11:45 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 46 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Papua-Bogor \n");//berfungsi untuk menampilkan tujuan penerbangan;
         harga = 5000000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 13:45 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
 break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 47 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Maluku-Jambi \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 3500000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 14:45 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
 break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 48 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Maluku-Denpasar \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4300000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 05:05 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
 break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 49 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Maluku-Kalimantan \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 2800000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 06:01 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
 break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 50 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Maluku-Bengkulu \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 2200000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 03:59 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 51 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Maluku-Surabaya \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 3500000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 04:30 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 52 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Maluku-Bali \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4000000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 05:30 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 53 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Maluku-Pekanbaru \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 3900000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 02:11 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 54 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Maluku-Gorontalo \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 5600000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 03:45 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 55 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Maluku-Batam \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 6500000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 09:40 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 56 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Papua-Maluku \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 800000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 10:59 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 57 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Papua-Banten \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 1000000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 11:30 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 58 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Papua-Makassar \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 2000000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 13:25 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 59 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Papua-Kalimantan \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 3500000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 14:50 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 60 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Papua-Gorontalo \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 450000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 16:00 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya  
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 61 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Papua-Malang \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 3200000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 17:30 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 62 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Papua-Pekanbaru \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 6000000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 06:01 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 63 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Papua-Denpasar \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4500000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 18:50 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 64 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Papua-Bekasi \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 6000000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 20:00 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 65 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Papua-Padang \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 8085000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 19:00 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 66 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Papua-Palembang \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4800000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 11:15 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 67 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Papua-Lampung \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4900000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 14:14 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp.f4 %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 68 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Papua-Tegal \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 5000000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 15:40 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 69 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Papua-Bengkulu \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 3900000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 07:40 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 70 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Papua-Yogyakarta \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 3200000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 08:25 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 71 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Kalimantan-Bengkulu \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 2900000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 09:50 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 72 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Kalimantan-Bali \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 3000000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 10:45 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 73 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Kalimantan-Pekanbaru \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 3450000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 11:30 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 74 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Kalimantan-Gorontalo \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4500000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 13:50 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 75 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Kalimantan-NTT \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 1200000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 14:30 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 76 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Kalimantan-Jambi \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 5600000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 18:50 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 77 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Kalimantan-lampung \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4000000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 03:45 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 78 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Bali-SoLo \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 2000000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 16:27 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 79 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Bali-Bogor \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 3200000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 17:32 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 80 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Bali-Lampung \n");//berfungsi untuk menampilkan tujuan penerbangan
        printf("\t\tJadwal Penerbangan : 18:18 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 81 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Bali-Medan \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 6300000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 19:20 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 82 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Bali-Jakarta \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 2300000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 07:00 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 83 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : NTT-Padang \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 7300000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 09:45 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 84 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : NTT-Kalimantan \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4500000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 15:30 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 85 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : NTT-Bogor \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 5400000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 16:50 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 86 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : NTT-palembang \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 6055000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 08:55 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 87 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : NTT-Semarang \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 5755000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 14:17 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 88 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : NTT-Gorontalo \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4010000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 16:23 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 89 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : NTT-NTB \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 2045000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 06:17 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 90 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Gorontalo-Medan \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 5760000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 05:35 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
 break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 91 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Gorontalo-Pekanbaru \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 5500000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 18:17 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 92 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Gorontalo-Jogja \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 3645000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 09:35 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 93 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Gorontalo-Aceh \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 7890000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 06:10 WITA \n");
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 94 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Gorontalo-Jakarta \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 5500000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 14:16 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 95 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Gorontalo-lampung \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 6560000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 15:55 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 96 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Gorontalo-Batam \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 6600000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 11:10 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
 break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 97 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : NTB-Aceh \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 8970000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 18:17 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 98 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : NTB-Medan \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 8000000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 08:08 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 99 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : NTB-Pekanbaru \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 5900000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 05:40 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 100 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : NTB-Jakarta \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4990000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 08:00 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        total = jml*harga;//rumus yang digunakan untuk mencari total
        printf("\t\tMasukkan Jumlah Pembayaran = Rp. %i\n", total);//berfungsi untuk menampilkan jumlah pembayaran menggunakan tipe data integer dengan variable total deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-total;//merupakan kembalian dari hasil uang yang diberikan di kurang total harga
        printf("\t\tTotal Kembalian = Rp. %i", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 101 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : NTB-Palembang \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4500000;//merupakan harga yang telah ditentukan 
        printf("\t\tJadwal Penerbangan : 15:30 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan 
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang ingin dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        printf("\t\tSelamat Anda Mendapatkan Diskon sebesar 25 persen \n");//berfungsi untuk menampilkan informasi diskon yang telah ditetapkan
        printf("\t\tTotal Pembayaran Yang Akan Dibayar (Sebelum Diskon) = Rp. %i\n", harga);//berfungsi untuk menampilkan total pembayaran yang akan dibayar (sebelum diskon) dengan menggunakan tipe data integer dengan variable harga deklarasinya
        disc = harga*0.25;//rumus yang digunakan untuk mencari disc yaitu harga*0.25
        printf("\t\tTotal Pembayaran Yang Akan Dibayar (Setelah Diskon) = Rp. %i\n", disc);//berfungsi untuk menampilkan total pembayaran yang akan dibayar (setelah diskon) menggunakan tipe data integer dengan variable disc deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan menampilkan dengan menggunakan tipe data integer variable uang sebagai deklarasinya 
        kembalian = uang-disc;//merupakan kembalian dari hasil uang yang diberikan dikurang harga disc
        printf("\t\tTotal Kembalian = Rp. %i\n", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer variable kembalian sebagai deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 102 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : NTB-Lampung \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4885000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 14:32 WITA \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        printf("\t\tSelamat Anda Mendapatkan Diskon sebesar 25 persen \n");//berfungsi untuk menampilkan informasi diskon yang telah ditetapkan
        printf("\t\tTotal Pembayaran Yang Akan Dibayar (Sebelum Diskon) = Rp. %i\n", harga);//berfungsi untuk menampilkan total pembayaran yang akan dibayar (sebelum diskon) dengan menggunakan tipe data integer dengan variable harga deklarasinya
        disc = harga*0.25;//rumus yang digunakan untuk mencari disc yaitu harga*0.25
        printf("\t\tTotal Pembayaran Yang Akan Dibayar (Setelah Diskon) = Rp. %i\n", disc);//berfungsi untuk menampilkan total pembayaran yang akan dibayar (setelah diskon) menggunakan tipe data integer dengan variable disc deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-disc;//merupakan kembalian dari hasil uang yang diberikan dikurang harga disc
        printf("\t\tTotal Kembalian = Rp. %i\n", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 103 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Jogja-Bogor \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 1100000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 10:24 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        printf("\t\tSelamat Anda Mendapatkan Diskon sebesar 25 persen \n");//berfungsi untuk menampilkan informasi diskon yang telah ditetapkan
        printf("\t\tTotal Pembayaran Yang Akan Dibayar (Sebelum Diskon) = Rp. %i\n", harga);//berfungsi untuk menampilkan total pembayaran yang akan dibayar (sebelum diskon) dengan menggunakan tipe data integer dengan variable harga deklarasinya
        disc = harga*0.25;//rumus yang digunakan untuk mencari disc yaitu harga*0.25
        printf("\t\tTotal Pembayaran Yang Akan Dibayar (Setelah Diskon) = Rp. %i\n", disc);//berfungsi untuk menampilkan total pembayaran yang akan dibayar (setelah diskon) menggunakan tipe data integer dengan variable disc deklarasinya        
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-disc;//merupakan kembalian dari hasil uang yang diberikan dikurang harga disc
        printf("\t\tTotal Kembalian = Rp. %i\n", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 104 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Jogja-Bali \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 3655000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 06:45 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        printf("\t\tSelamat Anda Mendapatkan Diskon sebesar 25 persen \n");//berfungsi untuk menampilkan informasi diskon yang telah ditetapkan
        printf("\t\tTotal Pembayaran Yang Akan Dibayar (Sebelum Diskon) = Rp. %i\n", harga);//berfungsi untuk menampilkan total pembayaran yang akan dibayar (sebelum diskon) dengan menggunakan tipe data integer dengan variable harga deklarasinya
        disc = harga*0.25;//rumus yang digunakan untuk mencari disc yaitu harga*0.25
        printf("\t\tTotal Pembayaran Yang Akan Dibayar (Setelah Diskon) = Rp. %i\n", disc);//berfungsi untuk menampilkan total pembayaran yang akan dibayar (setelah diskon) menggunakan tipe data integer dengan variable disc deklarasinya 
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-disc;//merupakan kembalian dari hasil uang yang diberikan dikurang harga disc
        printf("\t\tTotal Kembalian = Rp. %i\n", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 105 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Medan-Jakarta \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 2560000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 14:15 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        printf("\t\tSelamat Anda Mendapatkan Diskon sebesar 25 persen \n");//berfungsi untuk menampilkan informasi diskon yang telah ditetapkan
        printf("\t\tTotal Pembayaran Yang Akan Dibayar (Sebelum Diskon) = Rp. %i\n", harga);//berfungsi untuk menampilkan total pembayaran yang akan dibayar (sebelum diskon) dengan menggunakan tipe data integer dengan variable harga deklarasinya
        disc = harga*0.25;//rumus yang digunakan untuk mencari disc yaitu harga*0.25
        printf("\t\tTotal Pembayaran Yang Akan Dibayar (Setelah Diskon) = Rp. %i\n", disc);//berfungsi untuk menampilkan total pembayaran yang akan dibayar (setelah diskon) menggunakan tipe data integer dengan variable disc deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-disc;//merupakan kembalian dari hasil uang yang diberikan dikurang harga disc
        printf("\t\tTotal Kembalian = Rp. %i\n", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 106 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Medan-Jambi \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 2100000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 17:00 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        printf("\t\tSelamat Anda Mendapatkan Diskon sebesar 25 persen \n");//berfungsi untuk menampilkan informasi diskon yang telah ditetapkan
        printf("\t\tTotal Pembayaran Yang Akan Dibayar (Sebelum Diskon) = Rp. %i\n", harga);//berfungsi untuk menampilkan total pembayaran yang akan dibayar (sebelum diskon) dengan menggunakan tipe data integer dengan variable harga deklarasinya
        disc = harga*0.25;//rumus yang digunakan untuk mencari disc yaitu harga*0.25
        printf("\t\tTotal Pembayaran Yang Akan Dibayar (Setelah Diskon) = Rp. %i\n", disc);//berfungsi untuk menampilkan total pembayaran yang akan dibayar (setelah diskon) menggunakan tipe data integer dengan variable disc deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-disc;//merupakan kembalian dari hasil uang yang diberikan dikurang harga disc
        printf("\t\tTotal Kembalian = Rp. %i\n", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 107 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Pekanbaru-Bali \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 4950000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 10:00 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        printf("\t\tSelamat Anda Mendapatkan Diskon sebesar 25 persen \n");//berfungsi untuk menampilkan informasi diskon yang telah ditetapkan
        printf("\t\tTotal Pembayaran Yang Akan Dibayar (Sebelum Diskon) = Rp. %i\n", harga);//berfungsi untuk menampilkan total pembayaran yang akan dibayar (sebelum diskon) dengan menggunakan tipe data integer dengan variable harga deklarasinya
        disc = harga*0.25;//rumus yang digunakan untuk mencari disc yaitu harga*0.25
        printf("\t\tTotal Pembayaran Yang Akan Dibayar (Setelah Diskon) = Rp. %i\n", disc);//berfungsi untuk menampilkan total pembayaran yang akan dibayar (setelah diskon) menggunakan tipe data integer dengan variable disc deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-disc;//merupakan kembalian dari hasil uang yang diberikan dikurang harga disc
        printf("\t\tTotal Kembalian = Rp. %i\n", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 108 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Pekanbaru-Malang \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 3765000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 12:19 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        printf("\t\tSelamat Anda Mendapatkan Diskon sebesar 25 persen \n");//berfungsi untuk menampilkan informasi diskon yang telah ditetapkan
        printf("\t\tTotal Pembayaran Yang Akan Dibayar (Sebelum Diskon) = Rp. %i\n", harga);//berfungsi untuk menampilkan total pembayaran yang akan dibayar (sebelum diskon) dengan menggunakan tipe data integer dengan variable harga deklarasinya
        disc = harga*0.25;//rumus yang digunakan untuk mencari disc yaitu harga*0.25
        printf("\t\tTotal Pembayaran Yang Akan Dibayar (Setelah Diskon) = Rp. %i\n", disc);//berfungsi untuk menampilkan total pembayaran yang akan dibayar (setelah diskon) menggunakan tipe data integer dengan variable disc deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-disc;//merupakan kembalian dari hasil uang yang diberikan dikurang harga disc
        printf("\t\tTotal Kembalian = Rp. %i\n", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 109 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Pekanbaru-Aceh \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 2235000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 16:19 WIB \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        printf("\t\tSelamat Anda Mendapatkan Diskon sebesar 25 persen \n");//berfungsi untuk menampilkan informasi diskon yang telah ditetapkan
        printf("\t\tTotal Pembayaran Yang Akan Dibayar (Sebelum Diskon) = Rp. %i\n", harga);//berfungsi untuk menampilkan total pembayaran yang akan dibayar (sebelum diskon) dengan menggunakan tipe data integer dengan variable harga deklarasinya
        disc = harga*0.25;//rumus yang digunakan untuk mencari disc yaitu harga*0.25
        printf("\t\tTotal Pembayaran Yang Akan Dibayar (Setelah Diskon) = Rp. %i\n", disc);//berfungsi untuk menampilkan total pembayaran yang akan dibayar (setelah diskon) menggunakan tipe data integer dengan variable disc deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-disc;//merupakan kembalian dari hasil uang yang diberikan dikurang harga disc
        printf("\t\tTotal Kembalian = Rp. %i\n", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya
}//berfungsi untuk menutup suatu program
case 110 ://berfungsi untuk membuka semua baris fungsi yang kita inginkan
 {//berfungsi untuk membuka semua baris fungsi yang kita inginkan
        printf("\t\tTujuan Penerbangan : Maluku-Batam \n");//berfungsi untuk menampilkan tujuan penerbangan
        harga = 3400000;//merupakan harga yang telah ditentukan
        printf("\t\tJadwal Penerbangan : 19:19 WIT \n");//berfungsi untuk menampilkan jadwal penerbangan
        printf("\t\tMasukkan Jumlah Tiket Yang Ingin Dibeli : ");//berfungsi untuk menampilkan jumlah tiket yang dibeli
        scanf("%i", &jml);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable jml sebagai deklarasinya
        printf("\t\tSelamat Anda Mendapatkan Diskon sebesar 25 persen \n");//berfungsi untuk menampilkan informasi diskon yang telah ditetapkan
        printf("\t\tTotal Pembayaran Yang Akan Dibayar (Sebelum Diskon) = Rp. %i\n", harga);//berfungsi untuk menampilkan total pembayaran yang akan dibayar (sebelum diskon) dengan menggunakan tipe data integer dengan variable harga deklarasinya
        disc = harga*0.25;//rumus yang digunakan untuk mencari disc yaitu harga*0.25
        printf("\t\tTotal Pembayaran Yang Akan Dibayar (Setelah Diskon) = Rp. %i\n", disc);//berfungsi untuk menampilkan total pembayaran yang akan dibayar (setelah diskon) menggunakan tipe data integer dengan variable disc deklarasinya
        printf("\t\tMasukkan Uang Yang Diberikan = Rp. ");//berfungsi untuk menampilkan uang yang diberikan berupa angka
        scanf("%i", &uang);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer,variable uang sebagai deklarasinya
        kembalian = uang-disc;//merupakan kembalian dari hasil uang yang diberikan dikurang harga disc
        printf("\t\tTotal Kembalian = Rp. %i\n", kembalian);//berfungsi untuk menampilkan total kembalian menggunakan tipe data integer dengan variable kembalian deklarasinya
}break;//berfungsi untuk memaksa sebuah perulangan berhenti sebelum waktunya

    default://merupakan jika kodisi tersebut tidak terdapat pada kondisi manapun,menyatakan suatu perintah yang tidak ada
        printf("Menu tersebut tidak ada");//berfungsi untuk menampilkan menu tersebur tidak ada
        printf("Maaf uang Anda Tidak Cukup");
}//berfungsi untuk menutup suatu program
    printf("\nApakah Ada Transaksi Lagi (Y/N) = ");
    scanf("%s", &asha);//merupakan perintah untuk menerima masukan dengan menggunakan tipe data integer variable asha sebagai deklarasinya
    
    if(asha=='y' || asha=='Y'){// merupakan fungsi percabangan untuk melakukan transaksi kembali jika memasukan inputan 'y' maka akan diarahkan kembali ke "pertama" 
     goto pertama;//berfungsi untuk mengarahkan pada sebuah inputan pertama
     }
    if(asha== 'N'|| asha== 'n'){// merupakan fungsi percabangan untuk melakukan transaksi keluar jika memasukan inputan 'n' maka akan diarahkan keluar "selesai"
     goto selesai;//berfungsi untuk mengarahkan pada sebuah inputan yang ditetapkan selesai
     }

selesai://berfungsi untuk menampilkan perintah akhir
    printf("\n>>>>Terima Kasih Sudah Membeli Tiket Pesawat di YUSA Internasional<<<<");
return 0;//berfungsi untuk nilai balikan,mengembalikan nilai menjadi 0
}//berfungsi untuk menutup suatu program
