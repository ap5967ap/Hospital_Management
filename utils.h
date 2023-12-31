struct date {
    int day;
    int month;
    int year;
};

typedef struct bill{
    int bed;
    int iccu;
    int emergency;           //creating a structure of bills
    int gen_ward;
    int food;
    int pharma;
}bill;

void pat_exist_user();
void pat_new_user();
void doc_exist_user();
void admin_exist_user();
void doc_new_user();
void admin_new_user();
void update(FILE *f1, char str[]);
void prof(FILE *,char name[], char c1[]);
void view_prof(char profile[]);
void booking_data(FILE *,char [], char c1[]);
char* medications(FILE *fin, char name[]);
void view_booking_data(char data[]);
void view_medic(char medic[]);
void make_booking(FILE * book, char str[], char name[]);
void patient(char name[]);
void records(FILE *rec,char name[],char recs[]);
void view_records(char recs[]);
void pharmacy(FILE *pha, char pharmacys[], char name[]);
void view_pharma(char pharm[]);
char * billing(FILE *bill,char name[]);
void view_billing(char bill[]);
void doc_read(FILE *fp,char doc[],char doc_name[]);
void doc_view(char doc[]);
void clean_read(FILE *fp,char clean[]);
void clean_view(char clean[]);
void wards_management(FILE *fp);
void iccu_management(FILE *ifu);
void emergency_info(FILE * ieu);
void admin(char name[]);
void view_prof1(char profile[]);
void prof1(FILE *f,char name[], char c1[]);
void update2(FILE *f1, char str[],char name[]);
int isLeapYear(int year);
int daysInMonth(int month, int year);
int dateToDays(struct date d);
int diff_dates(char *d_in,char *d_out);
void prof2(FILE *f,char name[], char c1[]);
char *view_prof2(char profile[]);
void booking(FILE *fp,FILE *f1,char name[]);
void admit_patient();
void doc(char name[]);
void del(FILE *f1, char str[]);
int ward_bill(char name[],FILE *ward,FILE *fpp);
int iccu_bill(char name[],FILE *iccu,FILE *fpp);
int emergency_bill(char name[],FILE *emergency,FILE *fpp);
void billing_calc(char name[]);
int count_med(char name[]);
void add_medic(char str[]);
void booking(FILE *fp,FILE *f1,char name[]);
