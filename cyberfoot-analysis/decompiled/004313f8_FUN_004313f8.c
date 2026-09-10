// Address: 004313f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004313f8(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != param_1[0xd]) {
    if (param_2 == 0x20000000) {
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
    param_1[0xd] = param_2;
    iVar1 = param_1[10];
    if (1 < *(int *)(iVar1 + 4)) {
      FUN_0043052c(param_1);
      FUN_0042fe4c(param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x10),iVar1 + 0x18);
    }
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}

