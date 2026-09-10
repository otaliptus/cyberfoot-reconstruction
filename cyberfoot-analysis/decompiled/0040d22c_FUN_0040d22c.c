// Address: 0040d22c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040d22c(undefined4 param_1,int *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar4;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_0040d2a5;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_3 != 0) {
    FUN_0040d174(param_1,param_2);
    puVar4 = &local_c;
    uVar2 = FUN_00404ba4(param_3);
    FUN_00404e04(local_8,*param_2,uVar2,puVar4);
    iVar3 = FUN_00409790(param_3,local_c);
    puVar1 = puStack_1c;
    if (iVar3 == 0) {
      iVar3 = FUN_00404ba4(param_3);
      *param_2 = *param_2 + iVar3;
      puVar1 = puStack_1c;
    }
  }
  puStack_1c = puVar1;
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0040d2ac;
  puStack_20 = (undefined1 *)0x40d2a4;
  FUN_004048d4(&local_c,uStack_24,puVar1);
  return;
}

