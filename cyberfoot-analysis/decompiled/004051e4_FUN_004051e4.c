// Address: 004051e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004051e4(undefined1 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 local_20c [512];
  
  if (0xff < param_3) {
    param_3 = 0xff;
  }
  iVar1 = FUN_00405260(param_2);
  if (param_3 <= iVar1) {
    iVar1 = param_3;
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004049f4(local_20c,0x1ff,param_2,iVar1);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (param_3 < iVar1) {
      iVar1 = param_3;
    }
  }
  *param_1 = (char)iVar1;
  if (0 < iVar1) {
    FUN_00402a04(local_20c,param_1 + 1,iVar1);
  }
  return;
}

