#include <stdio.h> //
#include <stdlib.h> //
#include <string.h>

struct mahasiswa
{
	char nim[20];
	char namamhs[20];
	struct mahasiswa *next;
};

struct mahasiswa *ujung; //head

int tambah_data_mhs()
{
	struct mahasiswa *tampung;
	int j = 0;
	char jawab[2];
	
	printf(" Last List LIFO");
	printf("\n");
	printf("_______________");
	
	while(1)
	{
		ujung = (struct mahasiswa*)malloc(sizeof(struct mahasiswa));
		fflush(stdin);
		printf("\n\n");
		printf(" Nama	: "); scanf("%s", &ujung->namamhs);
		printf("\n");
		printf(" NIM	: "); scanf("%s", &ujung->nim);
		
		if (j == 0)
		{
			ujung->next = NULL;
			tampung = ujung;
		}
		
		else
		{
			tampung->next = ujung;
			ujung = tampung;
		}
		printf("\n");
		printf(" Tambah Data Mahasiswa (Y/T)	:"); scanf("%s", &jawab);
		
		if (strcmp(jawab, "Y") == 0)
		{
			j++; continue;
		}
		else if (strcmp(jawab, "T") == 0)
		break;
	}
	return 0;
}
void tampil_data()
{
	struct mahasiswa *tampil;
	printf("\n\n");                                                                                                     
	printf(" Data Mahasiswa yang telah diinputkan	:\n");
	printf("\n");
	printf("NIM	|	NAMA\n\n");
	tampil = ujung;
	while (tampil != NULL)
	{
		printf("%s\t	%s\t \n", tampil->nim, tampil->namamhs);
		tampil = tampil->next;
	}
}
int main()
{
	tambah_data_mhs();
	tampil_data();
	return 0;
}

