// Address: 004abc0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004abc0c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = FUN_004ab7f0(param_1,param_3);
  puVar3 = (undefined1 *)(iVar2 + param_2 * 3);
  uVar1 = FUN_004080c0(param_4);
  puVar3[2] = uVar1;
  uVar1 = FUN_004080c4(param_4);
  puVar3[1] = uVar1;
  uVar1 = FUN_004080c8(param_4);
  *puVar3 = uVar1;
  return;
}

