int r_decrypt(int, int, int, int, int, int, int)(int arg0, int arg1, int arg2, int arg3, int arg_0, int arg_4, int arg_8) {
    NSLog(@"=========coming r_decrypt");
    r5 = o_decrypt(arg0, arg1, arg2, arg3);
    //arg0 should be pointer to the buffer
    //Seems Like It Points To A Function Of The Original Binary.Actual Address Filled By MSHookFunction During Runtime No Idea Which Binary It Is.
    r6 = [NSMutableData data];
    [r6 appendBytes:*arg0 length:*(arg0 + 0x8)];
    NSLog(@"de data: %@", r6);
    r0 = r5;
    return r0;
}
