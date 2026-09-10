// Address: 004793a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004793a8(int param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = FUN_00403c10(param_2,PTR_PTR_00472158);
  if (cVar1 == '\0') {
    FUN_0041e750(param_1,param_2);
  }
  else {
    FUN_0047304c(param_2,*(undefined1 *)(param_1 + 0x39));
    (**(code **)(*param_2 + 0x48))(param_2,*(undefined4 *)(param_1 + 0x54));
    FUN_00473234(param_2,*(undefined4 *)(param_1 + 0x58));
    FUN_00473294(param_2,*(undefined4 *)(param_1 + 0x40));
    FUN_00472ee4(param_2,*(undefined4 *)(param_1 + 0x30));
    FUN_00473354(param_2,*(undefined1 *)(param_1 + 0x3e));
    (**(code **)(*param_2 + 0x34))();
  }
  return;
}

