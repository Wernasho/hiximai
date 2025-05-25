BITS 32 ; Che, fijate que esto es para 32 bits. 64 son para caprichosos.
GLOBAL start ; variable global "start"

SECTION .data ; sección con datos.. Creo.
    msg    db  "Hello, world! (But from assembly!!!!11!11!11!)", 0Ah, 0 ; el coso que muestra
    msglen equ $ - msg
    title  db  "Top 5 scariest jumpscares:", 0 ;título de la ventana

SECTION .text
extern     MessageBoxA ; "import MessageBoxA | #include<MessageBoxA>"
extern     ExitProcess ; "''"

start:
    ; HWND hWnd = NULL
    push   0

    ; LPCSTR lpText = msg
    push   msg

    ; LPCSTR lpCaption = title
    push   title

    ; UINT uType = MB_OK
    push   0

    call   MessageBoxA

    ; ExitProcess(0)
    push   0
    call   ExitProcess