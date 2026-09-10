// Address: 004ef904
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ef904(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  FUN_004677e0(param_1,param_2,param_3,param_4,param_5);
  if ((char)param_2 == '\0') {
    iVar1 = param_1[0x13] >> 1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + (uint)((param_1[0x13] & 1U) != 0);
    }
    if (param_4 < iVar1) {
      *(undefined1 *)((int)param_1 + 0x219) = DAT_004ef98c;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x219) = DAT_004ef990;
    }
    FUN_0043b234(param_1[0x85],1);
    if (*(short *)((int)param_1 + 0x222) != 0) {
      (*(code *)param_1[0x88])(param_1[0x89],param_1,*(undefined1 *)((int)param_1 + 0x219));
    }
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

