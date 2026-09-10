// Address: 00503f70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00503f70(int param_1)

{
  int iVar1;
  
  FUN_0050dcf4(param_1);
  FUN_005022fc(*(undefined4 *)(param_1 + 0x510),2);
  FUN_005022fc(*(undefined4 *)(param_1 + 0x588),1);
  iVar1 = *(int *)(param_1 + 0x238);
  *(undefined4 *)(iVar1 + 0x14) = 10;
  *(undefined4 *)(iVar1 + 0x30) = 5;
  *(undefined4 *)(*(int *)(param_1 + 0x268) + 0x14) = 10;
  return;
}

