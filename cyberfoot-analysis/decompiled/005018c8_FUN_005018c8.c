// Address: 005018c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005018c8(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_1c = *param_2;
  uStack_18 = param_2[1];
  uStack_14 = param_2[2];
  uStack_10 = param_2[3];
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = FUN_004e4c08(0xb,CONCAT31((int3)((uint)PTR_DAT_0066aeb0 >> 8),*PTR_DAT_0066aeb0));
  FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),uVar2);
  FUN_0042af8c(iVar1,&local_1c);
  return;
}

