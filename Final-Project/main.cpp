#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_QUESTIONS 30
#define TIME_LIMIT 10

typedef struct {
    char q[200];
    char opt[4][50];
    int correct;
    int subject;
} Question;

Question Q[TOTAL_QUESTIONS];

// ================= GLOBAL =================
int current = 0;
int score = 0;
int timeLeft = TIME_LIMIT;
int loggedIn = 0;
int finished = 0;

char roll[50], pass[50];

int order[TOTAL_QUESTIONS];
int attempted[3] = {0,0,0};
int correctSub[3] = {0,0,0};

// ================= UI =================
HWND hRoll, hPass, hLoginBtn;
HWND hQ, hTimer, hOpt[4];

// ================= QUESTIONS =================

    

    

    
        void loadQuestions() {

    // ================= ADVANCED MATH (0–9) =================
    strcpy(Q[0].q,"Adv Math Q1: Derivative of x^2?");
    strcpy(Q[0].opt[0],"x");
    strcpy(Q[0].opt[1],"2x");
    strcpy(Q[0].opt[2],"x^2");
    strcpy(Q[0].opt[3],"2");
    Q[0].correct=1; Q[0].subject=1;

    strcpy(Q[1].q,"Adv Math Q2: Integral of 2x dx?");
    strcpy(Q[1].opt[0],"x^2 + C");
    strcpy(Q[1].opt[1],"2x");
    strcpy(Q[1].opt[2],"x");
    strcpy(Q[1].opt[3],"x^3");
    Q[1].correct=0; Q[1].subject=1;

    strcpy(Q[2].q,"Adv Math Q3: (x^2)^2 = ?");
    strcpy(Q[2].opt[0],"x^3");
    strcpy(Q[2].opt[1],"x^4");
    strcpy(Q[2].opt[2],"2x^2");
    strcpy(Q[2].opt[3],"x^2");
    Q[2].correct=1; Q[2].subject=1;

    strcpy(Q[3].q,"Adv Math Q4: Limit of 1/x as x?8?");
    strcpy(Q[3].opt[0],"1");
    strcpy(Q[3].opt[1],"8");
    strcpy(Q[3].opt[2],"0");
    strcpy(Q[3].opt[3],"Undefined");
    Q[3].correct=2; Q[3].subject=1;

    strcpy(Q[4].q,"Adv Math Q5: d/dx(sin x)?");
    strcpy(Q[4].opt[0],"cos x");
    strcpy(Q[4].opt[1],"sin x");
    strcpy(Q[4].opt[2],"-cos x");
    strcpy(Q[4].opt[3],"tan x");
    Q[4].correct=0; Q[4].subject=1;

    strcpy(Q[5].q,"Adv Math Q6: (a+b)^2 expansion?");
    strcpy(Q[5].opt[0],"a^2 + b^2");
    strcpy(Q[5].opt[1],"a^2 + 2ab + b^2");
    strcpy(Q[5].opt[2],"a^2 - b^2");
    strcpy(Q[5].opt[3],"2ab");
    Q[5].correct=1; Q[5].subject=1;

    strcpy(Q[6].q,"Adv Math Q7: log(1) = ?");
    strcpy(Q[6].opt[0],"1");
    strcpy(Q[6].opt[1],"0");
    strcpy(Q[6].opt[2],"8");
    strcpy(Q[6].opt[3],"undefined");
    Q[6].correct=1; Q[6].subject=1;

    strcpy(Q[7].q,"Adv Math Q8: derivative of x^3?");
    strcpy(Q[7].opt[0],"3x^2");
    strcpy(Q[7].opt[1],"x^2");
    strcpy(Q[7].opt[2],"3x");
    strcpy(Q[7].opt[3],"x^3");
    Q[7].correct=0; Q[7].subject=1;

    strcpy(Q[8].q,"Adv Math Q9: sin²x + cos²x = ?");
    strcpy(Q[8].opt[0],"0");
    strcpy(Q[8].opt[1],"1");
    strcpy(Q[8].opt[2],"2");
    strcpy(Q[8].opt[3],"sin x");
    Q[8].correct=1; Q[8].subject=1;

    strcpy(Q[9].q,"Adv Math Q10: derivative of constant?");
    strcpy(Q[9].opt[0],"1");
    strcpy(Q[9].opt[1],"0");
    strcpy(Q[9].opt[2],"x");
    strcpy(Q[9].opt[3],"undefined");
    Q[9].correct=1; Q[9].subject=1;


    // ================= MATH (10–19) =================
    strcpy(Q[10].q,"Math Q1: 5 + 3 = ?");
    strcpy(Q[10].opt[0],"8");
    strcpy(Q[10].opt[1],"7");
    strcpy(Q[10].opt[2],"6");
    strcpy(Q[10].opt[3],"9");
    Q[10].correct=0; Q[10].subject=2;

    strcpy(Q[11].q,"Math Q2: 12 / 4 = ?");
    strcpy(Q[11].opt[0],"2");
    strcpy(Q[11].opt[1],"3");
    strcpy(Q[11].opt[2],"4");
    strcpy(Q[11].opt[3],"6");
    Q[11].correct=1; Q[11].subject=2;

    strcpy(Q[12].q,"Math Q3: 7 * 6 = ?");
    strcpy(Q[12].opt[0],"42");
    strcpy(Q[12].opt[1],"36");
    strcpy(Q[12].opt[2],"48");
    strcpy(Q[12].opt[3],"40");
    Q[12].correct=0; Q[12].subject=2;

    strcpy(Q[13].q,"Math Q4: v81 = ?");
    strcpy(Q[13].opt[0],"7");
    strcpy(Q[13].opt[1],"8");
    strcpy(Q[13].opt[2],"9");
    strcpy(Q[13].opt[3],"10");
    Q[13].correct=2; Q[13].subject=2;

    strcpy(Q[14].q,"Math Q5: 15 - 9 = ?");
    strcpy(Q[14].opt[0],"6");
    strcpy(Q[14].opt[1],"5");
    strcpy(Q[14].opt[2],"7");
    strcpy(Q[14].opt[3],"4");
    Q[14].correct=0; Q[14].subject=2;

    strcpy(Q[15].q,"Math Q6: 9 + 10 = ?");
    strcpy(Q[15].opt[0],"19");
    strcpy(Q[15].opt[1],"20");
    strcpy(Q[15].opt[2],"18");
    strcpy(Q[15].opt[3],"21");
    Q[15].correct=0; Q[15].subject=2;

    strcpy(Q[16].q,"Math Q7: 20 / 5 = ?");
    strcpy(Q[16].opt[0],"3");
    strcpy(Q[16].opt[1],"4");
    strcpy(Q[16].opt[2],"5");
    strcpy(Q[16].opt[3],"6");
    Q[16].correct=1; Q[16].subject=2;

    strcpy(Q[17].q,"Math Q8: 11 + 11 = ?");
    strcpy(Q[17].opt[0],"21");
    strcpy(Q[17].opt[1],"22");
    strcpy(Q[17].opt[2],"23");
    strcpy(Q[17].opt[3],"24");
    Q[17].correct=1; Q[17].subject=2;

    strcpy(Q[18].q,"Math Q9: 100 - 50 = ?");
    strcpy(Q[18].opt[0],"40");
    strcpy(Q[18].opt[1],"50");
    strcpy(Q[18].opt[2],"60");
    strcpy(Q[18].opt[3],"70");
    Q[18].correct=1; Q[18].subject=2;

    strcpy(Q[19].q,"Math Q10: 6 * 6 = ?");
    strcpy(Q[19].opt[0],"30");
    strcpy(Q[19].opt[1],"36");
    strcpy(Q[19].opt[2],"42");
    strcpy(Q[19].opt[3],"40");
    Q[19].correct=1; Q[19].subject=2;


    // ================= ENGLISH (20–29) =================
    strcpy(Q[20].q,"English Q1: Synonym of Happy?");
    strcpy(Q[20].opt[0],"Sad");
    strcpy(Q[20].opt[1],"Joyful");
    strcpy(Q[20].opt[2],"Angry");
    strcpy(Q[20].opt[3],"Tired");
    Q[20].correct=1; Q[20].subject=3;

    strcpy(Q[21].q,"English Q2: Antonym of Hot?");
    strcpy(Q[21].opt[0],"Warm");
    strcpy(Q[21].opt[1],"Cold");
    strcpy(Q[21].opt[2],"Cool");
    strcpy(Q[21].opt[3],"Boiling");
    Q[21].correct=1; Q[21].subject=3;

    strcpy(Q[22].q,"English Q3: Correct spelling?");
    strcpy(Q[22].opt[0],"Recieve");
    strcpy(Q[22].opt[1],"Receive");
    strcpy(Q[22].opt[2],"Receeve");
    strcpy(Q[22].opt[3],"Receve");
    Q[22].correct=1; Q[22].subject=3;

    strcpy(Q[23].q,"English Q4: Synonym of Big?");
    strcpy(Q[23].opt[0],"Small");
    strcpy(Q[23].opt[1],"Large");
    strcpy(Q[23].opt[2],"Tiny");
    strcpy(Q[23].opt[3],"Short");
    Q[23].correct=1; Q[23].subject=3;

    strcpy(Q[24].q,"English Q5: Past tense of Go?");
    strcpy(Q[24].opt[0],"Gone");
    strcpy(Q[24].opt[1],"Went");
    strcpy(Q[24].opt[2],"Going");
    strcpy(Q[24].opt[3],"Goes");
    Q[24].correct=1; Q[24].subject=3;

    strcpy(Q[25].q,"English Q6: Opposite of Fast?");
    strcpy(Q[25].opt[0],"Quick");
    strcpy(Q[25].opt[1],"Slow");
    strcpy(Q[25].opt[2],"Speed");
    strcpy(Q[25].opt[3],"Rapid");
    Q[25].correct=1; Q[25].subject=3;

    strcpy(Q[26].q,"English Q7: Place to study?");
    strcpy(Q[26].opt[0],"Market");
    strcpy(Q[26].opt[1],"School");
    strcpy(Q[26].opt[2],"Park");
    strcpy(Q[26].opt[3],"Shop");
    Q[26].correct=1; Q[26].subject=3;

    strcpy(Q[27].q,"English Q8: Plural of Child?");
    strcpy(Q[27].opt[0],"Childs");
    strcpy(Q[27].opt[1],"Children");
    strcpy(Q[27].opt[2],"Childes");
    strcpy(Q[27].opt[3],"Childer");
    Q[27].correct=1; Q[27].subject=3;

    strcpy(Q[28].q,"English Q9: Brave means?");
    strcpy(Q[28].opt[0],"Fearless");
    strcpy(Q[28].opt[1],"Weak");
    strcpy(Q[28].opt[2],"Lazy");
    strcpy(Q[28].opt[3],"Slow");
    Q[28].correct=0; Q[28].subject=3;

    strcpy(Q[29].q,"English Q10: Opposite of Day?");
    strcpy(Q[29].opt[0],"Night");
    strcpy(Q[29].opt[1],"Morning");
    strcpy(Q[29].opt[2],"Evening");
    strcpy(Q[29].opt[3],"Sun");
    Q[29].correct=0; Q[29].subject=3;
}
    


