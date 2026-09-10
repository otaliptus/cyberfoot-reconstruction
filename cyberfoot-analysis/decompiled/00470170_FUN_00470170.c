// Address: 00470170
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00470170(int param_1,int param_2,undefined1 *param_3)

{
  int extraout_EDX;
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = param_2;
    if (*(int *)(param_2 + 8) != 0) {
      FUN_0047013c();
      param_3 = &stack0xfffffffc;
      iVar1 = extraout_EDX;
    }
    if (*(int *)(param_2 + 0x18) == 0) {
      if (*(int *)(param_2 + 0x14) != 0) {
        iVar1 = *(int *)(param_2 + 0xc);
        *(int *)(*(int *)(param_2 + 0x14) + 8) = iVar1;
      }
    }
    else {
      iVar1 = *(int *)(param_2 + 0xc);
      *(int *)(*(int *)(param_2 + 0x18) + 0xc) = iVar1;
    }
    if (*(int *)(param_2 + 0xc) != 0) {
      iVar1 = *(int *)(param_2 + 0x18);
      *(int *)(*(int *)(param_2 + 0xc) + 0x18) = iVar1;
    }
    if (param_2 == *(int *)(param_1 + 100)) {
      *(undefined4 *)(param_1 + 100) = 0;
    }
    FUN_00403a84(param_2,iVar1,param_3);
  }
  return;
}

