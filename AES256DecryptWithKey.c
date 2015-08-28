int AES256DecryptWithKey(NSString*, NSData*)(void * arg0, void * arg1) {
    r0 = @"mischa07";
    sp = sp - 0x48;
    r6 = arg1;
    r1 = @selector(getCString:maxLength:encoding:);
    r2 = 0x20270;
    asm{ vmov.i32   q8, #0x0 };
    r8 = sp + 0x20;
    r1 = *r1;
    r2 = *r2;
    r11 = 0x0;
    r3 = 0x21;
    var_1C = *r2;
    asm{ vst1.32    {d16, d17}, [r2] };
    var_60 = 0x4;
    r2 = r8;
    asm{ vst1.32    {d16, d17}, [r8] };
    objc_msgSend(r0, r1, r2, r3, var_60, var_5C, var_58, var_54);
    r6=[@"mischa07" getCString:(char*)buffer maxLength:0x21 encoding:NSUTF8StringEncoding];
    r5 = [r6 length] + 0x10;
    r10 = malloc(r5);
    var_44 = 0;
    [r6 bytes];
    r1 = sp + 0x1c;
    asm{ stm.w      sp, {r2, fp} };
    r2 = 0x1;
    asm{ stm.w      r6, {r0, r4, sl} };
    if (CCCrypt(kCCDecrypt,kCCAlgorithmAES,kCCOptionPKCS7Padding, r8,0x4, var_5C, var_58, var_54, var_50, r5, r1) != 0x0) {
            free(r10);
            r0 = 0x0;
    }
    else {
            r0 = [NSData dataWithBytesNoCopy:r10 length:var_44];
    }
    r2 = *___stack_chk_guard;
    r1 = r2 - var_1C;
    COND = r1 != 0x0;
    if (COND) {
            r0 = __stack_chk_fail();
    }
    return r0;
}