// ================= SHUFFLE =================
void shuffleQuestions() {

    int i,j,temp;

    srand((unsigned int)time(NULL) ^ GetTickCount());

    for(i=0;i<TOTAL_QUESTIONS;i++)
        order[i]=i;

    for(i=TOTAL_QUESTIONS-1;i>0;i--){
        j = rand()%(i+1);
        temp = order[i];
        order[i]=order[j];
        order[j]=temp;
    }
}

// ================= LOAD UI =================
void loadUI() {

    if(current >= TOTAL_QUESTIONS) return;

    int idx = order[current];

    SetWindowText(hQ, Q[idx].q);
    SetWindowText(hOpt[0], Q[idx].opt[0]);
    SetWindowText(hOpt[1], Q[idx].opt[1]);
    SetWindowText(hOpt[2], Q[idx].opt[2]);
    SetWindowText(hOpt[3], Q[idx].opt[3]);

    timeLeft = TIME_LIMIT;
}

// ================= SAVE RESULT TO FILE  =================
void saveResultToFile() {

    FILE *fp;
    char filename[100];

    sprintf(filename,"%s_result.txt",roll);

    fp = fopen(filename,"w");

    if(fp == NULL) return;

    float merit = (score * 100.0) / TOTAL_QUESTIONS;

    fprintf(fp,"FAST UNIVERSITY RESULT\n\n");
    fprintf(fp,"ROLL NO: %s\n\n",roll);

    fprintf(fp,"ADV MATH: %d / %d\n",correctSub[0],attempted[0]);
    fprintf(fp,"MATH    : %d / %d\n",correctSub[1],attempted[1]);
    fprintf(fp,"ENGLISH : %d / %d\n\n",correctSub[2],attempted[2]);

    fprintf(fp,"TOTAL SCORE: %d / 30\n",score);
    fprintf(fp,"MERIT: %.2f%%\n",merit);

    fclose(fp);
}

