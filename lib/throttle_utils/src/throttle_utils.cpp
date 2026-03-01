#include "throttle_utils.h"

int multiThrottleIndexFromChar(char multiThrottle) {
    int mThrottle = multiThrottle - '0';
    if ((mThrottle >= 0) && (mThrottle <= 5)) {
        return mThrottle;
    }
    return 0;
}

char multiThrottleCharFromIndex(int multiThrottleIndex) {
    return '0' + multiThrottleIndex;
}
