// Address: 00453c84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00453c84(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    if (param_2 != param_1[0x5d]) {
      FUN_00426f28(param_2,param_1);
    }
    uVar1 = FUN_00478b34(param_2);
    FUN_0046557c(param_1,uVar1);
    FUN_00466238(param_1,*(undefined4 *)(param_2 + 0x30));
    FUN_00453af8(param_1,*(undefined1 *)(param_2 + 0x38));
    (**(code **)(*param_1 + 100))(param_1,*(undefined1 *)(param_2 + 0x39));
    FUN_00404928(param_1 + 0x20,*(undefined4 *)(param_2 + 0x58));
    FUN_00453b94(param_1,*(undefined4 *)(param_2 + 0x40));
    FUN_00466128(param_1,*(undefined1 *)(param_2 + 0x3e));
  }
  param_1[0x5d] = param_2;
  return;
}

