#include <stdio.h>
#include <conio.h>
int main()
{
	
	long rupiah=14500,dollar,kurs;
	printf("											PROGRAM KONVERSI DOLLAR KE RUPIAH\n");
	printf("											BY ACHMAD DIDHANI NIM 311810294\n");
	printf("										INSITUT PELITA BANGSA. TEKHNIK INFORMATIKA\n\n");
	printf("Masukan nilai Dollar $USD : ");scanf("%d", &dollar);
	kurs=rupiah*dollar;
	printf("kurs = %i * %i = Rp %i",dollar,rupiah,kurs);
	getch();
}
