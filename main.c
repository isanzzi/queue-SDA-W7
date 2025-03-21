#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "print.h"

int main(){
    boolean lanjut=true;
    Queue q1, q2;
    createinit(&q1, &q2);
    infotype count1=1, count2=1;
    while (lanjut==true){
        MainMenu();
        char menu;
        scanf(" %c", &menu);
        getchar();

        switch (menu) {
            case '1':
                printf ("\nisi list a : ");
                Tampil_List (q1.head);
                printf ("isi list b : ");
                Tampil_List (q2.head);
                PilihList();
                char list1;
                scanf(" %c", &list1);
                getchar();
                switch (list1){
                    case 'a':
                        enqueue (&q1, &count1);
                        Tampil_List (q1.head);
                        printf ("\n");
                        break;
                    case 'b':
                        enqueue(&q2, &count2);
                        Tampil_List(q2.head);
                        printf ("\n");
                        break;
                    default :
                    break;
                }
            printf ("tekan enter untuk kembali\n");
            getchar();
            break;
            case '2':
                printf("isi list a : ");
                Tampil_List (q1.head);
                printf("isi list b : ");
                Tampil_List (q2.head);
                PilihList();
                char list2;
                scanf(" %c", &list2); 
                getchar();
                switch (list2){
                    case 'a':
                        dequeueandprint (&q1);
                        printf("isi list sekarang : ");
                        Tampil_List (q1.head);
                        break;
                    case 'b':
                        dequeueandprint (&q2);
                        printf("isi list sekarang : ");
                        Tampil_List (q2.head);
                        break;
                    default :
                    break;
                }
            printf ("tekan enter untuk kembali ke menu");
            getchar();
            break;                
            case '3':
                printf ("isi list a : ");
                Tampil_List (q1.head);
                printf ("isi list b : ");
                Tampil_List (q2.head);
                printf("tekan enter untuk kembali ");
                getchar();
                break;
            case '4':
                Exit (&q1, &q2);
                printf ("cek apakah dealokasi sudah nil\n");
                Tampil_List (q1.head);
                Tampil_List (q2.head);
                lanjut = false;
                break;
        }
    }
    return 0;
}