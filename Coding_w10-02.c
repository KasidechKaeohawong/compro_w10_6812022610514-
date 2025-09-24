#include <stdio.h>
int main () {

    float math[3];
    float phy[3];
    float chem[3]; //สร้างตัวแปรของ 3 วิชา โดยกำหนด array ไว้สามช่องสำหรับ 3 คน

    printf("Enter score for Student 1:\n");
    printf("    Math: ");
    scanf("%f", &math[0]);
    printf("    Physics: ");
    scanf("%f", &phy[0]);
    printf("    Chemistry: ");
    scanf("%f", &chem[0]); //ใส่ค่าคะแนนในเเต่ละวิชาของคนที่ 1 ใส่ไว้ใน colum 0

    printf("Enter score for Student 2:\n");
    printf("    Math: ");
    scanf("%f", &math[1]);
    printf("    Physics: ");
    scanf("%f", &phy[1]);
    printf("    Chemistry: ");
    scanf("%f", &chem[1]); //ใส่ค่าคะแนนในเเต่ละวิชาของคนที่ 2 ใส่ไว้ใน colum 1

    printf("Enter score for Student 3:\n");
    printf("    Math: ");
    scanf("%f", &math[2]);
    printf("    Physics: ");
    scanf("%f", &phy[2]);
    printf("    Chemistry: ");
    scanf("%f", &chem[2]); //ใส่ค่าคะแนนในเเต่ละวิชาของคนที่ 3 ใส่ไว้ใน colum 2

    float Mavg = (math[0]+math[1]+math[2])/3;
    float Pavg = (phy[0]+phy[1]+phy[2])/3;
    float Cavg = (chem[0]+chem[1]+chem[2])/3; //คำนวณค่าเฉลี่ยของเเต่ละวิชาโดยการนำคะเเนนในวิชานั้นๆ ของเเต่ละคนมาหาร 3

    printf("\nScore Table:\n");
    printf("Student   Math   Physics   Chemistry\n");
    printf("1         %.2f   %.2f      %.2f\n", math[0],phy[0],chem[0]);
    printf("2         %.2f   %.2f      %.2f\n", math[1],phy[1],chem[1]);
    printf("3         %.2f   %.2f      %.2f\n", math[2],phy[2],chem[2]); //แสดงคะแนนของเเต่ละคนในรูปแบบตารางทศนิยม 2 ตำแหน่ง

    printf("\nAverage per subject:\n");
    printf("Math: %.2f\n", Mavg);
    printf("Physics: %.2f\n", Pavg);
    printf("Chemistry: %.2f\n", Cavg); //แสดงค่าเฉลี่ยในเเต่ละรายวิชา

    return 0;
}