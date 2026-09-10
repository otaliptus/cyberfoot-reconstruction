// Address: 0043f3fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043f3fc(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
  
  FUN_00467b40(param_1,param_2,param_3,param_4,param_5);
  if (*(char *)((int)param_1 + 0x171) != '\0') {
    *(undefined1 *)((int)param_1 + 0x171) = 0;
    uVar3 = extraout_EDX;
    if ((((param_5 < 0) ||
         (iVar2 = FUN_00465c0c(param_1), uVar3 = extraout_EDX_00, iVar2 <= param_5)) ||
        (param_4 < 0)) || (iVar2 = FUN_00465c50(param_1), uVar3 = extraout_EDX_01, iVar2 < param_4))
    {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (param_1[0x5a] == 0) {
      *(undefined1 *)((int)param_1 + 0x182) = 0;
      *(undefined1 *)((int)param_1 + 0x181) = 0;
      if ((bVar1) && (1 < (byte)(*(char *)((int)param_1 + 0x182) - 2U))) {
        (**(code **)(*param_1 + 0x7c))();
      }
    }
    else if (bVar1) {
      FUN_0043f5b4(param_1,CONCAT31((int3)((uint)uVar3 >> 8),(char)param_1[0x5c]) ^ 1);
      if ((char)param_1[0x5c] != '\0') {
        (**(code **)(*param_1 + 0x80))();
      }
    }
    else {
      if ((char)param_1[0x5c] != '\0') {
        *(undefined1 *)((int)param_1 + 0x182) = 3;
      }
      (**(code **)(*param_1 + 0x80))();
    }
    if (bVar1) {
      FUN_00403c80(param_1);
    }
    FUN_0043f274(param_1);
    return;
  }
  return;
}