// ================= RESULT WINDOW =================
void showResultWindow() {

    char buffer[2000];
    float merit = (score * 100.0) / TOTAL_QUESTIONS;

    sprintf(buffer,
    "==============================\n"
    "   FAST UNIVERSITY RESULT     \n"
    "==============================\n\n"
    "ROLL NO: %s\n\n"
    "ADV MATH: %d / %d\n"
    "MATH    : %d / %d\n"
    "ENGLISH : %d / %d\n\n"
    "TOTAL SCORE: %d / 30\n"
    "MERIT: %.2f%%\n"
    "==============================\n\n"
    "RESULT SAVED IN FILE!",
    roll,

    correctSub[0], attempted[0],
    correctSub[1], attempted[1],
    correctSub[2], attempted[2],

    score, merit
    );

    saveResultToFile();   

    MessageBox(NULL, buffer, "FINAL RESULT", MB_OK);
}

// ================= TIMER =================
void updateTimer(HWND hwnd) {

    if(finished) return;

    char buf[50];
    timeLeft--;

    sprintf(buf,"Time Left: %d sec",timeLeft);
    SetWindowText(hTimer,buf);

    if(timeLeft <= 0){

        int idx = order[current];
        int s = Q[idx].subject - 1;

        attempted[s]++;

        current++;

        if(current < TOTAL_QUESTIONS)
            loadUI();
        else {
            finished = 1;
            ShowWindow(hwnd, SW_HIDE);
            showResultWindow();
        }
    }
}

