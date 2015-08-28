char -[UIWindow Debugger](void * self, void * _cmd) {
    if ([UIWindow(didFinishLaunchingWithOptions) Debugger].debuggerPredicate != 0xffffffff) {
            dispatch_once([UIWindow(didFinishLaunchingWithOptions) Debugger].debuggerPredicate, ^{

            	sp = sp - 0x20c;
    			arg_1F8 = *___stack_chk_guard;
    			getpid();
    if (sysctl(sp + 0xc, 0x4, sp + 0x1c, sp + 0x8, 0x0, 0x0) != 0xffffffff) {
            if (*0x213fc == 0x0) {
                    if ((arg_1D & 0x8) != 0x0) {
                            *0x213fc = 0x1;
                    }
            }
    }
    else {
            *0x213fc = 0x0;
            if ((arg_1D & 0x8) != 0x0) {
                    *0x213fc = 0x1;
            }
    }
    r1 = *___stack_chk_guard;
    r0 = r1 - arg_1F8;
    COND = r0 == 0x0;
    if (CPU_FLAGS & E) {
            return;
    }
    __stack_chk_fail();
    return;

            });
    }
    return *0x213fc;
}
