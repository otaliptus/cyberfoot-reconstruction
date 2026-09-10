// Address: 00479420
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00479420(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_00427174(param_1,param_2,param_3);
  if ((char)param_3 == '\x01') {
    iVar1 = FUN_00478b34(param_1);
    if (param_2 == iVar1) {
      FUN_00478fd0(param_1,0);
    }
    else if (param_2 == *(int *)(param_1 + 0x7c)) {
      FUN_00479474(param_1,0);
    }
    else if (param_2 == *(int *)(param_1 + 0x68)) {
      FUN_00476f38(param_1,0);
    }
  }
  return;
}

