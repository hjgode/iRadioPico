#define ZEIGER_HEIGHT 128
#define ZEIGER_WIDTH 5

// array size is 1280
const uint16_t zeiger[] PROGMEM  = {
  0x51eb, 0x418c, 0x51ee, 0x422b, 0x526a, 
  0x414a, 0x414c, 0x392c, 0x310a, 0x2927, 
  0x51ad, 0x494e, 0x414d, 0x30cb, 0x2909, 
  0x498d, 0x51af, 0x414d, 0x30cc, 0x2908, 
  0x416c, 0x51ae, 0x414c, 0x30cb, 0x2908, 
  0x49ad, 0x51ae, 0x414c, 0x30cb, 0x2908, 
  0x49ad, 0x51ae, 0x494c, 0x30cb, 0x3128, 
  0x49ad, 0x59af, 0x496c, 0x38eb, 0x3949, 
  0x51ad, 0x59af, 0x496c, 0x30ea, 0x3969, 
  0x49ad, 0x59cf, 0x498c, 0x38ea, 0x4189, 
  0x498d, 0x59d0, 0x496e, 0x390a, 0x418a, 
  0x498d, 0x59d0, 0x496e, 0x38ea, 0x3949, 
  0x49ad, 0x59d0, 0x498d, 0x390a, 0x4169, 
  0x51ad, 0x59d0, 0x496d, 0x410a, 0x49aa, 
  0x51ad, 0x61f0, 0x518d, 0x390a, 0x51cb, 
  0x49ac, 0x61f0, 0x518e, 0x412a, 0x4189, 
  0x51cc, 0x61f0, 0x518e, 0x414a, 0x3928, 
  0x51ac, 0x6a11, 0x51ae, 0x412a, 0x4169, 
  0x51ac, 0x6a11, 0x59ae, 0x414a, 0x49aa, 
  0x59ed, 0x69f1, 0x59ae, 0x416a, 0x4989, 
  0x59ed, 0x6a10, 0x59ae, 0x414a, 0x4189, 
  0x59ec, 0x6a10, 0x51ae, 0x416a, 0x49ca, 
  0x51ec, 0x6a10, 0x59ad, 0x416a, 0x520b, 
  0x51ec, 0x6a30, 0x59ae, 0x416a, 0x520b, 
  0x51ec, 0x6a30, 0x59ae, 0x414a, 0x520b, 
  0x51ec, 0x6a10, 0x51ae, 0x394a, 0x520b, 
  0x51ec, 0x69f0, 0x51ae, 0x392a, 0x520b, 
  0x51ec, 0x6a10, 0x518e, 0x414b, 0x520b, 
  0x51cc, 0x6a30, 0x51ad, 0x416b, 0x5a2c, 
  0x49ac, 0x59ef, 0x496d, 0x392a, 0x51eb, 
  0x498b, 0x620f, 0x51ad, 0x412b, 0x51eb, 
  0x51ac, 0x620f, 0x51ad, 0x392b, 0x4169, 
  0x51ad, 0x620f, 0x518d, 0x412b, 0x3949, 
  0x496c, 0x620f, 0x518d, 0x392b, 0x4169, 
  0x518d, 0x620f, 0x51ad, 0x392a, 0x418a, 
  0x518d, 0x620f, 0x518d, 0x390a, 0x418a, 
  0x49cc, 0x6a0f, 0x598d, 0x410b, 0x4169, 
  0x49ac, 0x6a2f, 0x598d, 0x410a, 0x4189, 
  0x51ac, 0x6a0f, 0x598d, 0x412a, 0x3948, 
  0x59cd, 0x69ef, 0x598d, 0x412a, 0x3107, 
  0x51ad, 0x69ef, 0x598c, 0x390a, 0x3106, 
  0x496c, 0x61ef, 0x598d, 0x390a, 0x30e7, 
  0x418c, 0x61f0, 0x516d, 0x390a, 0x30e7, 
  0x41ac, 0x61f0, 0x516d, 0x38ea, 0x30e7, 
  0x418c, 0x6210, 0x516d, 0x390b, 0x3968, 
  0x496d, 0x622f, 0x496c, 0x310b, 0x41c9, 
  0x496d, 0x622f, 0x516d, 0x310a, 0x41ca, 
  0x496d, 0x622f, 0x514d, 0x390a, 0x41ea, 
  0x496d, 0x622f, 0x494d, 0x30ea, 0x41ea, 
  0x498d, 0x622f, 0x494d, 0x30ea, 0x4a0b, 
  0x498d, 0x622f, 0x494d, 0x30ea, 0x41cb, 
  0x496d, 0x620f, 0x516c, 0x30ea, 0x41ca, 
  0x496d, 0x620f, 0x516c, 0x30ea, 0x41ca, 
  0x496d, 0x620f, 0x516c, 0x30ea, 0x41cb, 
  0x496d, 0x620f, 0x516c, 0x390a, 0x41ca, 
  0x496d, 0x61ef, 0x496c, 0x38e9, 0x41a9, 
  0x496d, 0x5a0f, 0x494c, 0x30ea, 0x4a0b, 
  0x496d, 0x59ef, 0x496c, 0x30c9, 0x4a0a, 
  0x496e, 0x59ef, 0x496b, 0x30ea, 0x3148, 
  0x496d, 0x61ef, 0x414b, 0x30ca, 0x418b, 
  0x416c, 0x59ef, 0x416c, 0x30ea, 0x524c, 
  0x496d, 0x620e, 0x412d, 0x28e9, 0x526c, 
  0x496d, 0x620d, 0x412d, 0x2909, 0x526d, 
  0x496d, 0x620d, 0x492d, 0x3109, 0x5a8d, 
  0x496d, 0x6a0e, 0x494d, 0x310a, 0x5a8d, 
  0x516e, 0x6a0e, 0x514d, 0x310a, 0x5aae, 
  0x518e, 0x6a0e, 0x514d, 0x30ea, 0x5aad, 
  0x51ad, 0x6a10, 0x516c, 0x30ea, 0x5aad, 
  0x518d, 0x69f0, 0x494c, 0x30ea, 0x5aad, 
  0x51ae, 0x69f0, 0x516c, 0x390a, 0x524c, 
  0x518d, 0x69f0, 0x496c, 0x390a, 0x49eb, 
  0x598d, 0x69f0, 0x518c, 0x392a, 0x49eb, 
  0x51ad, 0x69cf, 0x518c, 0x392a, 0x49eb, 
  0x51ad, 0x69d0, 0x516c, 0x394a, 0x49cb, 
  0x59ce, 0x69f1, 0x496c, 0x3909, 0x522c, 
  0x51ad, 0x69ef, 0x516c, 0x3929, 0x62ad, 
  0x51ad, 0x620e, 0x496c, 0x390a, 0x730e, 
  0x59af, 0x624e, 0x496c, 0x390a, 0x41a9, 
  0x61f0, 0x622e, 0x496c, 0x390b, 0x4189, 
  0x59af, 0x622e, 0x496c, 0x390a, 0x6ace, 
  0x518e, 0x622e, 0x496c, 0x3109, 0x7b6f, 
  0x518e, 0x620e, 0x496c, 0x390a, 0x736f, 
  0x51ae, 0x620f, 0x496c, 0x392a, 0x734f, 
  0x59cd, 0x620e, 0x496b, 0x390a, 0x7350, 
  0x5a0e, 0x6a2f, 0x496b, 0x392a, 0x7b91, 
  0x622f, 0x7250, 0x51cd, 0x418b, 0x8bf2, 
  0x6a6f, 0x7a92, 0x620f, 0x49cc, 0x8c12, 
  0x6ab1, 0x72b2, 0x624f, 0x51ec, 0x8c33, 
  0x72d1, 0x7ad2, 0x624f, 0x520c, 0x83b1, 
  0x72d1, 0x7ad3, 0x624f, 0x5a2d, 0x7350, 
  0x72d1, 0x7ad2, 0x6a70, 0x5a2d, 0x9454, 
  0x72d1, 0x7af1, 0x6a70, 0x5a2d, 0x9433, 
  0x7af2, 0x7b12, 0x6a6f, 0x5a2d, 0x9c74, 
  0x7b12, 0x7af1, 0x6a90, 0x5a2d, 0x8c33, 
  0x8312, 0x7af1, 0x7290, 0x626e, 0x7b90, 
  0x8333, 0x8312, 0x7290, 0x628f, 0x9c73, 
  0x8333, 0x8332, 0x7290, 0x626e, 0x8bf2, 
  0x8b33, 0x8331, 0x7ab0, 0x6a8f, 0x730f, 
  0x8333, 0x8331, 0x72b0, 0x6a8e, 0x8bf1, 
  0x8333, 0x8331, 0x72b0, 0x6a8e, 0xacd4, 
  0x8333, 0x8352, 0x72d1, 0x6a8f, 0xb537, 
  0x8353, 0x8372, 0x72d1, 0x628f, 0xb557, 
  0x8b73, 0x8b73, 0x72d1, 0x62af, 0xb557, 
  0x8b73, 0x8b53, 0x72d1, 0x6aaf, 0xb557, 
  0x9373, 0x9353, 0x7af1, 0x72cf, 0xb557, 
  0x9393, 0x9353, 0x7b11, 0x72ef, 0xbd77, 
  0x9393, 0x9373, 0x7b31, 0x730f, 0xbd77, 
  0x93b3, 0x9393, 0x7b30, 0x730f, 0xbd97, 
  0x9bb3, 0x9392, 0x8351, 0x732f, 0xb597, 
  0x9bb4, 0x9392, 0x7b31, 0x732f, 0xb557, 
  0x9bb4, 0x9393, 0x7b31, 0x72ef, 0xb557, 
  0x93b4, 0x9393, 0x7b11, 0x7af0, 0xb537, 
  0x93b4, 0x9373, 0x7b11, 0x7af0, 0xacd5, 
  0x9bb4, 0x9393, 0x7b11, 0x7b10, 0xb516, 
  0x9bb3, 0x9b93, 0x7b10, 0x72ef, 0xbd78, 
  0xa3d4, 0x9bb3, 0x8331, 0x7310, 0xb557, 
  0xa3f4, 0xa3d2, 0x8b51, 0x7b30, 0xb517, 
  0xabf4, 0xa3d2, 0x8b71, 0x8331, 0xbd17, 
  0xac15, 0xac12, 0x9351, 0x8b30, 0xac54, 
  0xabf5, 0xa3f2, 0x8b71, 0x8350, 0x9bf2, 
  0xabf4, 0xabd2, 0x9b72, 0x9330, 0x9bb1, 
  0xabd4, 0xabb2, 0x9b31, 0x930f, 0xa3b1, 
  0xa3d3, 0xa3d2, 0x8b51, 0x72ee, 0x9c73, 
  0xac31, 0xa390, 0x8b2e, 0x8b8f, 0xd5f8, 
  0xdd33, 0xd4d2, 0xccb1, 0xc490, 0xee57, 
  0xff1a, 0xfef9, 0xff19, 0xfef9, 0xff5c, 
  0xffff, 0xffde, 0xfffe, 0xffde, 0xffff, 
  0xffff, 0xffff, 0xffff, 0xffff, 0xffff
};