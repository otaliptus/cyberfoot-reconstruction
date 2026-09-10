// Address: 00483bc4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00483bc4(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iStack_c;
  
  if ((*(byte *)(param_1 + 0xbd) & 8) == 0) {
    iStack_c = param_3;
    cVar1 = (**(code **)(*param_1 + 0xe4))();
    if (cVar1 != '\0') {
      if (*(char *)((int)param_1 + 0x22f) == '\x01') {
        if ((*(byte *)(param_1 + 0x8a) & 2) == 0) {
          iStack_c = (uint)iStack_c._1_3_ << 8;
        }
        else {
          iStack_c = CONCAT31(iStack_c._1_3_,3);
        }
      }
      else {
        iStack_c = CONCAT31(iStack_c._1_3_,1);
      }
      FUN_00403c80(param_1,&iStack_c);
      if ((char)iStack_c != '\0') {
        if (param_1 == *(int **)(DAT_0066cbf4 + 0x44)) {
          FUN_004875e0(DAT_0066cbf4);
        }
        else if ((char)iStack_c == '\x01') {
          FUN_00483d64(param_1);
        }
        else if ((char)iStack_c == '\x03') {
          FUN_00481950(param_1,1);
        }
        else {
          FUN_00483e00(param_1);
        }
      }
    }
  }
  else {
    param_1[0x93] = 2;
  }
  return;
}

