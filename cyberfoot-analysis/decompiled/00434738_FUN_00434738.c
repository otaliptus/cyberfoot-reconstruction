// Address: 00434738
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00434738(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 8) + -1;
  if (-1 < iVar2) {
    do {
      iVar1 = FUN_00432768(*(undefined4 *)(param_1 + 0x10),iVar2);
      if (param_2 == *(int *)(iVar1 + 8)) {
        FUN_0041df0c(*(undefined4 *)(param_1 + 0x10),iVar2);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 8) + -1;
  if (-1 < iVar2) {
    do {
      iVar1 = FUN_00432768(*(undefined4 *)(param_1 + 0x14),iVar2);
      if (param_2 == *(int *)(iVar1 + 8)) {
        FUN_0041df0c(*(undefined4 *)(param_1 + 0x14),iVar2);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 8) + -1;
  if (-1 < iVar2) {
    do {
      iVar1 = FUN_00432768(*(undefined4 *)(param_1 + 0x18),iVar2);
      if (param_2 == *(int *)(iVar1 + 8)) {
        FUN_0041df0c(*(undefined4 *)(param_1 + 0x18),iVar2);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}

