typedef void(*NCALLBACK) (char*, int, int, int);


extern "C" int NEnumPrinters(char* o_printers, unsigned int* o_size);
extern "C" int NOpenPrinter(char* i_prt, unsigned char i_statusFlg, NCALLBACK i_callback);
extern "C" int NClosePrinter(char* i_prt);
extern "C" int NPrint(char* i_prt, char* i_dat, unsigned int i_size, unsigned int* o_jobid);
extern "C" int NDPrint(char* i_prt, unsigned char* i_dat, unsigned int i_size, unsigned int* o_jobid);
extern "C" int NImagePrint(char* i_prt, unsigned char* i_bmp, unsigned int i_width, unsigned int i_height, unsigned int i_channels, unsigned int i_step, unsigned char i_putType, unsigned int* o_jobid);
extern "C" int NImagePrintF(char* i_prt, char* i_bmp, unsigned char i_putType, unsigned int* o_jobid);
extern "C" int NGetStatus(char* i_prt, unsigned long* o_status);
extern "C" int NGetInformation(char* i_prt, unsigned char i_id, void* o_dat, unsigned long* o_time);
extern "C" int NStartDoc(char* i_prt, unsigned int* o_jobid);
extern "C" int NEndDoc(char* i_prt);
extern "C" int NCancelDoc(char* i_prt);
extern "C" unsigned long cputime();

//int NImagePrintWrap(char* i_prt, IplImage* i_bmp, unsigned int i_width, unsigned int i_height, unsigned char i_putType, unsigned int* o_jobid);    // for OpenCV2
extern "C" int NImagePrintWrap(char* i_prt, cv::Mat i_bmp, unsigned int i_width, unsigned int i_height, unsigned char i_putType, unsigned int* o_jobid);