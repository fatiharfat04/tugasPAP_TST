#include <stdio.h>

// Tracer Study Tracker

void hitungTracerStudy(){
    int NL, NJ, PBS;
    float PJ, Prmin, skorTracer;

    printf("masukkan jumlah lulusan (NL): ");
    scanf("%d", &NL);

    printf("masukkan jumlah lulusan yang terlacak (NJ): ");
    scanf("%d", &NJ);

    printf("masukkan jumlah lulusan yang bekerja sesuai bidang (PBS): ");
    scanf("%d", &PBS);

    // hitung persentase responden minimum (Prmin)
    if (NL >= 300)
    {
        Prmin = 30.0; // jika lulusan >= 300, Prmin = 30% 
    }
    else
    {
        Prmin = 50.0 - ((float)NL / 300.0 * 20.0);
    }

    // hitung persentase responden (PJ)
    PJ = ((float)NJ / NL) * 100.0;
    
    // validasi dan hitung skor pelacakan lulusan 
    if (PJ >= Prmin)
    {
        skorTracer = (float)PBS / NL * 100.0;
    }
    else
    {
        skorTracer = (PJ / Prmin) * ((float)PBS / NL * 100.0);
    }


    printf("Persentase responden (PJ): %.2f%%\n", PJ);
    printf("Persentase minimum responden (Prmin): %.2f%%\n", Prmin);
    printf("Skor Tracer Study: %.2f\n", skorTracer);
}

int main(){
    printf("TRACER STUDY TRACKER\n");
    printf("=====================\n");

    // panggil fungsi tracer study tracker
    hitungTracerStudy();

    return 0;
}
