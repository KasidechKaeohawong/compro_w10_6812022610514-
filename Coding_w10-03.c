#include <stdio.h>
#include <string.h>

int main() {

    char name1[30], name2[30]; //สร้างตัวแปรชื่อสองอันโดยกำหนด array ไว้ที่ 30

    printf("Enter name of customer 1: ");
    scanf("%s",name1);
    printf("Enter name of customer 2: ");
    scanf("%s",name2); //รับชื่อของผู้ใช้ทั้งสองคน

    int length1 = strlen(name1);
    int length2 = strlen(name2); //สร้าง int length เเละใช้คำสั่ง strlen ในเเต่ละตัวแปร name เพื่อ วัดค่าความยาวของชื่อ

    if (length1 == length2){
        printf("Both of  your names are the same, which is %s.\n", name1);
        printf("The length of the name is %d character.\n", length1); //แสดงข้อความเมื่อค่าความยาวของชื่อทั้งสองนั้นเท่ากัน
    } else {
        printf("Customer 1: %s (%d characters)\n", name1, length1);
        printf("Customer 2: %s (%d characters)\n", name2, length2); //แสดงข้อความเมื่อความยาวของชื่อทั้งสองนั้นไม่เท่ากัน
    }
    
    return 0;
}