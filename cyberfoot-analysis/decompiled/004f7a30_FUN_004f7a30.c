// Address: 004f7a30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f7a30(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 300))(param_1,param_2);
  if ((char)param_3 != cVar1) {
    FUN_004f6b18(param_1[0x166],param_2,param_3);
    if ((char)param_1[0xaf] == '\0') {
      iVar2 = (**(code **)(*param_1 + 0x120))(param_1,param_2);
    }
    else if ((char)param_1[0xaf] == '\x01') {
      iVar2 = param_1[300];
    }
    else {
      iVar2 = 0;
    }
    cVar1 = FUN_00514fb0(param_1);
    if (cVar1 == '\0') {
      FUN_004f86b4(param_1,param_2,iVar2,param_3);
    }
    FUN_0050ecec(param_1,param_2,param_3);
  }
  return;
}

