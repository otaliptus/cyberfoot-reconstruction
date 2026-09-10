// Address: 0054ec54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054ec54(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_1c = *param_3;
  uStack_18 = param_3[1];
  uStack_14 = param_3[2];
  uStack_10 = param_3[3];
  iVar1 = FUN_00430280(param_2);
  FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(param_1 + 0x17c));
  uVar2 = FUN_00430280(param_2);
  FUN_0042af8c(uVar2,&local_1c);
  return;
}

