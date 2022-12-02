#include "lib.h"

bool primo(int n, int num) {
int q = 0;
q = n % num;
bool opzione = true;
if (n>1) {
if (q != 0) {
opzione = primo (n, num+1);
} else if ((q == 0) && (n != num)) {
return false;
} else if ((q == 0) && (n == num)) {
return true;
}
return opzione;
} else {
return false;
}
}