// ================= ANSWER =================
void answer(int i, HWND hwnd) {

    if(finished) return;

    int idx = order[current];
    int s = Q[idx].subject - 1;

    attempted[s]++;

    if(i == Q[idx].correct){
        score++;
        correctSub[s]++;
    }

    current++;

    if(current < TOTAL_QUESTIONS)
        loadUI();
    else {
        finished = 1;
        ShowWindow(hwnd, SW_HIDE);
        showResultWindow();
    }
}

// ================= LOGIN =================
void login(HWND hwnd) {

    GetWindowText(hRoll, roll, 50);
    GetWindowText(hPass, pass, 50);

    if(strlen(roll)==0 || strlen(pass)==0){
        MessageBox(NULL,"Enter Roll & Password","Error",MB_OK);
        return;
    }

    loggedIn = 1;

    ShowWindow(hRoll, SW_HIDE);
    ShowWindow(hPass, SW_HIDE);
    ShowWindow(hLoginBtn, SW_HIDE);

    loadQuestions();
    shuffleQuestions();

    current = 0;
    loadUI();

    SetTimer(hwnd,1,1000,NULL);
}

// ================= WINDOW =================
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM w, LPARAM l) {

    switch(msg) {

    case WM_CREATE:

        CreateWindow("STATIC","FAST UNIVERSITY ENTRY TEST",
        WS_VISIBLE|WS_CHILD,200,20,400,25,hwnd,NULL,NULL,NULL);

        CreateWindow("STATIC","Enter Roll No:",
        WS_VISIBLE|WS_CHILD,250,70,150,20,hwnd,NULL,NULL,NULL);

        hRoll = CreateWindow("EDIT","",
        WS_VISIBLE|WS_CHILD|WS_BORDER,250,90,200,25,hwnd,NULL,NULL,NULL);

        CreateWindow("STATIC","Enter Password:",
        WS_VISIBLE|WS_CHILD,250,130,150,20,hwnd,NULL,NULL,NULL);

        hPass = CreateWindow("EDIT","",
        WS_VISIBLE|WS_CHILD|WS_BORDER|ES_PASSWORD,250,150,200,25,hwnd,NULL,NULL,NULL);

        hLoginBtn = CreateWindow("BUTTON","LOGIN",
        WS_VISIBLE|WS_CHILD,270,200,140,30,hwnd,(HMENU)1,NULL,NULL);

        hQ = CreateWindow("STATIC","",
        WS_VISIBLE|WS_CHILD,50,250,500,30,hwnd,NULL,NULL,NULL);

        hTimer = CreateWindow("STATIC","",
        WS_VISIBLE|WS_CHILD,50,280,200,20,hwnd,NULL,NULL,NULL);

        hOpt[0]=CreateWindow("BUTTON","",WS_VISIBLE|WS_CHILD,50,320,150,30,hwnd,(HMENU)2,NULL,NULL);
        hOpt[1]=CreateWindow("BUTTON","",WS_VISIBLE|WS_CHILD,250,320,150,30,hwnd,(HMENU)3,NULL,NULL);
        hOpt[2]=CreateWindow("BUTTON","",WS_VISIBLE|WS_CHILD,50,360,150,30,hwnd,(HMENU)4,NULL,NULL);
        hOpt[3]=CreateWindow("BUTTON","",WS_VISIBLE|WS_CHILD,250,360,150,30,hwnd,(HMENU)5,NULL,NULL);

        break;

    case WM_KEYDOWN:
        if(w == VK_RETURN && !loggedIn)
            login(hwnd);
        break;

    case WM_COMMAND:

        if(LOWORD(w)==1)
            login(hwnd);

        if(loggedIn && !finished){

            if(LOWORD(w)==2) answer(0,hwnd);
            if(LOWORD(w)==3) answer(1,hwnd);
            if(LOWORD(w)==4) answer(2,hwnd);
            if(LOWORD(w)==5) answer(3,hwnd);
        }
        break;

    case WM_TIMER:
        if(loggedIn && !finished)
            updateTimer(hwnd);
        break;

    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    }

    return DefWindowProc(hwnd,msg,w,l);
}

// ================= MAIN =================
int WINAPI WinMain(HINSTANCE h,HINSTANCE p,LPSTR a,int n) {

    WNDCLASS wc={0};
    wc.lpfnWndProc=WndProc;
    wc.hInstance=h;
    wc.lpszClassName="ExamApp";

    RegisterClass(&wc);

    HWND hwnd = CreateWindow(
        "ExamApp",
        "University Exam Portal",
        WS_OVERLAPPEDWINDOW,
        100,100,800,550,
        NULL,NULL,h,NULL
    );

    ShowWindow(hwnd,n);

    MSG msg;
    while(GetMessage(&msg,NULL,0,0)){
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
