#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int menu,jumlah_pesanan, pajak, total, total_akhir;
    int nasi = 3000;
    int ayam_bakar = 13000;
    int tahu = 2000;
    int tempe = 2000;
    int lalap = 3000;
    int air_mineral = 4000;
    int sayur_asem = 8000;
    int gepuk = 6000;
    int air_hangat = 2000;
    
    printf("=====================================\n");
    printf("Nama : Rama Edwinda Putra\n");
    printf("NPM : 177006039\n");
    printf("KELOMPOK 5\n");
	printf("=====================================\n");
    printf("====== Selamat Datang di Resto ======\n");
    printf("=====================================\n");
    printf("============PAKET MAKANAN============\n");
    printf("=====================================\n");
    printf("Paket 1 - Gembira Meriah\n");
    printf("Paket 2 - Ganjel perut\n");
    printf("Paket 3 - Pelajar Mantab \n");
    printf("Paket 4 - Gurih Nyoy \n");
    printf("=====================================\n");
    printf("Silahkan pilih paket menu yang ada : ");
    scanf("%d",&menu);
    printf("Banyaknya pesanan : ");
    scanf("%d",&jumlah_pesanan);
    printf("\n");
    
    switch (menu){
        case 1 :
            printf("Paket 1 \n");
            printf("Nasi : Rp %d",nasi);
            printf("\nAyam Bakar : Rp %d",ayam_bakar);
            printf("\nTahu : Rp %d",tahu);
            printf("\nTempe : Rp %d",tempe);
            printf("\nLalapan : Rp %d",lalap);
            printf("\nAir Mineral : Rp %d",air_mineral);
            printf("\nJumlah pesanan :%d paket",jumlah_pesanan);
            total=(nasi+ayam_bakar+tahu+tempe+lalap+air_mineral)*jumlah_pesanan;
            pajak=(total)*10/100;
            total_akhir=total+pajak;
            printf("\n");
            printf("\nTotal, Paket 1 * %d : Rp %d",jumlah_pesanan, total);
            printf("\nPajak 10 persen : Rp %d",pajak);
            printf("\nJadi, total yang harus anda bayar  : Rp %d",total_akhir);
            printf("\n");
            break;
        case 2 :
            printf("Paket 2 \n");
            printf("Nasi : Rp %d",nasi);
            printf("\nAyam Bakar : Rp %d",ayam_bakar);
            printf("\nSayur Asem : Rp %d",sayur_asem);
            printf("\nTahu : Rp %d",tahu);
            printf("\nTempe : Rp %d",tempe);
            printf("\nLalapan : Rp %d",lalap);
            printf("\nAir Mineral : Rp %d",air_mineral);
            printf("\nJumlah pesanan :%d paket",jumlah_pesanan);
            total=(nasi+ayam_bakar+sayur_asem+tahu+tempe+lalap+air_mineral)*jumlah_pesanan;
            pajak=(total)*10/100;
            total_akhir=total+pajak;
            printf("\n");
            printf("\nTotal, Paket 2 * %d : Rp %d",jumlah_pesanan, total);
            printf("\nPajak 10 persen : Rp %d",pajak);
            printf("\nJadi, total yang harus anda bayar  : Rp %d",total_akhir);
            printf("\n");
            break;
        case 3 :
            printf("Paket 3 \n");
            printf("Nasi : Rp %d",nasi);
            printf("\nGepuk : Rp %d",gepuk);
            printf("\nTahu : Rp %d",tahu);
            printf("\nTempe : Rp %d",tempe);
            printf("\nLalapan : Rp %d",lalap);
            printf("\nAir Hangat : Rp %d",air_hangat);
            printf("\nJumlah pesanan :%d paket",jumlah_pesanan);
            total=(nasi+ayam_bakar+tahu+tempe+lalap+air_hangat)*jumlah_pesanan;
            pajak=(total)*10/100;
            total_akhir=total+pajak;
            printf("\n");
            printf("\nTotal, Paket 3 * %d : Rp %d",jumlah_pesanan, total);
            printf("\nPajak 10 persen : Rp %d",pajak);
            printf("\nJadi, total yang harus anda bayar  : Rp %d",total_akhir);
            printf("\n");
            break;
        case 4 :
            printf("Paket 4 \n");
            printf("Nasi : Rp %d",nasi);
            printf("\nAyam Bakar : Rp %d",ayam_bakar);
            printf("\nTahu : Rp %d",tahu);
            printf("\nTempe : Rp %d",tempe);
            printf("\nLalapan : Rp %d",lalap);
            printf("\nAir Hangat : Rp %d",air_hangat);
            printf("\nJumlah pesanan : %d paket",jumlah_pesanan);
            total=(nasi+ayam_bakar+tahu+tempe+lalap+air_mineral)*jumlah_pesanan;
            pajak=(total)*10/100;
            total_akhir=total+pajak;
            printf("\n");
            printf("\nTotal, Paket 1 * %d : Rp %d",jumlah_pesanan, total);
            printf("\nPajak 10 persen : Rp %d",pajak);
            printf("\nJadi, total yang harus anda bayar  : Rp %d",total_akhir);
            printf("\n");
            break;
        default:
        printf("Maaf, paket yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi.. \n");       
    }
    system("pause");
    return 0;
}
